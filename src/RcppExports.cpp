// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cube
IntegerVector cube(NumericVector prob, NumericMatrix Xbal);
RcppExport SEXP _BalancedSampling_cube(SEXP probSEXP, SEXP XbalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    rcpp_result_gen = Rcpp::wrap(cube(prob, Xbal));
    return rcpp_result_gen;
END_RCPP
}
// lcube
IntegerVector lcube(NumericVector prob, NumericMatrix Xspread, NumericMatrix Xbal);
RcppExport SEXP _BalancedSampling_lcube(SEXP probSEXP, SEXP XspreadSEXP, SEXP XbalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xspread(XspreadSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    rcpp_result_gen = Rcpp::wrap(lcube(prob, Xspread, Xbal));
    return rcpp_result_gen;
END_RCPP
}
// flightphase
NumericVector flightphase(NumericVector prob, NumericMatrix Xbal);
RcppExport SEXP _BalancedSampling_flightphase(SEXP probSEXP, SEXP XbalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    rcpp_result_gen = Rcpp::wrap(flightphase(prob, Xbal));
    return rcpp_result_gen;
END_RCPP
}
// landingphase
IntegerVector landingphase(NumericVector prob, NumericVector probflight, NumericMatrix Xbal);
RcppExport SEXP _BalancedSampling_landingphase(SEXP probSEXP, SEXP probflightSEXP, SEXP XbalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type probflight(probflightSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    rcpp_result_gen = Rcpp::wrap(landingphase(prob, probflight, Xbal));
    return rcpp_result_gen;
END_RCPP
}
// lcubeflightphase
NumericVector lcubeflightphase(NumericVector prob, NumericMatrix Xspread, NumericMatrix Xbal);
RcppExport SEXP _BalancedSampling_lcubeflightphase(SEXP probSEXP, SEXP XspreadSEXP, SEXP XbalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xspread(XspreadSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    rcpp_result_gen = Rcpp::wrap(lcubeflightphase(prob, Xspread, Xbal));
    return rcpp_result_gen;
END_RCPP
}
// lcubelandingphase
IntegerVector lcubelandingphase(NumericVector prob, NumericVector probflight, NumericMatrix Xspread, NumericMatrix Xbal);
RcppExport SEXP _BalancedSampling_lcubelandingphase(SEXP probSEXP, SEXP probflightSEXP, SEXP XspreadSEXP, SEXP XbalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type probflight(probflightSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xspread(XspreadSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    rcpp_result_gen = Rcpp::wrap(lcubelandingphase(prob, probflight, Xspread, Xbal));
    return rcpp_result_gen;
END_RCPP
}
// cubestratified
IntegerVector cubestratified(NumericVector prob, NumericMatrix Xbal, IntegerVector integerStrata);
RcppExport SEXP _BalancedSampling_cubestratified(SEXP probSEXP, SEXP XbalSEXP, SEXP integerStrataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type integerStrata(integerStrataSEXP);
    rcpp_result_gen = Rcpp::wrap(cubestratified(prob, Xbal, integerStrata));
    return rcpp_result_gen;
END_RCPP
}
// lcubestratified
IntegerVector lcubestratified(NumericVector prob, NumericMatrix Xspread, NumericMatrix Xbal, IntegerVector integerStrata);
RcppExport SEXP _BalancedSampling_lcubestratified(SEXP probSEXP, SEXP XspreadSEXP, SEXP XbalSEXP, SEXP integerStrataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xspread(XspreadSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xbal(XbalSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type integerStrata(integerStrataSEXP);
    rcpp_result_gen = Rcpp::wrap(lcubestratified(prob, Xspread, Xbal, integerStrata));
    return rcpp_result_gen;
END_RCPP
}
// lcps
Rcpp::NumericVector lcps(Rcpp::NumericVector& prob, Rcpp::NumericMatrix& x);
RcppExport SEXP _BalancedSampling_lcps(SEXP probSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(lcps(prob, x));
    return rcpp_result_gen;
END_RCPP
}
// lpm
NumericVector lpm(NumericVector prob, NumericMatrix x, int h);
RcppExport SEXP _BalancedSampling_lpm(SEXP probSEXP, SEXP xSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(lpm(prob, x, h));
    return rcpp_result_gen;
END_RCPP
}
// lpm1_search_cpp
Rcpp::IntegerVector lpm1_search_cpp(Rcpp::NumericVector& prob, Rcpp::NumericMatrix& x, int bucketSize, int method, double eps);
RcppExport SEXP _BalancedSampling_lpm1_search_cpp(SEXP probSEXP, SEXP xSEXP, SEXP bucketSizeSEXP, SEXP methodSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(lpm1_search_cpp(prob, x, bucketSize, method, eps));
    return rcpp_result_gen;
END_RCPP
}
// lpm1_cpp
Rcpp::IntegerVector lpm1_cpp(Rcpp::NumericVector& prob, Rcpp::NumericMatrix& x, int bucketSize, int method, double eps);
RcppExport SEXP _BalancedSampling_lpm1_cpp(SEXP probSEXP, SEXP xSEXP, SEXP bucketSizeSEXP, SEXP methodSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(lpm1_cpp(prob, x, bucketSize, method, eps));
    return rcpp_result_gen;
END_RCPP
}
// lpm2_int_cpp
Rcpp::IntegerVector lpm2_int_cpp(int n, Rcpp::NumericMatrix& x, int bucketSize, int method);
RcppExport SEXP _BalancedSampling_lpm2_int_cpp(SEXP nSEXP, SEXP xSEXP, SEXP bucketSizeSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(lpm2_int_cpp(n, x, bucketSize, method));
    return rcpp_result_gen;
END_RCPP
}
// lpm2_cpp
Rcpp::IntegerVector lpm2_cpp(Rcpp::NumericVector& prob, Rcpp::NumericMatrix& x, int bucketSize, int method, double eps);
RcppExport SEXP _BalancedSampling_lpm2_cpp(SEXP probSEXP, SEXP xSEXP, SEXP bucketSizeSEXP, SEXP methodSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(lpm2_cpp(prob, x, bucketSize, method, eps));
    return rcpp_result_gen;
END_RCPP
}
// rpm
NumericVector rpm(NumericVector prob);
RcppExport SEXP _BalancedSampling_rpm(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(rpm(prob));
    return rcpp_result_gen;
END_RCPP
}
// sb_voronoi_cpp
double sb_voronoi_cpp(Rcpp::NumericVector& prob, Rcpp::NumericMatrix& x, Rcpp::IntegerVector& sample, int bucketSize, int method);
RcppExport SEXP _BalancedSampling_sb_voronoi_cpp(SEXP probSEXP, SEXP xSEXP, SEXP sampleSEXP, SEXP bucketSizeSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type sample(sampleSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(sb_voronoi_cpp(prob, x, sample, bucketSize, method));
    return rcpp_result_gen;
END_RCPP
}
// scps_cpp
Rcpp::IntegerVector scps_cpp(Rcpp::NumericVector& prob, Rcpp::NumericMatrix& x, int bucketSize, int method, double eps);
RcppExport SEXP _BalancedSampling_scps_cpp(SEXP probSEXP, SEXP xSEXP, SEXP bucketSizeSEXP, SEXP methodSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(scps_cpp(prob, x, bucketSize, method, eps));
    return rcpp_result_gen;
END_RCPP
}
// spm
NumericVector spm(NumericVector prob);
RcppExport SEXP _BalancedSampling_spm(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(spm(prob));
    return rcpp_result_gen;
END_RCPP
}
// vsb
double vsb(NumericVector probs, NumericVector ys, NumericMatrix xs);
RcppExport SEXP _BalancedSampling_vsb(SEXP probsSEXP, SEXP ysSEXP, SEXP xsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    rcpp_result_gen = Rcpp::wrap(vsb(probs, ys, xs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BalancedSampling_cube", (DL_FUNC) &_BalancedSampling_cube, 2},
    {"_BalancedSampling_lcube", (DL_FUNC) &_BalancedSampling_lcube, 3},
    {"_BalancedSampling_flightphase", (DL_FUNC) &_BalancedSampling_flightphase, 2},
    {"_BalancedSampling_landingphase", (DL_FUNC) &_BalancedSampling_landingphase, 3},
    {"_BalancedSampling_lcubeflightphase", (DL_FUNC) &_BalancedSampling_lcubeflightphase, 3},
    {"_BalancedSampling_lcubelandingphase", (DL_FUNC) &_BalancedSampling_lcubelandingphase, 4},
    {"_BalancedSampling_cubestratified", (DL_FUNC) &_BalancedSampling_cubestratified, 3},
    {"_BalancedSampling_lcubestratified", (DL_FUNC) &_BalancedSampling_lcubestratified, 4},
    {"_BalancedSampling_lcps", (DL_FUNC) &_BalancedSampling_lcps, 2},
    {"_BalancedSampling_lpm", (DL_FUNC) &_BalancedSampling_lpm, 3},
    {"_BalancedSampling_lpm1_search_cpp", (DL_FUNC) &_BalancedSampling_lpm1_search_cpp, 5},
    {"_BalancedSampling_lpm1_cpp", (DL_FUNC) &_BalancedSampling_lpm1_cpp, 5},
    {"_BalancedSampling_lpm2_int_cpp", (DL_FUNC) &_BalancedSampling_lpm2_int_cpp, 4},
    {"_BalancedSampling_lpm2_cpp", (DL_FUNC) &_BalancedSampling_lpm2_cpp, 5},
    {"_BalancedSampling_rpm", (DL_FUNC) &_BalancedSampling_rpm, 1},
    {"_BalancedSampling_sb_voronoi_cpp", (DL_FUNC) &_BalancedSampling_sb_voronoi_cpp, 5},
    {"_BalancedSampling_scps_cpp", (DL_FUNC) &_BalancedSampling_scps_cpp, 5},
    {"_BalancedSampling_spm", (DL_FUNC) &_BalancedSampling_spm, 1},
    {"_BalancedSampling_vsb", (DL_FUNC) &_BalancedSampling_vsb, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_BalancedSampling(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
