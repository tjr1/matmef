# matmef
Matlab wrapper for MEF 3.0 library

## Introduction
Several Matlab functions that wrap around the MEF 3.0 library to read MEF 3.0 data

Adapted from PyMef (by Jan Cimbalnik, Matt Stead, Ben Brinkmann, and Dan Crepeau)

## Building from source
1. Clone or download the matmef repository (and extract if downloaded)
2. Start matlab and set the matmef folder as your working directory
3. To compile the .mex files, run the following lines:
	mex read_mef_session_metadata.c .\meflib\meflib.c .\meflib\mefrec.c mefmat_mapping.c mex_datahelper.c -v
	mex read_mef_ts_data.c .\meflib\meflib.c .\meflib\mefrec.c mefmat_mapping.c mex_datahelper.c -v

## Examples
session = read_mef_session_metadata();