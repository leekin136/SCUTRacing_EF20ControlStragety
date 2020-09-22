#include "EDS_capi.h"
#include "EDS.h"
#include "EDS_private.h"
#include "look1_binlxpw.h"
static RegMdlInfo rtMdlInfo_EDS [ 43 ] = { { "dglgh01jbp1" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "EDS" } , { "ptuovjkhs1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS" } , {
"eyogzjqonj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS"
} , { "k23wehn3sn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EDS" } , { "o0jxbwk4a0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "EDS" } , { "hyzkh2onxy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "EDS" } , { "dhrgpckkpj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EDS" } , { "d2xhivalt0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS" } , {
"la0wrfneca" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS"
} , { "c2d3etttxd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EDS" } , { "cfvaixkdix" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "EDS" } , { "btdmdaumhr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "EDS" } , { "pkakqulqic" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EDS" } , { "popjryh50k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS" } , {
"o1ehplvjmi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS"
} , { "pcpwp5chy2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EDS" } , { "fqxo0knw3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "EDS" } , { "grhiuxld4g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "EDS" } , { "ehqaws4onp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EDS" } , { "mswf3wfk1p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS" } , {
"fq1cqbwtjw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS"
} , { "gbapffbdit" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EDS" } , { "aggg415ceg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "EDS" } , { "dg5oyk4uku" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "EDS" } , { "mji0vjrzz3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EDS" } , { "EDS" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, 0 , ( NULL ) } , { "myyslule2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "EDS" } , { "n0rkb0iqnq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EDS" } , { "hr11lwjv3k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EDS" } , {
"mr_EDS_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "EDS" } , { "mr_EDS_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EDS" } , {
"mr_EDS_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "EDS" } , { "mr_EDS_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EDS" } , {
"mr_EDS_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "EDS" } , { "mr_EDS_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EDS" } , {
"mr_EDS_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "EDS" } , { "mr_EDS_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EDS" } , {
"mr_EDS_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "EDS" } , { "mr_EDS_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "EDS" } , { "mr_EDS_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EDS" } , {
"mr_EDS_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EDS" }
, { "EDS.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "EDS.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "EDS" } } ; cuuwyo5gw5k
cuuwyo5gw5 = { 0.0 , 1.0 , 0.0 , 0.0 , - 30.0 , 100.0 , 2.0 , 30.0 , - 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , 12.0 , 24.0 , 36.0 , 48.0 , 60.0 } , {
0.0 , 0.2 , 0.4 , 0.6 , 0.8 , 1.0 } , 0.0025 , 1.54 , 1.4 , 1.0 , 9.8 } ;
void gbapffbdit ( d2xhivalt0 * localX ) { localX -> n40l1s5pzs = cuuwyo5gw5 .
P_3 ; localX -> fhsu0lzfk3 = cuuwyo5gw5 . P_2 ; } void fq1cqbwtjw (
d2xhivalt0 * localX ) { localX -> n40l1s5pzs = cuuwyo5gw5 . P_3 ; localX ->
fhsu0lzfk3 = cuuwyo5gw5 . P_2 ; } void EDS ( hr11lwjv3k * const ghzvm04goy ,
const real_T cgspcqr3fx [ 2 ] , const real_T * a3ip2cjjw3 , const real_T *
b3yxex4e3k , const real_T * eja4hbvwxl , const real_T * c4qmkncvhf , const
real_T * lzjqm4axef , real_T * l3sd4k1oi3 , real_T * ibcaxrtnq4 , real_T *
nqzcqciqa4 , popjryh50k * localB , pkakqulqic * localDW , d2xhivalt0 * localX
) { real_T iy4gdpfkks_p ; localB -> lmyp1aewby = cuuwyo5gw5 . P_18 *
cuuwyo5gw5 . P_20 / * a3ip2cjjw3 ; localB -> my0xwnkptn = 1.0 / ( *
a3ip2cjjw3 * * a3ip2cjjw3 * cuuwyo5gw5 . P_16 + cuuwyo5gw5 . P_19 ) * (
cgspcqr3fx [ 0 ] * * a3ip2cjjw3 ) * localB -> or13zggi0k ; if (
rtmIsMajorTimeStep ( ghzvm04goy ) && rtmIsSampleHit ( ghzvm04goy , 1 , 0 ) )
{ if ( rtmIsMajorTimeStep ( ghzvm04goy ) ) { localDW -> lr3p3pygkx = ( localB
-> my0xwnkptn > localB -> lmyp1aewby ) ; } localB -> ipowze40pn = localDW ->
lr3p3pygkx ; } localB -> fq2g1ugbhz = cuuwyo5gw5 . P_8 * localB -> lmyp1aewby
; if ( rtmIsMajorTimeStep ( ghzvm04goy ) && rtmIsSampleHit ( ghzvm04goy , 1 ,
0 ) ) { if ( rtmIsMajorTimeStep ( ghzvm04goy ) ) { localDW -> o5y3gmwq4p = (
localB -> my0xwnkptn < localB -> fq2g1ugbhz ) ; } localB -> mja4p4jknh =
localDW -> o5y3gmwq4p ; } if ( localB -> ipowze40pn ) { iy4gdpfkks_p = localB
-> lmyp1aewby ; } else if ( localB -> mja4p4jknh ) { iy4gdpfkks_p = localB ->
fq2g1ugbhz ; } else { iy4gdpfkks_p = localB -> my0xwnkptn ; } localB ->
i2vdugbpjb = iy4gdpfkks_p - * c4qmkncvhf ; localB -> bshay5ehls = (
cuuwyo5gw5 . P_0 * localB -> i2vdugbpjb - localX -> fhsu0lzfk3 ) * cuuwyo5gw5
. P_5 ; localB -> bqed15abp0 = ( cuuwyo5gw5 . P_6 * localB -> i2vdugbpjb +
localX -> n40l1s5pzs ) + localB -> bshay5ehls ; if ( rtmIsMajorTimeStep (
ghzvm04goy ) ) { localDW -> bevosgzild = localB -> bqed15abp0 >= cuuwyo5gw5 .
P_7 ? 1 : localB -> bqed15abp0 > cuuwyo5gw5 . P_4 ? 0 : - 1 ; } localB ->
bd0zb3ys15 = localDW -> bevosgzild == 1 ? cuuwyo5gw5 . P_7 : localDW ->
bevosgzild == - 1 ? cuuwyo5gw5 . P_4 : localB -> bqed15abp0 ; if (
rtmIsMajorTimeStep ( ghzvm04goy ) ) { localDW -> ky40cmm5f0 = localB ->
bd0zb3ys15 >= cuuwyo5gw5 . P_9 ? 1 : localB -> bd0zb3ys15 > cuuwyo5gw5 . P_10
? 0 : - 1 ; localDW -> l30hwl0lao = localB -> bd0zb3ys15 >= cuuwyo5gw5 . P_11
? 1 : localB -> bd0zb3ys15 > cuuwyo5gw5 . P_12 ? 0 : - 1 ; localDW ->
icrn5ggw3p = ( localB -> i2vdugbpjb > cuuwyo5gw5 . P_13 ) ; } if ( localDW ->
icrn5ggw3p ) { iy4gdpfkks_p = localDW -> ky40cmm5f0 == 1 ? cuuwyo5gw5 . P_9 :
localDW -> ky40cmm5f0 == - 1 ? cuuwyo5gw5 . P_10 : localB -> bd0zb3ys15 ; }
else { iy4gdpfkks_p = localDW -> l30hwl0lao == 1 ? cuuwyo5gw5 . P_11 :
localDW -> l30hwl0lao == - 1 ? cuuwyo5gw5 . P_12 : localB -> bd0zb3ys15 ; } *
l3sd4k1oi3 = * b3yxex4e3k + iy4gdpfkks_p ; * ibcaxrtnq4 = * eja4hbvwxl -
iy4gdpfkks_p ; localB -> g20nmlaxoe = cuuwyo5gw5 . P_1 * localB -> i2vdugbpjb
; * nqzcqciqa4 = look1_binlxpw ( * lzjqm4axef , cuuwyo5gw5 . P_15 ,
cuuwyo5gw5 . P_14 , 5U ) ; } void EDSTID2 ( popjryh50k * localB ) { localB ->
or13zggi0k = 1.0 / cuuwyo5gw5 . P_17 ; } void mswf3wfk1p ( hr11lwjv3k * const
ghzvm04goy ) { if ( rtmIsMajorTimeStep ( ghzvm04goy ) ) { if ( memcmp (
ghzvm04goy -> nonContDerivSignal [ 0 ] . pCurrVal , ghzvm04goy ->
nonContDerivSignal [ 0 ] . pPrevVal , ghzvm04goy -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ghzvm04goy -> nonContDerivSignal [
0 ] . pPrevVal , ghzvm04goy -> nonContDerivSignal [ 0 ] . pCurrVal ,
ghzvm04goy -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ghzvm04goy -> _mdlRefSfcnS ) ; } if ( memcmp (
ghzvm04goy -> nonContDerivSignal [ 1 ] . pCurrVal , ghzvm04goy ->
nonContDerivSignal [ 1 ] . pPrevVal , ghzvm04goy -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ghzvm04goy -> nonContDerivSignal [
1 ] . pPrevVal , ghzvm04goy -> nonContDerivSignal [ 1 ] . pCurrVal ,
ghzvm04goy -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ghzvm04goy -> _mdlRefSfcnS ) ; } } } void
mswf3wfk1pTID2 ( void ) { } void ehqaws4onp ( popjryh50k * localB ,
dhrgpckkpj * localXdot ) { localXdot -> n40l1s5pzs = localB -> g20nmlaxoe ;
localXdot -> fhsu0lzfk3 = localB -> bshay5ehls ; } void grhiuxld4g (
popjryh50k * localB , ptuovjkhs1 * localZCSV ) { localZCSV -> lkvbrj5ddg =
localB -> my0xwnkptn - localB -> lmyp1aewby ; localZCSV -> cei4zw4hgs =
localB -> my0xwnkptn - localB -> fq2g1ugbhz ; localZCSV -> ctwc2nukat =
localB -> bqed15abp0 - cuuwyo5gw5 . P_7 ; localZCSV -> gg5jtftlom = localB ->
bqed15abp0 - cuuwyo5gw5 . P_4 ; localZCSV -> gtmsona4ih = localB ->
bd0zb3ys15 - cuuwyo5gw5 . P_9 ; localZCSV -> hff0qoo0mn = localB ->
bd0zb3ys15 - cuuwyo5gw5 . P_10 ; localZCSV -> ar4ivwgcds = localB ->
bd0zb3ys15 - cuuwyo5gw5 . P_11 ; localZCSV -> nkqpbvusxy = localB ->
bd0zb3ys15 - cuuwyo5gw5 . P_12 ; localZCSV -> hfv0zi0wmv = localB ->
i2vdugbpjb - cuuwyo5gw5 . P_13 ; } void pcpwp5chy2 ( hr11lwjv3k * const
ghzvm04goy ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( ghzvm04goy -> _mdlRefSfcnS , "EDS" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void aggg415ceg (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , hr11lwjv3k * const ghzvm04goy , popjryh50k * localB ,
pkakqulqic * localDW , d2xhivalt0 * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; cuuwyo5gw5 . P_9 = rtInf ; cuuwyo5gw5 . P_12 =
rtMinusInf ; ( void ) memset ( ( void * ) ghzvm04goy , 0 , sizeof (
hr11lwjv3k ) ) ; ghzvm04goy -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; ghzvm04goy -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; ghzvm04goy ->
Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; ghzvm04goy -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( ghzvm04goy -> _mdlRefSfcnS , "EDS" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( popjryh50k ) ) ; { localB -> lmyp1aewby = 0.0 ;
localB -> my0xwnkptn = 0.0 ; localB -> fq2g1ugbhz = 0.0 ; localB ->
i2vdugbpjb = 0.0 ; localB -> bshay5ehls = 0.0 ; localB -> bqed15abp0 = 0.0 ;
localB -> bd0zb3ys15 = 0.0 ; localB -> g20nmlaxoe = 0.0 ; localB ->
or13zggi0k = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
pkakqulqic ) ) ; EDS_InitializeDataMapInfo ( ghzvm04goy , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( ghzvm04goy -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
ghzvm04goy -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( ghzvm04goy -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } ghzvm04goy -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) ghzvm04goy -> NonContDerivMemory . mr_nonContSig0 ; ghzvm04goy ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
ghzvm04goy -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> mja4p4jknh ) ; ; ghzvm04goy -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) ghzvm04goy -> NonContDerivMemory . mr_nonContSig1 ; ghzvm04goy ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
ghzvm04goy -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> ipowze40pn ) ; ; if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
mja4p4jknh ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 1 ] . currVal = ( char_T * ) &
localB -> ipowze40pn ; mr_nonContOutputArray [ 0 ] [ 1 ] . next = ( NULL ) ;
} if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1
] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 1
] [ 0 ] . currVal = ( char_T * ) & localB -> mja4p4jknh ;
mr_nonContOutputArray [ 1 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 1 ] [
1 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 1 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 1 ] [ 1 ] . currVal = ( char_T * ) & localB ->
ipowze40pn ; mr_nonContOutputArray [ 1 ] [ 1 ] . next = ( NULL ) ; } } void
mr_EDS_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T *
retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_EDS , 43 ) ; * retVal = 1 ; } static void
mr_EDS_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const
void * srcData , size_t numBytes ) ; static void mr_EDS_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void mr_EDS_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_EDS_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_EDS_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) ; static void mr_EDS_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_EDS_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_EDS_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_EDS_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_EDS_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EDS_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_EDS_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_EDS_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_EDS_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber (
destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal ) )
; } static uint_T mr_EDS_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_EDS_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_EDS_GetDWork ( const dglgh01jbp1 * mdlrefDW ) { static
const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_EDS_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) , sizeof (
mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 6 ] = {
"mdlrefDW->rtdw.bevosgzild" , "mdlrefDW->rtdw.ky40cmm5f0" ,
"mdlrefDW->rtdw.l30hwl0lao" , "mdlrefDW->rtdw.lr3p3pygkx" ,
"mdlrefDW->rtdw.o5y3gmwq4p" , "mdlrefDW->rtdw.icrn5ggw3p" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 6 , rtdwDataFieldNames ) ;
mr_EDS_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw .
bevosgzild ) , sizeof ( mdlrefDW -> rtdw . bevosgzild ) ) ;
mr_EDS_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW -> rtdw .
ky40cmm5f0 ) , sizeof ( mdlrefDW -> rtdw . ky40cmm5f0 ) ) ;
mr_EDS_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW -> rtdw .
l30hwl0lao ) , sizeof ( mdlrefDW -> rtdw . l30hwl0lao ) ) ;
mr_EDS_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw .
lr3p3pygkx ) , sizeof ( mdlrefDW -> rtdw . lr3p3pygkx ) ) ;
mr_EDS_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw .
o5y3gmwq4p ) , sizeof ( mdlrefDW -> rtdw . o5y3gmwq4p ) ) ;
mr_EDS_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW -> rtdw .
icrn5ggw3p ) , sizeof ( mdlrefDW -> rtdw . icrn5ggw3p ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_EDS_SetDWork ( dglgh01jbp1 * mdlrefDW , const mxArray * ssDW
) { ( void ) ssDW ; ( void ) mdlrefDW ; mr_EDS_restoreDataFromMxArray ( & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_EDS_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bevosgzild ) ,
rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . bevosgzild ) ) ;
mr_EDS_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ky40cmm5f0 ) ,
rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . ky40cmm5f0 ) ) ;
mr_EDS_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . l30hwl0lao ) ,
rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . l30hwl0lao ) ) ;
mr_EDS_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lr3p3pygkx ) ,
rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . lr3p3pygkx ) ) ;
mr_EDS_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . o5y3gmwq4p ) ,
rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . o5y3gmwq4p ) ) ;
mr_EDS_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . icrn5ggw3p ) ,
rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . icrn5ggw3p ) ) ; } } void
mr_EDS_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4
] = { 3785442657U , 4162283364U , 3967487618U , 1320924110U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "EDS" , & chksum [ 0 ] ) ; }
mxArray * mr_EDS_GetSimStateDisallowedBlocks ( ) { return NULL ; }
