#include "Driveline_capi.h"
#include "Driveline.h"
#include "Driveline_private.h"
static RegMdlInfo rtMdlInfo_Driveline [ 46 ] = { { "n5qm5cab0up" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Driveline" } , {
"jn1etpvcka" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "ewin1y1mwc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "bhoei0xoot" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "grfcawoazk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"l1pljxktrl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "bjbjifrsrv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "oakdhkzk5b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "brjax2ilbj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"gvxaj4x0qw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "n5wdhep3vv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "azw1xo1vqg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "bsz3qtxrxd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"fxrjyezkwn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "p0pqiusydn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "btsnzboicn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "p51od2swfx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"bpgqz3xzpl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "cyzpp4e52p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "aj1apekess" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "djkfokdtse" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"jnccjczqwr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "igx4apxpta" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "me451mp2tt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "Driveline" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "nrwapxhmtv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"coyvih0rk1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "dwsgrvz41y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "struct_i3TAShTucH4EJVQNh3WsrC" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_wjXS3rIiQNI90M790LMxVG" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_NtCe3ohFvXuRZXQoDidoXH" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_A6Yb21eKNPgaupJlKafAPB" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "mr_Driveline_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Driveline" } , { "mr_Driveline_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Driveline" } , { "mr_Driveline_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Driveline" } , { "mr_Driveline_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Driveline" } , { "Driveline.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "Driveline.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Driveline" } } ; gimbih1di0h gimbih1di0 = { 0.0 , 0.025887 , 0.025887 , 5.2
, 9.42477796076938 , 1.575 , 3.019 , 10.0 , 10.0 , 0.001 , 0.001 , 0.0 , 0.0
, 1000.0 , 1000.0 , 0.1 , 0.1 , 0.0 , 0.0 , 0.0 , 0.0 , 1.4901161193847656E-8
, 1.4901161193847656E-8 , 1.0E-6 , 1.0E-6 , 4.0 , 4.0 , 0.0 , 1.0 , 0.0 , 0.0
, 0.0 , 0.0 , 1.0 , 1.0 } ; void djkfokdtse ( dwsgrvz41y * const pubqvcmed4 ,
bsz3qtxrxd * localDW , oakdhkzk5b * localX ) { boolean_T tmp ; localDW ->
aydhqotte1 = gimbih1di0 . P_27 ; localDW -> pepn3ieo20 = gimbih1di0 . P_31 ;
localDW -> pcp4p3iilg = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX
-> bxlhhwrhea = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ;
localDW -> pcp4p3iilg = ! tmp ; } else { localDW -> pcp4p3iilg = 1 ; } localX
-> p5c5mh3nvx = 0.0 ; } localX -> h0siwojyr3 = gimbih1di0 . P_19 ; localDW ->
b4e5r1pw0m = gimbih1di0 . P_32 ; localDW -> bjea3qlbxx = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 ->
_mdlRefSfcnS ) ; localDW -> bjea3qlbxx = ! tmp ; } else { localDW ->
bjea3qlbxx = 1 ; } } localX -> gzkkdjj2xk = gimbih1di0 . P_20 ; localX ->
fnqqpp431b = gimbih1di0 . P_17 ; localX -> lmmb1wsihs = gimbih1di0 . P_18 ; }
void aj1apekess ( dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd * localDW ,
oakdhkzk5b * localX ) { boolean_T tmp ; localDW -> aydhqotte1 = gimbih1di0 .
P_27 ; localDW -> pepn3ieo20 = gimbih1di0 . P_31 ; localDW -> pcp4p3iilg = 1
; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX -> bxlhhwrhea = 0.0 ; tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW ->
pcp4p3iilg = ! tmp ; } else { localDW -> pcp4p3iilg = 1 ; } localX ->
p5c5mh3nvx = 0.0 ; } localX -> h0siwojyr3 = gimbih1di0 . P_19 ; localDW ->
b4e5r1pw0m = gimbih1di0 . P_32 ; localDW -> bjea3qlbxx = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 ->
_mdlRefSfcnS ) ; localDW -> bjea3qlbxx = ! tmp ; } else { localDW ->
bjea3qlbxx = 1 ; } } localX -> gzkkdjj2xk = gimbih1di0 . P_20 ; localX ->
fnqqpp431b = gimbih1di0 . P_17 ; localX -> lmmb1wsihs = gimbih1di0 . P_18 ; }
void igx4apxpta ( fxrjyezkwn * localB ) { localB -> pv2pdca3cw = gimbih1di0 .
P_11 ; localB -> pr243imisr = gimbih1di0 . P_12 ; } void Driveline (
dwsgrvz41y * const pubqvcmed4 , const real_T * j45cp5ppdn , const real_T
caebyi2sab [ 4 ] , real_T iioyllnquu [ 4 ] , real_T jp4z35ch12 [ 4 ] , real_T
bumnd4n3ix [ 4 ] , fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b *
localX , gvxaj4x0qw * localZCE ) { ZCEventType zcEvent ; real_T biprsijieh ;
real_T ct1350zqmw ; real_T oexatecjko ; if ( rtmIsMajorTimeStep ( pubqvcmed4
) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { iioyllnquu [ 2 ] = 0.0 ;
iioyllnquu [ 3 ] = 0.0 ; oexatecjko = gimbih1di0 . P_0 / 2.0 ; if ( *
j45cp5ppdn < localDW -> aydhqotte1 - oexatecjko ) { localB -> erhr5ibplw = *
j45cp5ppdn + oexatecjko ; } else if ( * j45cp5ppdn <= localDW -> aydhqotte1 +
oexatecjko ) { localB -> erhr5ibplw = localDW -> aydhqotte1 ; } else { localB
-> erhr5ibplw = * j45cp5ppdn - oexatecjko ; } if ( localB -> erhr5ibplw >
gimbih1di0 . P_4 ) { oexatecjko = gimbih1di0 . P_4 ; } else if ( localB ->
erhr5ibplw < - gimbih1di0 . P_4 ) { oexatecjko = - gimbih1di0 . P_4 ; } else
{ oexatecjko = localB -> erhr5ibplw ; } biprsijieh = muDoubleScalarTan ( 1.0
/ gimbih1di0 . P_3 * oexatecjko ) ; ct1350zqmw = gimbih1di0 . P_5 / 2.0 *
biprsijieh ; oexatecjko = gimbih1di0 . P_6 + ct1350zqmw ; ct1350zqmw =
gimbih1di0 . P_6 - ct1350zqmw ; biprsijieh *= gimbih1di0 . P_6 ; if ( (
oexatecjko >= - gimbih1di0 . P_21 ) && ( oexatecjko <= gimbih1di0 . P_21 ) )
{ oexatecjko = 2.9802322387695313E-8 / ( 3.0 - muDoubleScalarPower (
oexatecjko / 1.4901161193847656e-8 , 2.0 ) ) ; } else { oexatecjko =
muDoubleScalarAbs ( oexatecjko ) ; } if ( ( ct1350zqmw >= - gimbih1di0 . P_22
) && ( ct1350zqmw <= gimbih1di0 . P_22 ) ) { ct1350zqmw =
2.9802322387695313E-8 / ( 3.0 - muDoubleScalarPower ( ct1350zqmw /
1.4901161193847656e-8 , 2.0 ) ) ; } else { ct1350zqmw = muDoubleScalarAbs (
ct1350zqmw ) ; } if ( gimbih1di0 . P_28 > gimbih1di0 . P_29 ) { iioyllnquu [
0 ] = muDoubleScalarAtan ( 1.0 / oexatecjko * biprsijieh ) ; } else {
iioyllnquu [ 0 ] = - muDoubleScalarAtan ( 1.0 / oexatecjko * biprsijieh ) ; }
if ( gimbih1di0 . P_28 > gimbih1di0 . P_30 ) { iioyllnquu [ 1 ] =
muDoubleScalarAtan ( biprsijieh / ct1350zqmw ) ; } else { iioyllnquu [ 1 ] =
- muDoubleScalarAtan ( biprsijieh / ct1350zqmw ) ; } localB -> fpyhjocody =
localDW -> pepn3ieo20 ; localB -> pv2pdca3cw = gimbih1di0 . P_11 ; }
jp4z35ch12 [ 0 ] = 0.0 ; jp4z35ch12 [ 1 ] = 0.0 ; if ( rtmIsMajorTimeStep (
pubqvcmed4 ) ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE ->
dfzt0qw2wu , ( localB -> fpyhjocody ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || (
localDW -> pcp4p3iilg != 0 ) ) { localX -> bxlhhwrhea = localB -> pv2pdca3cw
; ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ;
} } oexatecjko = localX -> bxlhhwrhea ; biprsijieh = gimbih1di0 . P_7 *
localX -> bxlhhwrhea + gimbih1di0 . P_13 * localX -> h0siwojyr3 ; jp4z35ch12
[ 2 ] = biprsijieh ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit
( pubqvcmed4 , 1 , 0 ) ) { localB -> atolypax4g = localDW -> b4e5r1pw0m ;
localB -> pr243imisr = gimbih1di0 . P_12 ; } if ( rtmIsMajorTimeStep (
pubqvcmed4 ) ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE ->
k32bbhajcz , ( localB -> atolypax4g ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || (
localDW -> bjea3qlbxx != 0 ) ) { localX -> p5c5mh3nvx = localB -> pr243imisr
; ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ;
} } ct1350zqmw = gimbih1di0 . P_8 * localX -> p5c5mh3nvx + gimbih1di0 . P_14
* localX -> gzkkdjj2xk ; jp4z35ch12 [ 3 ] = ct1350zqmw ; localB -> g3zn1p1xrt
= - biprsijieh ; localB -> agrlsta4kh = localX -> fnqqpp431b ; localB ->
avjk1k5bgn = - gimbih1di0 . P_9 * localB -> agrlsta4kh ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ if ( ( gimbih1di0 . P_1 >= - gimbih1di0 . P_23 ) && ( gimbih1di0 . P_1 <=
gimbih1di0 . P_23 ) ) { localB -> nf5rhsxepc = 2.0E-6 / ( 3.0 -
muDoubleScalarPower ( gimbih1di0 . P_1 / 1.0e-6 , 2.0 ) ) ; } else { localB
-> nf5rhsxepc = muDoubleScalarAbs ( gimbih1di0 . P_1 ) ; } if ( ( gimbih1di0
. P_2 >= - gimbih1di0 . P_24 ) && ( gimbih1di0 . P_2 <= gimbih1di0 . P_24 ) )
{ localB -> m1kb1e3n1l = 2.0E-6 / ( 3.0 - muDoubleScalarPower ( gimbih1di0 .
P_2 / 1.0e-6 , 2.0 ) ) ; } else { localB -> m1kb1e3n1l = muDoubleScalarAbs (
gimbih1di0 . P_2 ) ; } localB -> f5vpukdlmu = gimbih1di0 . P_15 ; } localB ->
aprxtsl3n2 = - ct1350zqmw ; localB -> msmuvulz41 = localX -> lmmb1wsihs ;
localB -> oo112mvwjv = - gimbih1di0 . P_10 * localB -> msmuvulz41 ; if (
localB -> fpyhjocody != 0.0 ) { localB -> gq150gczzl = oexatecjko ; } else {
localB -> gq150gczzl = localB -> pv2pdca3cw ; } if ( rtmIsMajorTimeStep (
pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB ->
hytjgrpw1p = gimbih1di0 . P_16 ; } if ( localB -> atolypax4g != 0.0 ) {
localB -> gimdcylxoy = localX -> p5c5mh3nvx ; } else { localB -> gimdcylxoy =
localB -> pr243imisr ; } bumnd4n3ix [ 0 ] = caebyi2sab [ 0 ] ; bumnd4n3ix [ 1
] = caebyi2sab [ 1 ] ; bumnd4n3ix [ 2 ] = caebyi2sab [ 2 ] ; bumnd4n3ix [ 3 ]
= caebyi2sab [ 3 ] ; } void cyzpp4e52p ( dwsgrvz41y * const pubqvcmed4 ,
fxrjyezkwn * localB , bsz3qtxrxd * localDW ) { if ( rtmIsMajorTimeStep (
pubqvcmed4 ) ) { if ( memcmp ( pubqvcmed4 -> nonContDerivSignal [ 0 ] .
pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 0 ] . pPrevVal , pubqvcmed4 ->
nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
pubqvcmed4 -> nonContDerivSignal [ 0 ] . pPrevVal , pubqvcmed4 ->
nonContDerivSignal [ 0 ] . pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 0 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if
( memcmp ( pubqvcmed4 -> nonContDerivSignal [ 1 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 1 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
1 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 1 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 2 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 2 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
2 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 2 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 3 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 3 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
3 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 3 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } } if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localDW -> aydhqotte1 = localB -> erhr5ibplw ; localDW -> pepn3ieo20 =
gimbih1di0 . P_33 ; localDW -> b4e5r1pw0m = gimbih1di0 . P_34 ; } localDW ->
pcp4p3iilg = 0 ; localDW -> bjea3qlbxx = 0 ; } void bpgqz3xzpl ( const real_T
* mwonwqqv5l , const real_T * nh5gs0cpaf , const real_T pmpfb1utv4 [ 4 ] ,
fxrjyezkwn * localB , bjbjifrsrv * localXdot ) { real_T khwftovelx_p ; real_T
dgal2v31pv_p ; khwftovelx_p = localB -> agrlsta4kh - pmpfb1utv4 [ 2 ] ;
dgal2v31pv_p = localB -> msmuvulz41 - pmpfb1utv4 [ 3 ] ; localXdot ->
bxlhhwrhea = ( khwftovelx_p - localB -> gq150gczzl ) * localB -> f5vpukdlmu ;
localXdot -> h0siwojyr3 = khwftovelx_p ; localXdot -> p5c5mh3nvx = (
dgal2v31pv_p - localB -> gimdcylxoy ) * localB -> hytjgrpw1p ; localXdot ->
gzkkdjj2xk = dgal2v31pv_p ; localXdot -> fnqqpp431b = ( ( gimbih1di0 . P_25 *
* mwonwqqv5l + localB -> g3zn1p1xrt ) + localB -> avjk1k5bgn ) / localB ->
nf5rhsxepc ; localXdot -> lmmb1wsihs = ( ( gimbih1di0 . P_26 * * nh5gs0cpaf +
localB -> aprxtsl3n2 ) + localB -> oo112mvwjv ) / localB -> m1kb1e3n1l ; }
void btsnzboicn ( dwsgrvz41y * const pubqvcmed4 ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( pubqvcmed4 ->
_mdlRefSfcnS , "Driveline" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ;
} } void jnccjczqwr ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , dwsgrvz41y * const pubqvcmed4 , fxrjyezkwn * localB ,
bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
pubqvcmed4 , 0 , sizeof ( dwsgrvz41y ) ) ; pubqvcmed4 -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; pubqvcmed4 -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; pubqvcmed4 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( pubqvcmed4 -> _mdlRefSfcnS , "Driveline" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> erhr5ibplw = 0.0
; localB -> fpyhjocody = 0.0 ; localB -> pv2pdca3cw = 0.0 ; localB ->
atolypax4g = 0.0 ; localB -> pr243imisr = 0.0 ; localB -> g3zn1p1xrt = 0.0 ;
localB -> agrlsta4kh = 0.0 ; localB -> avjk1k5bgn = 0.0 ; localB ->
nf5rhsxepc = 0.0 ; localB -> aprxtsl3n2 = 0.0 ; localB -> msmuvulz41 = 0.0 ;
localB -> oo112mvwjv = 0.0 ; localB -> m1kb1e3n1l = 0.0 ; localB ->
f5vpukdlmu = 0.0 ; localB -> gq150gczzl = 0.0 ; localB -> hytjgrpw1p = 0.0 ;
localB -> gimdcylxoy = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( bsz3qtxrxd ) ) ; localDW -> aydhqotte1 = 0.0 ; localDW -> pepn3ieo20
= 0.0 ; localDW -> b4e5r1pw0m = 0.0 ; Driveline_InitializeDataMapInfo (
pubqvcmed4 , localDW , localX , sysRanPtr , contextTid ) ; if ( (
rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( pubqvcmed4 ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( pubqvcmed4 -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( pubqvcmed4 ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } pubqvcmed4 -> nonContDerivSignal [ 0 ]
. pPrevVal = ( char_T * ) pubqvcmed4 -> NonContDerivMemory . mr_nonContSig0 ;
pubqvcmed4 -> nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T
) ) ; pubqvcmed4 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( &
localB -> m1kb1e3n1l ) ; ; pubqvcmed4 -> nonContDerivSignal [ 1 ] . pPrevVal
= ( char_T * ) pubqvcmed4 -> NonContDerivMemory . mr_nonContSig1 ; pubqvcmed4
-> nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
pubqvcmed4 -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> nf5rhsxepc ) ; ; pubqvcmed4 -> nonContDerivSignal [ 2 ] . pPrevVal = (
char_T * ) pubqvcmed4 -> NonContDerivMemory . mr_nonContSig2 ; pubqvcmed4 ->
nonContDerivSignal [ 2 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
pubqvcmed4 -> nonContDerivSignal [ 2 ] . pCurrVal = ( char_T * ) ( & localB
-> atolypax4g ) ; ; pubqvcmed4 -> nonContDerivSignal [ 3 ] . pPrevVal = (
char_T * ) pubqvcmed4 -> NonContDerivMemory . mr_nonContSig3 ; pubqvcmed4 ->
nonContDerivSignal [ 3 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
pubqvcmed4 -> nonContDerivSignal [ 3 ] . pCurrVal = ( char_T * ) ( & localB
-> fpyhjocody ) ; ; localZCE -> dfzt0qw2wu = UNINITIALIZED_ZCSIG ; localZCE
-> k32bbhajcz = UNINITIALIZED_ZCSIG ; } void mr_Driveline_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Driveline , 46 ) ; * retVal = 1 ; } static void
mr_Driveline_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Driveline_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Driveline_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Driveline_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Driveline_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Driveline_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Driveline_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Driveline_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Driveline_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Driveline_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Driveline_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Driveline_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Driveline_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Driveline_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Driveline_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Driveline_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Driveline_GetDWork ( const n5qm5cab0up * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Driveline_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) ,
sizeof ( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 5 ]
= { "mdlrefDW->rtdw.aydhqotte1" , "mdlrefDW->rtdw.pepn3ieo20" ,
"mdlrefDW->rtdw.b4e5r1pw0m" , "mdlrefDW->rtdw.pcp4p3iilg" ,
"mdlrefDW->rtdw.bjea3qlbxx" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 5 , rtdwDataFieldNames ) ; mr_Driveline_cacheDataAsMxArray ( rtdwData
, 0 , 0 , & ( mdlrefDW -> rtdw . aydhqotte1 ) , sizeof ( mdlrefDW -> rtdw .
aydhqotte1 ) ) ; mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 1 , & (
mdlrefDW -> rtdw . pepn3ieo20 ) , sizeof ( mdlrefDW -> rtdw . pepn3ieo20 ) )
; mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW -> rtdw .
b4e5r1pw0m ) , sizeof ( mdlrefDW -> rtdw . b4e5r1pw0m ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw .
pcp4p3iilg ) , sizeof ( mdlrefDW -> rtdw . pcp4p3iilg ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw .
bjea3qlbxx ) , sizeof ( mdlrefDW -> rtdw . bjea3qlbxx ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_Driveline_cacheDataAsMxArray ( ssDW , 0 , 2 , & ( mdlrefDW -> rtzce ) ,
sizeof ( mdlrefDW -> rtzce ) ) ; ( void ) mdlrefDW ; return ssDW ; } void
mr_Driveline_SetDWork ( n5qm5cab0up * mdlrefDW , const mxArray * ssDW ) { (
void ) ssDW ; ( void ) mdlrefDW ; mr_Driveline_restoreDataFromMxArray ( & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . aydhqotte1 ) ,
rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . aydhqotte1 ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . pepn3ieo20 ) ,
rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . pepn3ieo20 ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . b4e5r1pw0m ) ,
rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . b4e5r1pw0m ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . pcp4p3iilg ) ,
rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . pcp4p3iilg ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bjea3qlbxx ) ,
rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . bjea3qlbxx ) ) ; }
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2
, sizeof ( mdlrefDW -> rtzce ) ) ; } void
mr_Driveline_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 2135982342U , 1964379557U , 2924169226U , 1973989662U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Driveline" , & chksum [ 0 ] ) ; }
mxArray * mr_Driveline_GetSimStateDisallowedBlocks ( ) { return NULL ; }
