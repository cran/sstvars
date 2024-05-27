// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Gaussian_densities_Cpp
arma::mat Gaussian_densities_Cpp(arma::mat obs, arma::mat means, arma::cube covmats, arma::mat alpha_mt);
RcppExport SEXP _sstvars_Gaussian_densities_Cpp(SEXP obsSEXP, SEXP meansSEXP, SEXP covmatsSEXP, SEXP alpha_mtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type means(meansSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type covmats(covmatsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha_mt(alpha_mtSEXP);
    rcpp_result_gen = Rcpp::wrap(Gaussian_densities_Cpp(obs, means, covmats, alpha_mt));
    return rcpp_result_gen;
END_RCPP
}
// Gaussian_densities_const_Cpp
arma::vec Gaussian_densities_const_Cpp(arma::mat obs, arma::mat mean, arma::mat cholcovmat);
RcppExport SEXP _sstvars_Gaussian_densities_const_Cpp(SEXP obsSEXP, SEXP meanSEXP, SEXP cholcovmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cholcovmat(cholcovmatSEXP);
    rcpp_result_gen = Rcpp::wrap(Gaussian_densities_const_Cpp(obs, mean, cholcovmat));
    return rcpp_result_gen;
END_RCPP
}
// Student_densities_Cpp
arma::mat Student_densities_Cpp(arma::mat obs, arma::mat means, arma::cube covmats, arma::mat alpha_mt, double df);
RcppExport SEXP _sstvars_Student_densities_Cpp(SEXP obsSEXP, SEXP meansSEXP, SEXP covmatsSEXP, SEXP alpha_mtSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type means(meansSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type covmats(covmatsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha_mt(alpha_mtSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(Student_densities_Cpp(obs, means, covmats, alpha_mt, df));
    return rcpp_result_gen;
END_RCPP
}
// check_Bt_Cpp
bool check_Bt_Cpp(const arma::cube& all_Omegas, const arma::mat& alpha_mt, double posdef_tol);
RcppExport SEXP _sstvars_check_Bt_Cpp(SEXP all_OmegasSEXP, SEXP alpha_mtSEXP, SEXP posdef_tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type all_Omegas(all_OmegasSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alpha_mt(alpha_mtSEXP);
    Rcpp::traits::input_parameter< double >::type posdef_tol(posdef_tolSEXP);
    rcpp_result_gen = Rcpp::wrap(check_Bt_Cpp(all_Omegas, alpha_mt, posdef_tol));
    return rcpp_result_gen;
END_RCPP
}
// get_Bt_Cpp
arma::cube get_Bt_Cpp(const arma::cube& all_Omegas, const arma::mat& alpha_mt);
RcppExport SEXP _sstvars_get_Bt_Cpp(SEXP all_OmegasSEXP, SEXP alpha_mtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type all_Omegas(all_OmegasSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alpha_mt(alpha_mtSEXP);
    rcpp_result_gen = Rcpp::wrap(get_Bt_Cpp(all_Omegas, alpha_mt));
    return rcpp_result_gen;
END_RCPP
}
// get_mu_yt_Cpp
arma::mat get_mu_yt_Cpp(arma::mat obs, arma::mat all_phi0, arma::cube all_A, arma::mat alpha_mt);
RcppExport SEXP _sstvars_get_mu_yt_Cpp(SEXP obsSEXP, SEXP all_phi0SEXP, SEXP all_ASEXP, SEXP alpha_mtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type all_phi0(all_phi0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type all_A(all_ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha_mt(alpha_mtSEXP);
    rcpp_result_gen = Rcpp::wrap(get_mu_yt_Cpp(obs, all_phi0, all_A, alpha_mt));
    return rcpp_result_gen;
END_RCPP
}
// ind_Student_densities_Cpp
arma::vec ind_Student_densities_Cpp(const arma::mat& obs, const arma::mat& means, const arma::cube& impact_matrices, arma::mat& alpha_mt, const arma::vec& distpars, const arma::vec& minval, const double posdef_tol);
RcppExport SEXP _sstvars_ind_Student_densities_Cpp(SEXP obsSEXP, SEXP meansSEXP, SEXP impact_matricesSEXP, SEXP alpha_mtSEXP, SEXP distparsSEXP, SEXP minvalSEXP, SEXP posdef_tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type means(meansSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type impact_matrices(impact_matricesSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type alpha_mt(alpha_mtSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type distpars(distparsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type minval(minvalSEXP);
    Rcpp::traits::input_parameter< const double >::type posdef_tol(posdef_tolSEXP);
    rcpp_result_gen = Rcpp::wrap(ind_Student_densities_Cpp(obs, means, impact_matrices, alpha_mt, distpars, minval, posdef_tol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sstvars_Gaussian_densities_Cpp", (DL_FUNC) &_sstvars_Gaussian_densities_Cpp, 4},
    {"_sstvars_Gaussian_densities_const_Cpp", (DL_FUNC) &_sstvars_Gaussian_densities_const_Cpp, 3},
    {"_sstvars_Student_densities_Cpp", (DL_FUNC) &_sstvars_Student_densities_Cpp, 5},
    {"_sstvars_check_Bt_Cpp", (DL_FUNC) &_sstvars_check_Bt_Cpp, 3},
    {"_sstvars_get_Bt_Cpp", (DL_FUNC) &_sstvars_get_Bt_Cpp, 2},
    {"_sstvars_get_mu_yt_Cpp", (DL_FUNC) &_sstvars_get_mu_yt_Cpp, 4},
    {"_sstvars_ind_Student_densities_Cpp", (DL_FUNC) &_sstvars_ind_Student_densities_Cpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_sstvars(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}