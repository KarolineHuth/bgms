#' @importFrom Rcpp evalCpp
#' @importFrom Rdpack reprompt
#' @importFrom methods hasArg
#' @importFrom stats qnorm uniroot

reformat_data = function(x, fn.name = "") {
  # Check for missing values ---------------------------------------------------
  missing_values = sapply(1:nrow(x), function(row){any(is.na(x[row, ]))})
  if(sum(missing_values) == nrow(x))
    stop(paste0("All rows in x contain at least one missing response.\n",
                "The ", fn.name," function in the bgm package currently cannot handle missing responses."))
  if(sum(missing_values) > 1)
    warning(paste0("There were ",
                   sum(missing_values),
                   " rows with missing observations in the input matrix x.\n",
                   "Since the ", fn.name," function in the bgm package cannot handle missing responses, these rows were \n",
                   "excluded from the analysis."),
            call. = FALSE)
  if(sum(missing_values) == 1)
    warning(paste0("There was one row with missing observations in the input matrix x.\n",
                   "Since the ", fn.name," function in the bgm package cannot handle missing responses, this row was excluded \n",
                   "from the analysis."),
            call. = FALSE)
  x = x[!missing_values, ]

  if(ncol(x) < 2 || is.null(ncol(x)))
    stop(paste0("After removing missing observations from the input matrix x,\n",
                "there were less than two columns left in x."))
  if(nrow(x) < 2 || is.null(nrow(x)))
    stop(paste0("After removing missing observations from the input matrix x,\n",
                "there were less than two rows left in x."))

  no_nodes = ncol(x)
  no_categories = vector(length = no_nodes)
  for(node in 1:no_nodes) {
    unq_vls = sort(unique(x[,  node]))
    mx_vl = max(unq_vls)

    # Check if observed responses are not all unique ---------------------------
    if(mx_vl == nrow(x))
      stop(paste0("Only unique responses observed for variable ",
                  node,
                  ". We expect >= 1 observations per category."))
    if(length(unq_vls) != mx_vl + 1 || any(unq_vls != 0:mx_vl)) {
      y = x[, node]
      cntr = 0
      for(value in unq_vls) {
        x[y == value, node] = cntr
        cntr = cntr + 1
      }
    }
    no_categories[node] = max(x[,node])

    # Check to see if not all responses are in one category --------------------
    if(no_categories[node] == 0)
      stop(paste0("Only one value [",
                  unq_vls,
                  "] was observed for variable ",
                  node,
                  "."))
  }
  return(list(x = x, no_categories = no_categories))
}

reformat_data_bgm = function(x, na.action) {
  if(na.action == "listwise") {
    # Check for missing values ---------------------------------------------------
    missing_values = sapply(1:nrow(x), function(row){any(is.na(x[row, ]))})
    if(sum(missing_values) == nrow(x))
      stop(paste0("All rows in x contain at least one missing response.\n",
                  "You could try option ``na.action = impute''."))
    if(sum(missing_values) > 1)
      warning(paste0("There were ",
                     sum(missing_values),
                     " rows with missing observations in the input matrix x.\n",
                     "Since ``na.action = listwise'' these rows were excluded \n",
                     "from the analysis."),
              call. = FALSE)
    if(sum(missing_values) == 1)
      warning(paste0("There was one row with missing observations in the input matrix x.\n",
                     "Since ``na.action = listwise'' this row was excluded from \n",
                     "the analysis."),
              call. = FALSE)
    x = x[!missing_values, ]

    if(ncol(x) < 2 || is.null(ncol(x)))
      stop(paste0("After removing missing observations from the input matrix x,\n",
                  "there were less than two columns left in x."))
    if(nrow(x) < 2 || is.null(nrow(x)))
      stop(paste0("After removing missing observations from the input matrix x,\n",
                  "there were less than two rows left in x."))

    missing_index = matrix(NA, nrow = 1, ncol = 1)
    na.impute = FALSE
  } else {
    # Check for missing values -------------------------------------------------
    no_missings = sum(is.na(x))
    no_persons = nrow(x)
    no_nodes = ncol(x)
    if(no_missings > 0) {
      missing_index = matrix(0, nrow = no_missings, ncol = 2)
      na.impute = TRUE
      cntr = 0
      for(node in 1:no_nodes) {
        mis = which(is.na(x[, node]))
        if(length(mis) > 0) {
          for(i in 1:length(mis)) {
            cntr = cntr + 1
            missing_index[cntr, 1] = mis[i]
            missing_index[cntr, 2] = node
            x[mis[i], node] = min(x[, node], #start value for imputation
                                  na.rm = TRUE)
            #This is non-zero if no zeroes are observed (we then collapse over zero below)
          }
        }
      }
    } else {
      missing_index = matrix(NA, nrow = 1, ncol = 1)
      na.impute = FALSE
    }
  }

  no_nodes = ncol(x)
  no_categories = vector(length = no_nodes)
  for(node in 1:no_nodes) {
    unq_vls = sort(unique(x[,  node]))
    mx_vl = max(unq_vls)

    # Check if observed responses are not all unique ---------------------------
    if(mx_vl == nrow(x))
      stop(paste0("Only unique responses observed for variable ",
                  node,
                  ". We expect >= 1 observations per category."))
    if(length(unq_vls) != mx_vl + 1 || any(unq_vls != 0:mx_vl)) {
      y = x[, node]
      cntr = 0
      for(value in unq_vls) {
        x[y == value, node] = cntr
        cntr = cntr + 1
      }
    }
    no_categories[node] = max(x[,node])

    # Check to see if not all responses are in one category --------------------
    if(no_categories[node] == 0)
      stop(paste0("Only one value [",
                  unq_vls,
                  "] was observed for variable ",
                  node,
                  "."))
  }

  return(list(x = x,
              no_categories = no_categories,
              missing_index = missing_index,
              na.impute = na.impute))
}

xi_delta_matching = function(xi, delta, n) {
  n * log(n / xi) / (n / xi - 1) - delta ^ 2
}

set_slab = function(x, no_categories, thresholds, interactions) {
  no_persons = nrow(x)
  no_nodes = ncol(x)
  no_thresholds = sum(no_categories)
  no_interactions = no_nodes * (no_nodes - 1) / 2
  no_parameters = no_thresholds + no_interactions

  hessian = matrix(data = NA,
                   nrow = no_parameters,
                   ncol = no_parameters)
  slab_var = matrix(0,
                    nrow = no_nodes,
                    ncol = no_nodes)

  # Determine asymptotic covariance matrix (inverse hessian) ------------------
  if(!hasArg("thresholds") || !hasArg("interactions")) {
    fit = try(mple(x = x), silent = TRUE)
    if(inherits(fit, "try-error")) {
      thresholds = fit$thresholds
      interactions = fit$interactions
    } else {
      stop("Pseudolikelihood optimization failed. Please check the data. If the
           data checks out, please try different starting values.")
    }
  }

  # Compute Hessian  -----------------------------------------------------------
  hessian[1:no_thresholds, 1:no_thresholds] =
    hessian_thresholds_pseudolikelihood(interactions = interactions,
                                        thresholds = thresholds,
                                        observations = x,
                                        no_categories = no_categories)

  hessian[-(1:no_thresholds), -(1:no_thresholds)] =
    hessian_interactions_pseudolikelihood(interactions = interactions,
                                          thresholds = thresholds,
                                          observations = x,
                                          no_categories = no_categories)

  hessian[-(1:no_thresholds), 1:no_thresholds] =
    hessian_crossparameters(interactions = interactions,
                            thresholds = thresholds,
                            observations = x,
                            no_categories = no_categories)

  hessian[1:no_thresholds, -(1:no_thresholds)] =
    t(hessian[-(1:no_thresholds), 1:no_thresholds])

  asymptotic_covariance = -solve(hessian)[-(1:no_thresholds),
                                          -(1:no_thresholds)]

  # Specify spike and slab matrices -------------------------------------------
  cntr = 0
  for(node in 1:(no_nodes - 1)) {
    for(node_2 in (node + 1):no_nodes) {
      cntr = cntr + 1
      slab_var[node, node_2] = slab_var[node_2, node] =
        no_persons * asymptotic_covariance[cntr, cntr]
    }
  }
  return(slab_var)
}

