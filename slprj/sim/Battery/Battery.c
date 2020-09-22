#include "Battery_capi.h"
#include "Battery.h"
#include "Battery_private.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_Battery [ 43 ] = { { "mqcwxtbf1sa" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Battery" } , {
"iuxmppif4p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Battery" } , { "euu1zuks3c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Battery" } , { "l2rftjgad3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Battery" } , { "fu1nu122kr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Battery" } , {
"ntyx1uyjgn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Battery" } , { "mz35a1uyii" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Battery" } , { "j3n0eqmhaj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Battery" } , { "crh44rnymn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Battery" } , {
"dttlihs5t0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Battery" } , { "drycukxguq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Battery" } , { "dnhf5pawfr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Battery" } , { "ankhidv45b" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Battery" } , {
"mxa5nxzhui" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Battery" } , { "i4lt4agwjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Battery" } , { "ej4hd4hlfw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Battery" } , { "o5hj4pf0k5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Battery" } , {
"jsn10h40qx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Battery" } , { "l3gwj3hfc2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Battery" } , { "m5b5cwxqxz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Battery" } , { "evvdm5z5t3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Battery" } , {
"nhq0bqkl0c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Battery" } , { "phfmva5rcp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Battery" } , { "aukqzdtxyh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Battery" } , { "gdgslfp2ly" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Battery" } , {
"Battery" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"dtsjv0w3yz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Battery" } , { "b3i5rxtu5a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Battery" } , { "gqf2hjzsn4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Battery" } , { "mr_Battery_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Battery" } , {
"mr_Battery_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Battery" } , {
"mr_Battery_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Battery" } , {
"mr_Battery_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Battery" } , {
"mr_Battery_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Battery" } , { "mr_Battery_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Battery" } , {
"mr_Battery_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "Battery" } , { "mr_Battery_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Battery" } , {
"mr_Battery_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "Battery" } , { "mr_Battery_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Battery" } , {
"mr_Battery_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Battery" } , { "mr_Battery_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Battery" } , { "Battery.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1
, ( NULL ) } , { "Battery.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Battery" } } ; hxvmolygkiq hxvmolygki = { 1890.0 , 1890.0 , { 243.1 , 253.1
, 263.1 , 273.1 , 283.1 , 298.1 , 313.1 } , { 0.0 , 0.01 , 0.02 , 0.03 , 0.04
, 0.05 , 0.06 , 0.07 , 0.08 , 0.09 , 0.1 , 0.11 , 0.12 , 0.13 , 0.14 , 0.15 ,
0.16 , 0.17 , 0.18 , 0.19 , 0.2 , 0.21 , 0.22 , 0.23 , 0.24 , 0.25 , 0.26 ,
0.27 , 0.28 , 0.29 , 0.3 , 0.31 , 0.32 , 0.33 , 0.34 , 0.35 , 0.36 , 0.37 ,
0.38 , 0.39 , 0.4 , 0.41 , 0.42 , 0.43 , 0.44 , 0.45 , 0.46 , 0.47 , 0.48 ,
0.49 , 0.5 , 0.51 , 0.52 , 0.53 , 0.54 , 0.55 , 0.56 , 0.57 , 0.58 , 0.59 ,
0.6 , 0.61 , 0.62 , 0.63 , 0.64 , 0.65 , 0.66 , 0.67 , 0.68 , 0.69 , 0.7 ,
0.71 , 0.72 , 0.73 , 0.74 , 0.75 , 0.76 , 0.77 , 0.78 , 0.79 , 0.8 , 0.81 ,
0.82 , 0.83 , 0.84 , 0.85 , 0.86 , 0.87 , 0.88 , 0.89 , 0.9 , 0.91 , 0.92 ,
0.93 , 0.94 , 0.95 , 0.96 , 0.97 , 0.98 , 0.99 , 1.0 } , { 0.0 , 0.2 , 0.4 ,
0.6 , 0.8 , 1.0 } , { 2.8 , 3.228 , 3.284 , 3.361 , 3.408 , 3.427 , 3.472 ,
3.477 , 3.493 , 3.504 , 3.516 , 3.528 , 3.537 , 3.545 , 3.555 , 3.561 , 3.566
, 3.576 , 3.587 , 3.589 , 3.594 , 3.6 , 3.608 , 3.61 , 3.616 , 3.619 , 3.626
, 3.632 , 3.637 , 3.64 , 3.645 , 3.646 , 3.652 , 3.655 , 3.658 , 3.661 ,
3.664 , 3.668 , 3.673 , 3.678 , 3.68 , 3.681 , 3.686 , 3.692 , 3.699 , 3.702
, 3.705 , 3.71 , 3.717 , 3.723 , 3.728 , 3.733 , 3.735 , 3.742 , 3.749 ,
3.755 , 3.761 , 3.768 , 3.773 , 3.78 , 3.791 , 3.798 , 3.798 , 3.814 , 3.818
, 3.825 , 3.841 , 3.846 , 3.855 , 3.863 , 3.877 , 3.885 , 3.894 , 3.907 ,
3.919 , 3.926 , 3.935 , 3.944 , 3.954 , 3.964 , 3.974 , 3.988 , 3.998 , 4.014
, 4.029 , 4.034 , 4.047 , 4.065 , 4.074 , 4.086 , 4.097 , 4.131 , 4.126 ,
4.138 , 4.15 , 4.18 , 4.174 , 4.187 , 4.207 , 4.231 , 4.221 } , 1.0 , 90.0 ,
{ 0.008846 , 0.006389 , 0.004364 , 0.002031 , 0.001443 , 0.0005603 , 0.001028
, 0.009319 , 0.006554 , 0.004101 , 0.002563 , 0.001825 , 0.0007192 , 0.001338
, 0.009027 , 0.005553 , 0.00406 , 0.002532 , 0.001795 , 0.0006887 , 0.001 ,
0.00847 , 0.005525 , 0.003452 , 0.00246 , 0.001778 , 0.0007557 , 0.001536 ,
0.01032 , 0.006043 , 0.003846 , 0.002716 , 0.001924 , 0.0007355 , 0.001546 ,
0.01314 , 0.007805 , 0.004517 , 0.003047 , 0.002234 , 0.001014 , 0.002789 } ,
0.0 , 100.0 , { 6U , 5U } } ; void nhq0bqkl0c ( gqf2hjzsn4 * const ftggyn125j
, ankhidv45b * localDW , j3n0eqmhaj * localX ) { boolean_T tmp ; localDW ->
ckmx3n4kbu = 1 ; if ( rtmIsFirstInitCond ( ftggyn125j ) ) { localX ->
go0agd4tfz = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ssGetGlobalInitialStatesAvailable ( ftggyn125j -> _mdlRefSfcnS ) ;
localDW -> ckmx3n4kbu = ! tmp ; } else { localDW -> ckmx3n4kbu = 1 ; } } }
void evvdm5z5t3 ( gqf2hjzsn4 * const ftggyn125j , ankhidv45b * localDW ,
j3n0eqmhaj * localX ) { boolean_T tmp ; localDW -> ckmx3n4kbu = 1 ; if (
rtmIsFirstInitCond ( ftggyn125j ) ) { localX -> go0agd4tfz = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( ftggyn125j -> _mdlRefSfcnS ) ; localDW ->
ckmx3n4kbu = ! tmp ; } else { localDW -> ckmx3n4kbu = 1 ; } } } void Battery
( gqf2hjzsn4 * const ftggyn125j , const real_T * nmwxb1wgoz , const real_T *
jpztsvuo3w , real_T * mzbq3lwscm , real_T * hlhc4bk2af , mxa5nxzhui * localB
, ankhidv45b * localDW , j3n0eqmhaj * localX ) { real_T gwarahsmii_p ; localB
-> e0uqsjjr0m = - 1.0 / ( hxvmolygki . P_6 * 3600.0 ) * * nmwxb1wgoz ; if (
localDW -> ckmx3n4kbu != 0 ) { localX -> go0agd4tfz = localB -> gwarahsmii ;
} if ( rtmIsMajorTimeStep ( ftggyn125j ) ) { if ( localX -> go0agd4tfz >=
hxvmolygki . P_1 ) { if ( localX -> go0agd4tfz > hxvmolygki . P_1 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j -> _mdlRefSfcnS ) ; }
localX -> go0agd4tfz = hxvmolygki . P_1 ; } else { if ( localX -> go0agd4tfz
<= hxvmolygki . P_9 ) { if ( localX -> go0agd4tfz < hxvmolygki . P_9 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j -> _mdlRefSfcnS ) ; }
localX -> go0agd4tfz = hxvmolygki . P_9 ; } } } gwarahsmii_p = localX ->
go0agd4tfz / hxvmolygki . P_1 ; * hlhc4bk2af = ( look1_binlcapw (
gwarahsmii_p , hxvmolygki . P_3 , hxvmolygki . P_5 , 100U ) - 1.0 /
hxvmolygki . P_6 * * nmwxb1wgoz * look2_binlcapw ( * jpztsvuo3w ,
gwarahsmii_p , hxvmolygki . P_2 , hxvmolygki . P_4 , hxvmolygki . P_8 ,
hxvmolygki . P_11 , 7U ) ) * hxvmolygki . P_7 ; * mzbq3lwscm = hxvmolygki .
P_10 * gwarahsmii_p ; } void BatteryTID1 ( mxa5nxzhui * localB ) { if (
hxvmolygki . P_0 > hxvmolygki . P_1 ) { localB -> gwarahsmii = hxvmolygki .
P_1 ; } else { localB -> gwarahsmii = hxvmolygki . P_0 ; } } void m5b5cwxqxz
( gqf2hjzsn4 * const ftggyn125j , mxa5nxzhui * localB , ankhidv45b * localDW
, j3n0eqmhaj * localX ) { localDW -> ckmx3n4kbu = 0 ; if ( localX ->
go0agd4tfz == hxvmolygki . P_1 ) { switch ( localDW -> it5axmqqq4 ) { case 3
: if ( localB -> e0uqsjjr0m < 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j -> _mdlRefSfcnS ) ;
localDW -> it5axmqqq4 = 1 ; } break ; case 1 : if ( localB -> e0uqsjjr0m >=
0.0 ) { localDW -> it5axmqqq4 = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j ->
_mdlRefSfcnS ) ; if ( localB -> e0uqsjjr0m < 0.0 ) { localDW -> it5axmqqq4 =
1 ; } else { localDW -> it5axmqqq4 = 3 ; } break ; } } else if ( localX ->
go0agd4tfz == hxvmolygki . P_9 ) { switch ( localDW -> it5axmqqq4 ) { case 4
: if ( localB -> e0uqsjjr0m > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j -> _mdlRefSfcnS ) ;
localDW -> it5axmqqq4 = 2 ; } break ; case 2 : if ( localB -> e0uqsjjr0m <=
0.0 ) { localDW -> it5axmqqq4 = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( ftggyn125j ->
_mdlRefSfcnS ) ; if ( localB -> e0uqsjjr0m > 0.0 ) { localDW -> it5axmqqq4 =
2 ; } else { localDW -> it5axmqqq4 = 4 ; } break ; } } else { localDW ->
it5axmqqq4 = 0 ; } } void m5b5cwxqxzTID1 ( void ) { } void l3gwj3hfc2 (
mxa5nxzhui * localB , ankhidv45b * localDW , ntyx1uyjgn * localXdis ,
mz35a1uyii * localXdot ) { if ( ( localDW -> it5axmqqq4 != 3 ) && ( localDW
-> it5axmqqq4 != 4 ) ) { localXdot -> go0agd4tfz = localB -> e0uqsjjr0m ;
localXdis -> go0agd4tfz = false ; } else { localXdot -> go0agd4tfz = 0.0 ;
localXdis -> go0agd4tfz = ( ( localDW -> it5axmqqq4 == 3 ) || ( localDW ->
it5axmqqq4 == 4 ) || localXdis -> go0agd4tfz ) ; } } void jsn10h40qx (
mxa5nxzhui * localB , ankhidv45b * localDW , j3n0eqmhaj * localX , iuxmppif4p
* localZCSV ) { if ( ( localDW -> it5axmqqq4 == 1 ) && ( localX -> go0agd4tfz
>= hxvmolygki . P_1 ) ) { localZCSV -> mxylke051o = 0.0 ; } else { localZCSV
-> mxylke051o = localX -> go0agd4tfz - hxvmolygki . P_1 ; } if ( ( localDW ->
it5axmqqq4 == 2 ) && ( localX -> go0agd4tfz <= hxvmolygki . P_9 ) ) {
localZCSV -> esq110ztnv = 0.0 ; } else { localZCSV -> esq110ztnv = localX ->
go0agd4tfz - hxvmolygki . P_9 ; } if ( ( localDW -> it5axmqqq4 == 3 ) || (
localDW -> it5axmqqq4 == 4 ) ) { localZCSV -> fodnp0gtlq = localB ->
e0uqsjjr0m ; } else { localZCSV -> fodnp0gtlq = 0.0 ; } } void ej4hd4hlfw (
gqf2hjzsn4 * const ftggyn125j ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( ftggyn125j -> _mdlRefSfcnS , "Battery" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void phfmva5rcp (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , gqf2hjzsn4
* const ftggyn125j , mxa5nxzhui * localB , ankhidv45b * localDW , j3n0eqmhaj
* localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( (
void * ) ftggyn125j , 0 , sizeof ( gqf2hjzsn4 ) ) ; ftggyn125j -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; ftggyn125j -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; ftggyn125j -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( ftggyn125j -> _mdlRefSfcnS , "Battery" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> e0uqsjjr0m = 0.0
; localB -> gwarahsmii = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( ankhidv45b ) ) ; Battery_InitializeDataMapInfo ( ftggyn125j ,
localDW , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL )
) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( ftggyn125j -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
ftggyn125j -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( ftggyn125j -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_Battery_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS
, char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_Battery , 43 ) ; *
retVal = 1 ; } static void mr_Battery_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Battery_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Battery_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Battery_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Battery_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Battery_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Battery_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_Battery_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Battery_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Battery_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Battery_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Battery_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Battery_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Battery_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Battery_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_Battery_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_Battery_GetDWork ( const mqcwxtbf1sa * mdlrefDW ) { static const
char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray
* ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Battery_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) , sizeof
( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 2 ] = {
"mdlrefDW->rtdw.ckmx3n4kbu" , "mdlrefDW->rtdw.it5axmqqq4" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 2 , rtdwDataFieldNames ) ;
mr_Battery_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw .
ckmx3n4kbu ) , sizeof ( mdlrefDW -> rtdw . ckmx3n4kbu ) ) ;
mr_Battery_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW -> rtdw .
it5axmqqq4 ) , sizeof ( mdlrefDW -> rtdw . it5axmqqq4 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_Battery_SetDWork ( mqcwxtbf1sa * mdlrefDW , const mxArray *
ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_Battery_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 ,
sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Battery_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . ckmx3n4kbu ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . ckmx3n4kbu ) ) ; mr_Battery_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . it5axmqqq4 ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
it5axmqqq4 ) ) ; } } void mr_Battery_RegisterSimStateChecksum ( SimStruct * S
) { const uint32_T chksum [ 4 ] = { 3678093098U , 2128983309U , 1764704021U ,
1964706867U , } ; slmrModelRefRegisterSimStateChecksum ( S , "Battery" , &
chksum [ 0 ] ) ; } mxArray * mr_Battery_GetSimStateDisallowedBlocks ( ) {
return NULL ; }
