// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// anticholinergicTransfer
List anticholinergicTransfer(DataFrame df);
RcppExport SEXP _anticholinergic_anticholinergicTransfer(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(anticholinergicTransfer(df));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_anticholinergic_anticholinergicTransfer", (DL_FUNC) &_anticholinergic_anticholinergicTransfer, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_anticholinergic(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
