// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sample_omrf_gibbs
IntegerMatrix sample_omrf_gibbs(int no_states, int no_nodes, IntegerVector no_categories, NumericMatrix interactions, NumericMatrix thresholds, int no_iterations);
RcppExport SEXP _bgms_sample_omrf_gibbs(SEXP no_statesSEXP, SEXP no_nodesSEXP, SEXP no_categoriesSEXP, SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP no_iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type no_states(no_statesSEXP);
    Rcpp::traits::input_parameter< int >::type no_nodes(no_nodesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< int >::type no_iterations(no_iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_omrf_gibbs(no_states, no_nodes, no_categories, interactions, thresholds, no_iterations));
    return rcpp_result_gen;
END_RCPP
}
// em_gamma
NumericVector em_gamma(NumericMatrix interactions, NumericMatrix slab_var, double theta, double xi, int no_persons);
RcppExport SEXP _bgms_em_gamma(SEXP interactionsSEXP, SEXP slab_varSEXP, SEXP thetaSEXP, SEXP xiSEXP, SEXP no_personsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type slab_var(slab_varSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< int >::type no_persons(no_personsSEXP);
    rcpp_result_gen = Rcpp::wrap(em_gamma(interactions, slab_var, theta, xi, no_persons));
    return rcpp_result_gen;
END_RCPP
}
// em_interaction_var
NumericVector em_interaction_var(NumericMatrix gamma, NumericMatrix slab_var, double theta, double xi, int no_persons);
RcppExport SEXP _bgms_em_interaction_var(SEXP gammaSEXP, SEXP slab_varSEXP, SEXP thetaSEXP, SEXP xiSEXP, SEXP no_personsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type slab_var(slab_varSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< int >::type no_persons(no_personsSEXP);
    rcpp_result_gen = Rcpp::wrap(em_interaction_var(gamma, slab_var, theta, xi, no_persons));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_sampler
List gibbs_sampler(IntegerMatrix observations, IntegerMatrix gamma, NumericMatrix interactions, NumericMatrix thresholds, IntegerVector no_categories, String interaction_prior, double cauchy_scale, NumericMatrix unit_info, NumericMatrix proposal_sd, IntegerMatrix Index, int no_iterations, int burnin, IntegerMatrix n_cat_obs, double threshold_alpha, double threshold_beta, bool save, bool caching, bool display_progress);
RcppExport SEXP _bgms_gibbs_sampler(SEXP observationsSEXP, SEXP gammaSEXP, SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP no_categoriesSEXP, SEXP interaction_priorSEXP, SEXP cauchy_scaleSEXP, SEXP unit_infoSEXP, SEXP proposal_sdSEXP, SEXP IndexSEXP, SEXP no_iterationsSEXP, SEXP burninSEXP, SEXP n_cat_obsSEXP, SEXP threshold_alphaSEXP, SEXP threshold_betaSEXP, SEXP saveSEXP, SEXP cachingSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< String >::type interaction_prior(interaction_priorSEXP);
    Rcpp::traits::input_parameter< double >::type cauchy_scale(cauchy_scaleSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type unit_info(unit_infoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type Index(IndexSEXP);
    Rcpp::traits::input_parameter< int >::type no_iterations(no_iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type n_cat_obs(n_cat_obsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_alpha(threshold_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_beta(threshold_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type save(saveSEXP);
    Rcpp::traits::input_parameter< bool >::type caching(cachingSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_sampler(observations, gamma, interactions, thresholds, no_categories, interaction_prior, cauchy_scale, unit_info, proposal_sd, Index, no_iterations, burnin, n_cat_obs, threshold_alpha, threshold_beta, save, caching, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// gradient_thresholds_pseudolikelihood
NumericVector gradient_thresholds_pseudolikelihood(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories);
RcppExport SEXP _bgms_gradient_thresholds_pseudolikelihood(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_thresholds_pseudolikelihood(interactions, thresholds, observations, no_categories));
    return rcpp_result_gen;
END_RCPP
}
// gradient_thresholds_pseudoposterior
NumericVector gradient_thresholds_pseudoposterior(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, double threshold_alpha, double threshold_beta);
RcppExport SEXP _bgms_gradient_thresholds_pseudoposterior(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP threshold_alphaSEXP, SEXP threshold_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_alpha(threshold_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_beta(threshold_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_thresholds_pseudoposterior(interactions, thresholds, observations, no_categories, threshold_alpha, threshold_beta));
    return rcpp_result_gen;
END_RCPP
}
// gradient_interactions_pseudolikelihood
NumericVector gradient_interactions_pseudolikelihood(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories);
RcppExport SEXP _bgms_gradient_interactions_pseudolikelihood(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_interactions_pseudolikelihood(interactions, thresholds, observations, no_categories));
    return rcpp_result_gen;
END_RCPP
}
// gradient_interactions_pseudoposterior_normal
NumericVector gradient_interactions_pseudoposterior_normal(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, NumericMatrix interaction_var);
RcppExport SEXP _bgms_gradient_interactions_pseudoposterior_normal(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP interaction_varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type interaction_var(interaction_varSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_interactions_pseudoposterior_normal(interactions, thresholds, observations, no_categories, interaction_var));
    return rcpp_result_gen;
END_RCPP
}
// gradient_interactions_pseudoposterior_cauchy
NumericVector gradient_interactions_pseudoposterior_cauchy(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, double cauchy_scale);
RcppExport SEXP _bgms_gradient_interactions_pseudoposterior_cauchy(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP cauchy_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< double >::type cauchy_scale(cauchy_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_interactions_pseudoposterior_cauchy(interactions, thresholds, observations, no_categories, cauchy_scale));
    return rcpp_result_gen;
END_RCPP
}
// hessian_thresholds_pseudolikelihood
NumericMatrix hessian_thresholds_pseudolikelihood(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories);
RcppExport SEXP _bgms_hessian_thresholds_pseudolikelihood(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_thresholds_pseudolikelihood(interactions, thresholds, observations, no_categories));
    return rcpp_result_gen;
END_RCPP
}
// hessian_thresholds_pseudoposterior
NumericMatrix hessian_thresholds_pseudoposterior(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, double threshold_alpha, double threshold_beta);
RcppExport SEXP _bgms_hessian_thresholds_pseudoposterior(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP threshold_alphaSEXP, SEXP threshold_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_alpha(threshold_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_beta(threshold_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_thresholds_pseudoposterior(interactions, thresholds, observations, no_categories, threshold_alpha, threshold_beta));
    return rcpp_result_gen;
END_RCPP
}
// hessian_interactions_pseudolikelihood
NumericMatrix hessian_interactions_pseudolikelihood(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories);
RcppExport SEXP _bgms_hessian_interactions_pseudolikelihood(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_interactions_pseudolikelihood(interactions, thresholds, observations, no_categories));
    return rcpp_result_gen;
END_RCPP
}
// hessian_interactions_pseudoposterior_normal
NumericMatrix hessian_interactions_pseudoposterior_normal(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, NumericMatrix interaction_var);
RcppExport SEXP _bgms_hessian_interactions_pseudoposterior_normal(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP interaction_varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type interaction_var(interaction_varSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_interactions_pseudoposterior_normal(interactions, thresholds, observations, no_categories, interaction_var));
    return rcpp_result_gen;
END_RCPP
}
// hessian_interactions_pseudoposterior_cauchy
NumericMatrix hessian_interactions_pseudoposterior_cauchy(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, double cauchy_scale);
RcppExport SEXP _bgms_hessian_interactions_pseudoposterior_cauchy(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP cauchy_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< double >::type cauchy_scale(cauchy_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_interactions_pseudoposterior_cauchy(interactions, thresholds, observations, no_categories, cauchy_scale));
    return rcpp_result_gen;
END_RCPP
}
// hessian_crossparameters
NumericMatrix hessian_crossparameters(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories);
RcppExport SEXP _bgms_hessian_crossparameters(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_crossparameters(interactions, thresholds, observations, no_categories));
    return rcpp_result_gen;
END_RCPP
}
// log_pseudolikelihood
double log_pseudolikelihood(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories);
RcppExport SEXP _bgms_log_pseudolikelihood(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    rcpp_result_gen = Rcpp::wrap(log_pseudolikelihood(interactions, thresholds, observations, no_categories));
    return rcpp_result_gen;
END_RCPP
}
// log_unnormalized_pseudoposterior_normal
double log_unnormalized_pseudoposterior_normal(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, NumericMatrix interaction_var, double threshold_alpha, double threshold_beta);
RcppExport SEXP _bgms_log_unnormalized_pseudoposterior_normal(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP interaction_varSEXP, SEXP threshold_alphaSEXP, SEXP threshold_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type interaction_var(interaction_varSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_alpha(threshold_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_beta(threshold_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_unnormalized_pseudoposterior_normal(interactions, thresholds, observations, no_categories, interaction_var, threshold_alpha, threshold_beta));
    return rcpp_result_gen;
END_RCPP
}
// log_unnormalized_pseudoposterior_cauchy
double log_unnormalized_pseudoposterior_cauchy(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, double cauchy_scale, IntegerVector no_categories, double threshold_alpha, double threshold_beta);
RcppExport SEXP _bgms_log_unnormalized_pseudoposterior_cauchy(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP cauchy_scaleSEXP, SEXP no_categoriesSEXP, SEXP threshold_alphaSEXP, SEXP threshold_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< double >::type cauchy_scale(cauchy_scaleSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_alpha(threshold_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_beta(threshold_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_unnormalized_pseudoposterior_cauchy(interactions, thresholds, observations, cauchy_scale, no_categories, threshold_alpha, threshold_beta));
    return rcpp_result_gen;
END_RCPP
}
// emvs_log_unnormalized_pseudoposterior
double emvs_log_unnormalized_pseudoposterior(NumericMatrix interactions, NumericMatrix thresholds, IntegerMatrix observations, IntegerVector no_categories, double xi, NumericMatrix slab_var, double theta, bool hierarchical, double indicator_alpha, double indicator_beta, double threshold_alpha, double threshold_beta);
RcppExport SEXP _bgms_emvs_log_unnormalized_pseudoposterior(SEXP interactionsSEXP, SEXP thresholdsSEXP, SEXP observationsSEXP, SEXP no_categoriesSEXP, SEXP xiSEXP, SEXP slab_varSEXP, SEXP thetaSEXP, SEXP hierarchicalSEXP, SEXP indicator_alphaSEXP, SEXP indicator_betaSEXP, SEXP threshold_alphaSEXP, SEXP threshold_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no_categories(no_categoriesSEXP);
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type slab_var(slab_varSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< bool >::type hierarchical(hierarchicalSEXP);
    Rcpp::traits::input_parameter< double >::type indicator_alpha(indicator_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type indicator_beta(indicator_betaSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_alpha(threshold_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type threshold_beta(threshold_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(emvs_log_unnormalized_pseudoposterior(interactions, thresholds, observations, no_categories, xi, slab_var, theta, hierarchical, indicator_alpha, indicator_beta, threshold_alpha, threshold_beta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bgms_sample_omrf_gibbs", (DL_FUNC) &_bgms_sample_omrf_gibbs, 6},
    {"_bgms_em_gamma", (DL_FUNC) &_bgms_em_gamma, 5},
    {"_bgms_em_interaction_var", (DL_FUNC) &_bgms_em_interaction_var, 5},
    {"_bgms_gibbs_sampler", (DL_FUNC) &_bgms_gibbs_sampler, 18},
    {"_bgms_gradient_thresholds_pseudolikelihood", (DL_FUNC) &_bgms_gradient_thresholds_pseudolikelihood, 4},
    {"_bgms_gradient_thresholds_pseudoposterior", (DL_FUNC) &_bgms_gradient_thresholds_pseudoposterior, 6},
    {"_bgms_gradient_interactions_pseudolikelihood", (DL_FUNC) &_bgms_gradient_interactions_pseudolikelihood, 4},
    {"_bgms_gradient_interactions_pseudoposterior_normal", (DL_FUNC) &_bgms_gradient_interactions_pseudoposterior_normal, 5},
    {"_bgms_gradient_interactions_pseudoposterior_cauchy", (DL_FUNC) &_bgms_gradient_interactions_pseudoposterior_cauchy, 5},
    {"_bgms_hessian_thresholds_pseudolikelihood", (DL_FUNC) &_bgms_hessian_thresholds_pseudolikelihood, 4},
    {"_bgms_hessian_thresholds_pseudoposterior", (DL_FUNC) &_bgms_hessian_thresholds_pseudoposterior, 6},
    {"_bgms_hessian_interactions_pseudolikelihood", (DL_FUNC) &_bgms_hessian_interactions_pseudolikelihood, 4},
    {"_bgms_hessian_interactions_pseudoposterior_normal", (DL_FUNC) &_bgms_hessian_interactions_pseudoposterior_normal, 5},
    {"_bgms_hessian_interactions_pseudoposterior_cauchy", (DL_FUNC) &_bgms_hessian_interactions_pseudoposterior_cauchy, 5},
    {"_bgms_hessian_crossparameters", (DL_FUNC) &_bgms_hessian_crossparameters, 4},
    {"_bgms_log_pseudolikelihood", (DL_FUNC) &_bgms_log_pseudolikelihood, 4},
    {"_bgms_log_unnormalized_pseudoposterior_normal", (DL_FUNC) &_bgms_log_unnormalized_pseudoposterior_normal, 7},
    {"_bgms_log_unnormalized_pseudoposterior_cauchy", (DL_FUNC) &_bgms_log_unnormalized_pseudoposterior_cauchy, 7},
    {"_bgms_emvs_log_unnormalized_pseudoposterior", (DL_FUNC) &_bgms_emvs_log_unnormalized_pseudoposterior, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_bgms(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
