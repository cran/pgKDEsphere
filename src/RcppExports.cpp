// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// pgKDE_sph_vMF
arma::mat pgKDE_sph_vMF(arma::mat x, arma::mat datax, double h, double cl, arma::vec mu, double nu);
RcppExport SEXP _pgKDEsphere_pgKDE_sph_vMF(SEXP xSEXP, SEXP dataxSEXP, SEXP hSEXP, SEXP clSEXP, SEXP muSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type cl(clSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(pgKDE_sph_vMF(x, datax, h, cl, mu, nu));
    return rcpp_result_gen;
END_RCPP
}
// KDE_sph_vMF
arma::mat KDE_sph_vMF(arma::mat x, arma::mat datax, double h, double cl);
RcppExport SEXP _pgKDEsphere_KDE_sph_vMF(SEXP xSEXP, SEXP dataxSEXP, SEXP hSEXP, SEXP clSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type cl(clSEXP);
    rcpp_result_gen = Rcpp::wrap(KDE_sph_vMF(x, datax, h, cl));
    return rcpp_result_gen;
END_RCPP
}
// KDE
arma::vec KDE(arma::mat x, arma::mat datax, double h, double cl);
RcppExport SEXP _pgKDEsphere_KDE(SEXP xSEXP, SEXP dataxSEXP, SEXP hSEXP, SEXP clSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type cl(clSEXP);
    rcpp_result_gen = Rcpp::wrap(KDE(x, datax, h, cl));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pgKDEsphere_pgKDE_sph_vMF", (DL_FUNC) &_pgKDEsphere_pgKDE_sph_vMF, 6},
    {"_pgKDEsphere_KDE_sph_vMF", (DL_FUNC) &_pgKDEsphere_KDE_sph_vMF, 4},
    {"_pgKDEsphere_KDE", (DL_FUNC) &_pgKDEsphere_KDE, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_pgKDEsphere(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
