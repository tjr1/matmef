#ifndef MEX_DATAHELPER_
#define MEX_DATAHELPER_
/**
 *
 * 	@file - header
 *
 *
 */
#include "mex.h"
#include "meflib/meflib/meflib.h"

mxArray *mxDoubleByValue(sf8 value);
mxArray *mxUInt32ByValue(ui4 value);
mxArray *mxInt32ByValue(si4 value);
mxArray *mxInt64ByValue(si8 value);



#endif   // MEX_DATAHELPER_