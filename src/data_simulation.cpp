#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
IntegerMatrix sample_omrf_gibbs(int no_persons,
                                int no_nodes,
                                IntegerVector no_categories,
                                NumericMatrix Interactions,
                                NumericMatrix Thresholds,
                                int no_iterations) {
  
  IntegerMatrix observations(no_persons, no_nodes);
  int max_no_categories = 0;
  for(int node = 0; node < no_nodes; node++) {
    if(no_categories[node] > max_no_categories) {
      max_no_categories = no_categories[node];
    }
  }
  NumericVector probabilities(max_no_categories + 1);
  double exponent = 0.0;
  double rest_score = 0.0;
  double cumsum = 0.0;
  double u = 0.0;
  int score = 0;
  
  for(int iter = 0; iter < no_iterations; iter++) {
    for(int node = 0; node < no_nodes; node++) {
      for(int person =  0; person < no_persons; person++) {
        rest_score = 0.0;
        for(int vertex = 0; vertex < no_nodes; vertex++) {
          rest_score += (no_categories[vertex] - observations(person, vertex)) * 
            Interactions(vertex, node);
        }
        
        cumsum = 0.0;
        for(int category = 0; category < no_categories[node]; category++) {
          score = no_categories[node] - category;
          exponent = Thresholds(node, category) + score * rest_score;
          cumsum += std::exp(exponent);
          probabilities[category] = cumsum;
        }
        cumsum++;
        probabilities[no_categories[node]] = cumsum;
        
        u = R::runif(0, cumsum);
        
        score = 0;
        while (u > probabilities[score]) {
          score++;
        }
        observations(person, node) = score;
      }
    }
    Rcpp::checkUserInterrupt();
  }
  
  return observations;
}