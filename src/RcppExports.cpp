// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/glmmrOptim.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// setParallelOptim
void setParallelOptim(SEXP parallel_, int cores_);
RcppExport SEXP _glmmrOptim_setParallelOptim(SEXP parallel_SEXP, SEXP cores_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type parallel_(parallel_SEXP);
    Rcpp::traits::input_parameter< int >::type cores_(cores_SEXP);
    setParallelOptim(parallel_, cores_);
    return R_NilValue;
END_RCPP
}
// CreateOptimData
SEXP CreateOptimData(Rcpp::List C_list, Rcpp::List X_list, Rcpp::List Z_list, Rcpp::List D_list, SEXP w_diag, Rcpp::List V0_list, SEXP max_obs, SEXP weights, SEXP exp_cond);
RcppExport SEXP _glmmrOptim_CreateOptimData(SEXP C_listSEXP, SEXP X_listSEXP, SEXP Z_listSEXP, SEXP D_listSEXP, SEXP w_diagSEXP, SEXP V0_listSEXP, SEXP max_obsSEXP, SEXP weightsSEXP, SEXP exp_condSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type C_list(C_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type X_list(X_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Z_list(Z_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type D_list(D_listSEXP);
    Rcpp::traits::input_parameter< SEXP >::type w_diag(w_diagSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type V0_list(V0_listSEXP);
    Rcpp::traits::input_parameter< SEXP >::type max_obs(max_obsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type exp_cond(exp_condSEXP);
    rcpp_result_gen = Rcpp::wrap(CreateOptimData(C_list, X_list, Z_list, D_list, w_diag, V0_list, max_obs, weights, exp_cond));
    return rcpp_result_gen;
END_RCPP
}
// CreateOptim
SEXP CreateOptim(SEXP dataptr, SEXP derivptr, SEXP idx_in, int n, int nmax, bool robust_log, bool trace, bool kr, bool uncorr, bool bayes);
RcppExport SEXP _glmmrOptim_CreateOptim(SEXP dataptrSEXP, SEXP derivptrSEXP, SEXP idx_inSEXP, SEXP nSEXP, SEXP nmaxSEXP, SEXP robust_logSEXP, SEXP traceSEXP, SEXP krSEXP, SEXP uncorrSEXP, SEXP bayesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataptr(dataptrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type derivptr(derivptrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type idx_in(idx_inSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type robust_log(robust_logSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< bool >::type kr(krSEXP);
    Rcpp::traits::input_parameter< bool >::type uncorr(uncorrSEXP);
    Rcpp::traits::input_parameter< bool >::type bayes(bayesSEXP);
    rcpp_result_gen = Rcpp::wrap(CreateOptim(dataptr, derivptr, idx_in, n, nmax, robust_log, trace, kr, uncorr, bayes));
    return rcpp_result_gen;
END_RCPP
}
// CreateDerivatives
SEXP CreateDerivatives();
RcppExport SEXP _glmmrOptim_CreateDerivatives() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(CreateDerivatives());
    return rcpp_result_gen;
END_RCPP
}
// FindOptimumDesign
Rcpp::List FindOptimumDesign(SEXP dptr_, SEXP type_);
RcppExport SEXP _glmmrOptim_FindOptimumDesign(SEXP dptr_SEXP, SEXP type_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dptr_(dptr_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type type_(type_SEXP);
    rcpp_result_gen = Rcpp::wrap(FindOptimumDesign(dptr_, type_));
    return rcpp_result_gen;
END_RCPP
}
// AddDesignDerivatives
void AddDesignDerivatives(SEXP dptr_, SEXP mptr_, SEXP is_gaussian_);
RcppExport SEXP _glmmrOptim_AddDesignDerivatives(SEXP dptr_SEXP, SEXP mptr_SEXP, SEXP is_gaussian_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dptr_(dptr_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mptr_(mptr_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type is_gaussian_(is_gaussian_SEXP);
    AddDesignDerivatives(dptr_, mptr_, is_gaussian_);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_glmmrOptim_setParallelOptim", (DL_FUNC) &_glmmrOptim_setParallelOptim, 2},
    {"_glmmrOptim_CreateOptimData", (DL_FUNC) &_glmmrOptim_CreateOptimData, 9},
    {"_glmmrOptim_CreateOptim", (DL_FUNC) &_glmmrOptim_CreateOptim, 10},
    {"_glmmrOptim_CreateDerivatives", (DL_FUNC) &_glmmrOptim_CreateDerivatives, 0},
    {"_glmmrOptim_FindOptimumDesign", (DL_FUNC) &_glmmrOptim_FindOptimumDesign, 2},
    {"_glmmrOptim_AddDesignDerivatives", (DL_FUNC) &_glmmrOptim_AddDesignDerivatives, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_glmmrOptim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
