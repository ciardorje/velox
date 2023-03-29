// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// aggregate_cpp
List aggregate_cpp(List rasterbands, NumericVector dim, NumericVector res, NumericVector factor, int aggtype);
RcppExport SEXP _velox_aggregate_cpp(SEXP rasterbandsSEXP, SEXP dimSEXP, SEXP resSEXP, SEXP factorSEXP, SEXP aggtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type rasterbands(rasterbandsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< int >::type aggtype(aggtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(aggregate_cpp(rasterbands, dim, res, factor, aggtype));
    return rcpp_result_gen;
END_RCPP
}
// getcoordinates_cpp
NumericMatrix getcoordinates_cpp(NumericVector dim, NumericVector res, NumericVector extent);
RcppExport SEXP _velox_getcoordinates_cpp(SEXP dimSEXP, SEXP resSEXP, SEXP extentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type extent(extentSEXP);
    rcpp_result_gen = Rcpp::wrap(getcoordinates_cpp(dim, res, extent));
    return rcpp_result_gen;
END_RCPP
}
// medianfocal_cpp
NumericMatrix medianfocal_cpp(NumericMatrix rasterband, int wrow, int wcol, int band);
RcppExport SEXP _velox_medianfocal_cpp(SEXP rasterbandSEXP, SEXP wrowSEXP, SEXP wcolSEXP, SEXP bandSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type rasterband(rasterbandSEXP);
    Rcpp::traits::input_parameter< int >::type wrow(wrowSEXP);
    Rcpp::traits::input_parameter< int >::type wcol(wcolSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    rcpp_result_gen = Rcpp::wrap(medianfocal_cpp(rasterband, wrow, wcol, band));
    return rcpp_result_gen;
END_RCPP
}
// sumfocal_cpp
NumericMatrix sumfocal_cpp(NumericMatrix rasterband, NumericMatrix weights, int wrow, int wcol, int band);
RcppExport SEXP _velox_sumfocal_cpp(SEXP rasterbandSEXP, SEXP weightsSEXP, SEXP wrowSEXP, SEXP wcolSEXP, SEXP bandSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type rasterband(rasterbandSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type wrow(wrowSEXP);
    Rcpp::traits::input_parameter< int >::type wcol(wcolSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    rcpp_result_gen = Rcpp::wrap(sumfocal_cpp(rasterband, weights, wrow, wcol, band));
    return rcpp_result_gen;
END_RCPP
}
// meanfocal_cpp
NumericMatrix meanfocal_cpp(NumericMatrix rasterband, NumericMatrix weights, int wrow, int wcol, int band);
RcppExport SEXP _velox_meanfocal_cpp(SEXP rasterbandSEXP, SEXP weightsSEXP, SEXP wrowSEXP, SEXP wcolSEXP, SEXP bandSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type rasterband(rasterbandSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type wrow(wrowSEXP);
    Rcpp::traits::input_parameter< int >::type wcol(wcolSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    rcpp_result_gen = Rcpp::wrap(meanfocal_cpp(rasterband, weights, wrow, wcol, band));
    return rcpp_result_gen;
END_RCPP
}
// maxfocal_cpp
NumericMatrix maxfocal_cpp(NumericMatrix rasterband, NumericMatrix weights, int wrow, int wcol, int band);
RcppExport SEXP _velox_maxfocal_cpp(SEXP rasterbandSEXP, SEXP weightsSEXP, SEXP wrowSEXP, SEXP wcolSEXP, SEXP bandSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type rasterband(rasterbandSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type wrow(wrowSEXP);
    Rcpp::traits::input_parameter< int >::type wcol(wcolSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    rcpp_result_gen = Rcpp::wrap(maxfocal_cpp(rasterband, weights, wrow, wcol, band));
    return rcpp_result_gen;
END_RCPP
}
// hittest_cpp
NumericMatrix hittest_cpp(List rasterbands, NumericVector dim, NumericVector extent, NumericVector res, NumericVector polyX, NumericVector polyY, int polyCorners);
RcppExport SEXP _velox_hittest_cpp(SEXP rasterbandsSEXP, SEXP dimSEXP, SEXP extentSEXP, SEXP resSEXP, SEXP polyXSEXP, SEXP polyYSEXP, SEXP polyCornersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type rasterbands(rasterbandsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type extent(extentSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type polyX(polyXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type polyY(polyYSEXP);
    Rcpp::traits::input_parameter< int >::type polyCorners(polyCornersSEXP);
    rcpp_result_gen = Rcpp::wrap(hittest_cpp(rasterbands, dim, extent, res, polyX, polyY, polyCorners));
    return rcpp_result_gen;
END_RCPP
}
// unhit_cpp
NumericMatrix unhit_cpp(NumericMatrix cmat, NumericVector polyX, NumericVector polyY, int polyCorners);
RcppExport SEXP _velox_unhit_cpp(SEXP cmatSEXP, SEXP polyXSEXP, SEXP polyYSEXP, SEXP polyCornersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type cmat(cmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type polyX(polyXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type polyY(polyYSEXP);
    Rcpp::traits::input_parameter< int >::type polyCorners(polyCornersSEXP);
    rcpp_result_gen = Rcpp::wrap(unhit_cpp(cmat, polyX, polyY, polyCorners));
    return rcpp_result_gen;
END_RCPP
}
// im2col_cpp
NumericMatrix im2col_cpp(NumericMatrix rasterband, NumericVector dim, int wrow, int wcol, int band, double padval, int rowframe, int colframe, int rowstride, int colstride);
RcppExport SEXP _velox_im2col_cpp(SEXP rasterbandSEXP, SEXP dimSEXP, SEXP wrowSEXP, SEXP wcolSEXP, SEXP bandSEXP, SEXP padvalSEXP, SEXP rowframeSEXP, SEXP colframeSEXP, SEXP rowstrideSEXP, SEXP colstrideSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type rasterband(rasterbandSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type wrow(wrowSEXP);
    Rcpp::traits::input_parameter< int >::type wcol(wcolSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< double >::type padval(padvalSEXP);
    Rcpp::traits::input_parameter< int >::type rowframe(rowframeSEXP);
    Rcpp::traits::input_parameter< int >::type colframe(colframeSEXP);
    Rcpp::traits::input_parameter< int >::type rowstride(rowstrideSEXP);
    Rcpp::traits::input_parameter< int >::type colstride(colstrideSEXP);
    rcpp_result_gen = Rcpp::wrap(im2col_cpp(rasterband, dim, wrow, wcol, band, padval, rowframe, colframe, rowstride, colstride));
    return rcpp_result_gen;
END_RCPP
}
// col2im_cpp
NumericMatrix col2im_cpp(NumericMatrix rasterband, NumericVector dim, NumericMatrix colmat, int wrow, int wcol, int band, int rowframe, int colframe, int rowstride, int colstride);
RcppExport SEXP _velox_col2im_cpp(SEXP rasterbandSEXP, SEXP dimSEXP, SEXP colmatSEXP, SEXP wrowSEXP, SEXP wcolSEXP, SEXP bandSEXP, SEXP rowframeSEXP, SEXP colframeSEXP, SEXP rowstrideSEXP, SEXP colstrideSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type rasterband(rasterbandSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type colmat(colmatSEXP);
    Rcpp::traits::input_parameter< int >::type wrow(wrowSEXP);
    Rcpp::traits::input_parameter< int >::type wcol(wcolSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type rowframe(rowframeSEXP);
    Rcpp::traits::input_parameter< int >::type colframe(colframeSEXP);
    Rcpp::traits::input_parameter< int >::type rowstride(rowstrideSEXP);
    Rcpp::traits::input_parameter< int >::type colstride(colstrideSEXP);
    rcpp_result_gen = Rcpp::wrap(col2im_cpp(rasterband, dim, colmat, wrow, wcol, band, rowframe, colframe, rowstride, colstride));
    return rcpp_result_gen;
END_RCPP
}
// pointextract_cpp
NumericMatrix pointextract_cpp(List rasterbands, NumericVector dim, NumericVector extent, NumericVector res, NumericMatrix pcoords);
RcppExport SEXP _velox_pointextract_cpp(SEXP rasterbandsSEXP, SEXP dimSEXP, SEXP extentSEXP, SEXP resSEXP, SEXP pcoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type rasterbands(rasterbandsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type extent(extentSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pcoords(pcoordsSEXP);
    rcpp_result_gen = Rcpp::wrap(pointextract_cpp(rasterbands, dim, extent, res, pcoords));
    return rcpp_result_gen;
END_RCPP
}
// color_cpp
NumericMatrix color_cpp(NumericMatrix rasterband, NumericMatrix coordvalmat, NumericVector extent, NumericVector res);
RcppExport SEXP _velox_color_cpp(SEXP rasterbandSEXP, SEXP coordvalmatSEXP, SEXP extentSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type rasterband(rasterbandSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coordvalmat(coordvalmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type extent(extentSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(color_cpp(rasterband, coordvalmat, extent, res));
    return rcpp_result_gen;
END_RCPP
}
// checktype_cpp
NumericVector checktype_cpp(List rasterbands);
RcppExport SEXP _velox_checktype_cpp(SEXP rasterbandsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type rasterbands(rasterbandsSEXP);
    rcpp_result_gen = Rcpp::wrap(checktype_cpp(rasterbands));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_BOOSTGEOM();

static const R_CallMethodDef CallEntries[] = {
    {"_velox_aggregate_cpp", (DL_FUNC) &_velox_aggregate_cpp, 5},
    {"_velox_getcoordinates_cpp", (DL_FUNC) &_velox_getcoordinates_cpp, 3},
    {"_velox_medianfocal_cpp", (DL_FUNC) &_velox_medianfocal_cpp, 4},
    {"_velox_sumfocal_cpp", (DL_FUNC) &_velox_sumfocal_cpp, 5},
    {"_velox_meanfocal_cpp", (DL_FUNC) &_velox_meanfocal_cpp, 5},
    {"_velox_maxfocal_cpp", (DL_FUNC) &_velox_maxfocal_cpp, 5},
    {"_velox_hittest_cpp", (DL_FUNC) &_velox_hittest_cpp, 7},
    {"_velox_unhit_cpp", (DL_FUNC) &_velox_unhit_cpp, 4},
    {"_velox_im2col_cpp", (DL_FUNC) &_velox_im2col_cpp, 10},
    {"_velox_col2im_cpp", (DL_FUNC) &_velox_col2im_cpp, 10},
    {"_velox_pointextract_cpp", (DL_FUNC) &_velox_pointextract_cpp, 5},
    {"_velox_color_cpp", (DL_FUNC) &_velox_color_cpp, 4},
    {"_velox_checktype_cpp", (DL_FUNC) &_velox_checktype_cpp, 1},
    {"_rcpp_module_boot_BOOSTGEOM", (DL_FUNC) &_rcpp_module_boot_BOOSTGEOM, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_velox(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
