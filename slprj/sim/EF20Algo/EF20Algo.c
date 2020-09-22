#include "EF20Algo_capi.h"
#include "EF20Algo.h"
#include "EF20Algo_private.h"
#include "look1_binlcpw.h"
#include "look1_binlxpw.h"
#include "look1_iu8n7bdlu32n24_binlcase.h"
static RegMdlInfo rtMdlInfo_EF20Algo [ 51 ] = { { "dlx312diuhz" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "EF20Algo" } , {
"afbdbwras0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "mqdgnrqqdo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "EF20Algo" } , { "kpsh3bar5e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EF20Algo" } , { "fw5a3zdxqu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EF20Algo" } , {
"oruwjz03rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "kwlj3kmpqi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "EF20Algo" } , { "prjrkaduyw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EF20Algo" } , { "fsfkv0kwnp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EF20Algo" } , {
"bdgoze5lbo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "jrfp3ynm4h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "EF20Algo" } , { "bejckljetc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EF20Algo" } , { "m4roozarqt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EF20Algo" } , {
"ilycrqp54b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "byonlz0ceb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "EF20Algo" } , { "pw3glfj5hp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EF20Algo" } , { "jvqatz5f3k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EF20Algo" } , {
"pwp1kxll41" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "inxwvg1h0n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "EF20Algo" } , { "pp0xtfasks" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EF20Algo" } , { "kwkh23fdkb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EF20Algo" } , {
"a4you45rjf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "bx1ekxx0hd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "EF20Algo" } , { "pjmlk5fbyb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "EF20Algo" } , { "m43mefuhjs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EF20Algo" } , {
"p0mld3mkzl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "auopghe0lb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "EF20Algo" } , { "EF20Algo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, 0 , ( NULL ) } , { "mzpqjuk4m5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "EF20Algo" } , { "d553jg20cw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "EF20Algo" } , {
"p1sowantt3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EF20Algo" } , { "cufix32_En24" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "ufix32_En24" } , { "ufix32_En24" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "cufix8_En7" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "ufix8_En7" } , { "ufix8_En7" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_vhr8Rs4P6lT4M7LvMp22iF" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_EaU1jpVaeYr8tLIwUG22kH" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "mr_EF20Algo_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EF20Algo" } , {
"mr_EF20Algo_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EF20Algo" } , {
"mr_EF20Algo_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "EF20Algo" } , {
"mr_EF20Algo_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "EF20Algo" } , {
"mr_EF20Algo_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "EF20Algo" } , { "mr_EF20Algo_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EF20Algo" } , {
"mr_EF20Algo_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "EF20Algo" } , { "mr_EF20Algo_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EF20Algo" } , {
"mr_EF20Algo_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "EF20Algo" } , { "mr_EF20Algo_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EF20Algo" } , {
"mr_EF20Algo_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"EF20Algo" } , { "mr_EF20Algo_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "EF20Algo" } , { "EF20Algo.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "EF20Algo.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "EF20Algo" } } ; fp2ueknauji fp2ueknauj = { 0.0 , 0.0 , 1.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , - 30.0 , 100.0 , 100.0 , 2.0 , 31.0 , 30.0 , 18.0 , -
0.025 , 0.025 , - 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 12.0 ,
24.0 , 36.0 , 48.0 , 60.0 } , { 0.0 , 0.1 , 0.2 , 0.4 , 0.6 , 0.8 , 1.0 } ,
1.4 , 1.0 , 9.8 , 0.05375 , 0.05375 , 0.27777777777777779 , { 0.0 , 0.463 ,
0.738 , 0.9 , 0.994 , 1.05 , 1.07 , 1.09 , 1.09 , 1.09 , 1.08 , 1.07 , 1.06 ,
1.05 , 1.04 , 1.03 , 1.02 , 1.01 , 1.0 , 0.992 , 0.981 , 0.97 , 0.959 , 0.949
, 0.938 , 0.927 , 0.916 , 0.905 , 0.895 , 0.884 , 0.873 , 0.862 , 0.851 ,
0.841 , 0.83 , 0.819 , 0.808 , 0.797 , 0.787 , 0.776 , 0.765 , 0.754 , 0.743
, 0.733 , 0.722 , 0.711 , 0.7 , 0.689 , 0.679 , 0.668 , 0.657 } , { 0.0 ,
0.02 , 0.04 , 0.06 , 0.08 , 0.1 , 0.12 , 0.14 , 0.16 , 0.18 , 0.2 , 0.22 ,
0.24 , 0.26 , 0.28 , 0.3 , 0.32 , 0.34 , 0.36 , 0.38 , 0.4 , 0.42 , 0.44 ,
0.46 , 0.48 , 0.5 , 0.52 , 0.54 , 0.56 , 0.58 , 0.6 , 0.62 , 0.64 , 0.66 ,
0.68 , 0.7 , 0.72 , 0.74 , 0.76 , 0.78 , 0.8 , 0.82 , 0.84 , 0.86 , 0.88 ,
0.9 , 0.92 , 0.94 , 0.96 , 0.98 , 1.0 } , { 0.0 , 0.41 , 0.62 , 0.72 , 0.77 ,
0.79 , 0.8 , 0.8 , 0.8 , 0.79 , 0.79 , 0.78 , 0.77 , 0.77 , 0.76 , 0.75 ,
0.74 , 0.74 , 0.73 , 0.72 , 0.72 , 0.71 , 0.7 , 0.7 , 0.69 , 0.68 , 0.68 ,
0.67 , 0.66 , 0.65 , 0.65 , 0.64 , 0.63 , 0.63 , 0.62 , 0.61 , 0.6 , 0.6 ,
0.59 , 0.58 , 0.58 , 0.57 , 0.56 , 0.56 , 0.55 , 0.54 , 0.54 , 0.53 , 0.52 ,
0.51 , 0.51 } , { 0.0 , 0.02 , 0.04 , 0.06 , 0.08 , 0.1 , 0.12 , 0.14 , 0.16
, 0.18 , 0.2 , 0.22 , 0.24 , 0.26 , 0.28 , 0.3 , 0.32 , 0.34 , 0.36 , 0.38 ,
0.4 , 0.42 , 0.44 , 0.46 , 0.48 , 0.5 , 0.52 , 0.54 , 0.56 , 0.58 , 0.6 ,
0.62 , 0.64 , 0.66 , 0.68 , 0.7 , 0.72 , 0.74 , 0.76 , 0.78 , 0.8 , 0.82 ,
0.84 , 0.86 , 0.88 , 0.9 , 0.92 , 0.94 , 0.96 , 0.98 , 1.0 } , { 0.0 , 0.05 ,
0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 ,
0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 , 0.05 ,
0.05 , 0.05 , 0.05 , 0.05 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 ,
0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049
, 0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 , 0.049 } , { 0.0 , 0.02 ,
0.04 , 0.06 , 0.08 , 0.1 , 0.12 , 0.14 , 0.16 , 0.18 , 0.2 , 0.22 , 0.24 ,
0.26 , 0.28 , 0.3 , 0.32 , 0.34 , 0.36 , 0.38 , 0.4 , 0.42 , 0.44 , 0.46 ,
0.48 , 0.5 , 0.52 , 0.54 , 0.56 , 0.58 , 0.6 , 0.62 , 0.64 , 0.66 , 0.68 ,
0.7 , 0.72 , 0.74 , 0.76 , 0.78 , 0.8 , 0.82 , 0.84 , 0.86 , 0.88 , 0.9 ,
0.92 , 0.94 , 0.96 , 0.98 , 1.0 } , 2.0 , - 2.0 , { 0.0 , 0.0 , 12.0 , 24.0 ,
36.0 , 48.0 , 60.0 } , { 0.0 , 0.1 , 0.2 , 0.4 , 0.6 , 0.8 , 1.0 } , 4.0 ,
4.0 , 0.0297999215999 , 0.0297999215999 , { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 0.75 , 0.35 , - 0.0 } , { 0.0 , 10.0 , 20.0 , 30.0 , 40.0 ,
50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , { 0.0 , 0.0 , 12.0 , 24.0 , 36.0
, 48.0 , 60.0 } , { 0.0 , 0.1 , 0.2 , 0.4 , 0.6 , 0.8 , 1.0 } , { 0.0 , 0.0 ,
12.0 , 24.0 , 36.0 , 48.0 , 60.0 } , { 0.0 , 0.1 , 0.2 , 0.4 , 0.6 , 0.8 ,
1.0 } , { 0.0 , 10.0 , 20.0 , 30.0 , 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0
, 100.0 } , 5.0E+6 , - 1.0 , - 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0025 ,
1.54 , 128U , { 128U , 128U , 128U , 128U , 128U , 128U , 128U , 128U , 96U ,
45U , 0U } } ; void pjmlk5fbyb ( real_T * mkm35othll , real_T * lhbg5ho01n ,
real_T * crayd2v5n4 , prjrkaduyw * localX ) { localX -> ab1wykfl2n =
fp2ueknauj . P_6 ; localX -> dwodg0sfus = fp2ueknauj . P_4 ; localX ->
c3bqnycv0b = fp2ueknauj . P_7 ; localX -> bbqjdtuec0 = fp2ueknauj . P_5 ; *
mkm35othll = fp2ueknauj . P_57 ; * crayd2v5n4 = fp2ueknauj . P_58 ; *
lhbg5ho01n = fp2ueknauj . P_59 ; } void pwp1kxll41 ( p1sowantt3 * const
cngvpirc42 , m4roozarqt * localDW , oruwjz03rj * localXdis ) { switch (
localDW -> ol4mdh13u3 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep
( cngvpirc42 -> _mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis ->
ab1wykfl2n ) , 1 , 2 * sizeof ( boolean_T ) ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( cngvpirc42 -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> c3bqnycv0b ) , 1 , 2 * sizeof ( boolean_T )
) ; break ; case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( cngvpirc42
-> _mdlRefSfcnS ) ; break ; } localDW -> ol4mdh13u3 = - 1 ; } void p0mld3mkzl
( m4roozarqt * localDW ) { localDW -> ol4mdh13u3 = - 1 ; } void EF20Algo (
p1sowantt3 * const cngvpirc42 , const real_T * m5gtm4vcbv , const real_T *
aduu0dhcyx , const real_T * j31xiaxm1w , const real_T * guat43bbvw , const
real_T * ka4f5sotyq , const real_T * p51cjq5af1 , const real_T * puhcrvviqe ,
const uint8_T * jxczhyyh0s , const real_T * ly1yujtwf4 , const real_T *
bu51or0ctk , real_T * mkm35othll , real_T * lhbg5ho01n , real_T * crayd2v5n4
, ilycrqp54b * localB , m4roozarqt * localDW , prjrkaduyw * localX ,
oruwjz03rj * localXdis ) { int32_T out ; int8_T rtPrevAction ; int8_T
rtAction ; boolean_T fx1dau35v2 ; real_T jbtgx35lnd_p ; real_T pqstirf1z1_p ;
real_T j1vjq3cki4_p ; real_T kbcbox3t34_idx_0 ; if ( ( muDoubleScalarAbs ( *
ka4f5sotyq ) < 0.025 ) && ( * p51cjq5af1 > 0.0 ) ) { out = 2 ; } else if ( *
puhcrvviqe > 0.0 ) { out = 3 ; } else { out = 1 ; } localB -> mgqns4zp14 =
out ; rtPrevAction = localDW -> ol4mdh13u3 ; rtAction = - 1 ; if (
rtmIsMajorTimeStep ( cngvpirc42 ) ) { if ( localB -> mgqns4zp14 < 0.0 ) {
jbtgx35lnd_p = muDoubleScalarCeil ( localB -> mgqns4zp14 ) ; } else {
jbtgx35lnd_p = muDoubleScalarFloor ( localB -> mgqns4zp14 ) ; } if (
muDoubleScalarIsNaN ( jbtgx35lnd_p ) || muDoubleScalarIsInf ( jbtgx35lnd_p )
) { jbtgx35lnd_p = 0.0 ; } else { jbtgx35lnd_p = muDoubleScalarRem (
jbtgx35lnd_p , 4.294967296E+9 ) ; } switch ( jbtgx35lnd_p < 0.0 ? - ( int32_T
) ( uint32_T ) - jbtgx35lnd_p : ( int32_T ) ( uint32_T ) jbtgx35lnd_p ) {
case 1 : rtAction = 0 ; break ; case 2 : rtAction = 1 ; break ; case 3 :
rtAction = 2 ; break ; } localDW -> ol4mdh13u3 = rtAction ; } else { rtAction
= localDW -> ol4mdh13u3 ; } switch ( rtAction ) { case 0 : if ( rtAction !=
rtPrevAction ) { if ( rtmGetTaskTime ( cngvpirc42 , 0 ) != rtmGetTStart (
cngvpirc42 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( cngvpirc42 ->
_mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis -> ab1wykfl2n ) , 0 , 2 *
sizeof ( boolean_T ) ) ; } localB -> n4bxk4nh2t = fp2ueknauj . P_25 *
fp2ueknauj . P_27 / * aduu0dhcyx ; if ( rtmIsMajorTimeStep ( cngvpirc42 ) ) {
if ( * m5gtm4vcbv > fp2ueknauj . P_16 ) { localDW -> nrquthaejf = 1 ; } else
if ( * m5gtm4vcbv >= fp2ueknauj . P_15 ) { localDW -> nrquthaejf = 0 ; } else
{ localDW -> nrquthaejf = - 1 ; } } if ( localDW -> nrquthaejf == 1 ) {
jbtgx35lnd_p = * m5gtm4vcbv - fp2ueknauj . P_16 ; } else if ( localDW ->
nrquthaejf == - 1 ) { jbtgx35lnd_p = * m5gtm4vcbv - fp2ueknauj . P_15 ; }
else { jbtgx35lnd_p = 0.0 ; } localB -> m2u1bb503v = 1.0 / ( * aduu0dhcyx * *
aduu0dhcyx * fp2ueknauj . P_60 + fp2ueknauj . P_26 ) * ( jbtgx35lnd_p * *
aduu0dhcyx ) * localB -> n4bxk4nh2t_mbvzarwird ; if ( rtmIsMajorTimeStep (
cngvpirc42 ) && rtmIsSampleHit ( cngvpirc42 , 1 , 0 ) ) { if (
rtmIsMajorTimeStep ( cngvpirc42 ) ) { localDW -> g0nofjcuqs = ( localB ->
m2u1bb503v > localB -> n4bxk4nh2t ) ; } localB -> iavnojyf0h = localDW ->
g0nofjcuqs ; } localB -> o3yoflwjys = fp2ueknauj . P_17 * localB ->
n4bxk4nh2t ; if ( rtmIsMajorTimeStep ( cngvpirc42 ) && rtmIsSampleHit (
cngvpirc42 , 1 , 0 ) ) { if ( rtmIsMajorTimeStep ( cngvpirc42 ) ) { localDW
-> kmfjva2spk = ( localB -> m2u1bb503v < localB -> o3yoflwjys ) ; } localB ->
pcehat2zsh = localDW -> kmfjva2spk ; } if ( localB -> iavnojyf0h ) {
jbtgx35lnd_p = localB -> n4bxk4nh2t ; } else if ( localB -> pcehat2zsh ) {
jbtgx35lnd_p = localB -> o3yoflwjys ; } else { jbtgx35lnd_p = localB ->
m2u1bb503v ; } localB -> h1o0cuuobl = jbtgx35lnd_p - * ka4f5sotyq ; localB ->
jyfl5pthrn = ( fp2ueknauj . P_0 * localB -> h1o0cuuobl - localX -> dwodg0sfus
) * fp2ueknauj . P_9 ; localB -> lbhjhrcomc = ( fp2ueknauj . P_11 * localB ->
h1o0cuuobl + localX -> ab1wykfl2n ) + localB -> jyfl5pthrn ; if (
rtmIsMajorTimeStep ( cngvpirc42 ) ) { localDW -> jco2y5fccn = localB ->
lbhjhrcomc >= fp2ueknauj . P_13 ? 1 : localB -> lbhjhrcomc > fp2ueknauj . P_8
? 0 : - 1 ; } localB -> gf50terurj = localDW -> jco2y5fccn == 1 ? fp2ueknauj
. P_13 : localDW -> jco2y5fccn == - 1 ? fp2ueknauj . P_8 : localB ->
lbhjhrcomc ; if ( rtmIsMajorTimeStep ( cngvpirc42 ) ) { localDW -> dh1f11y51h
= localB -> gf50terurj >= fp2ueknauj . P_18 ? 1 : localB -> gf50terurj >
fp2ueknauj . P_19 ? 0 : - 1 ; localDW -> m2jcxr0bz3 = localB -> gf50terurj >=
fp2ueknauj . P_20 ? 1 : localB -> gf50terurj > fp2ueknauj . P_21 ? 0 : - 1 ;
localDW -> lpw1z20xhn = ( localB -> h1o0cuuobl > fp2ueknauj . P_22 ) ; } if (
localDW -> lpw1z20xhn ) { jbtgx35lnd_p = localDW -> dh1f11y51h == 1 ?
fp2ueknauj . P_18 : localDW -> dh1f11y51h == - 1 ? fp2ueknauj . P_19 : localB
-> gf50terurj ; } else { jbtgx35lnd_p = localDW -> m2jcxr0bz3 == 1 ?
fp2ueknauj . P_20 : localDW -> m2jcxr0bz3 == - 1 ? fp2ueknauj . P_21 : localB
-> gf50terurj ; } * mkm35othll = * j31xiaxm1w + jbtgx35lnd_p ; * lhbg5ho01n =
* guat43bbvw - jbtgx35lnd_p ; localB -> ojpcunngey = fp2ueknauj . P_2 *
localB -> h1o0cuuobl ; * crayd2v5n4 = look1_binlcpw ( * puhcrvviqe ,
fp2ueknauj . P_24 , fp2ueknauj . P_23 , 6U ) ; if ( rtmIsMajorTimeStep (
cngvpirc42 ) ) { srUpdateBC ( localDW -> ndmy12lknt ) ; } break ; case 1 : if
( rtAction != rtPrevAction ) { if ( rtmGetTaskTime ( cngvpirc42 , 0 ) !=
rtmGetTStart ( cngvpirc42 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
cngvpirc42 -> _mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis ->
c3bqnycv0b ) , 0 , 2 * sizeof ( boolean_T ) ) ; } pqstirf1z1_p = fp2ueknauj .
P_28 * * ly1yujtwf4 ; jbtgx35lnd_p = fp2ueknauj . P_29 * * bu51or0ctk ;
j1vjq3cki4_p = fp2ueknauj . P_30 * * aduu0dhcyx ; pqstirf1z1_p = (
pqstirf1z1_p - j1vjq3cki4_p ) / pqstirf1z1_p ; jbtgx35lnd_p = ( jbtgx35lnd_p
- j1vjq3cki4_p ) / jbtgx35lnd_p ; if ( pqstirf1z1_p > jbtgx35lnd_p ) {
jbtgx35lnd_p = pqstirf1z1_p ; j1vjq3cki4_p = * guat43bbvw * fp2ueknauj . P_41
* 0.95 / 0.215 / 90.750000000000014 ; } else { j1vjq3cki4_p = * j31xiaxm1w *
fp2ueknauj . P_42 * 0.95 / 0.215 / 90.750000000000014 ; } kbcbox3t34_idx_0 =
jbtgx35lnd_p ; pqstirf1z1_p = jbtgx35lnd_p * j1vjq3cki4_p ; jbtgx35lnd_p =
muDoubleScalarAbs ( pqstirf1z1_p - look1_binlxpw ( jbtgx35lnd_p , fp2ueknauj
. P_32 , fp2ueknauj . P_31 , 50U ) * jbtgx35lnd_p ) ; j1vjq3cki4_p =
muDoubleScalarAbs ( pqstirf1z1_p - look1_binlxpw ( kbcbox3t34_idx_0 ,
fp2ueknauj . P_34 , fp2ueknauj . P_33 , 50U ) * kbcbox3t34_idx_0 ) ;
pqstirf1z1_p = muDoubleScalarAbs ( pqstirf1z1_p - look1_binlxpw (
kbcbox3t34_idx_0 , fp2ueknauj . P_36 , fp2ueknauj . P_35 , 50U ) *
kbcbox3t34_idx_0 ) ; if ( jbtgx35lnd_p > j1vjq3cki4_p ) { if ( j1vjq3cki4_p >
pqstirf1z1_p ) { jbtgx35lnd_p = 0.031 ; } else { jbtgx35lnd_p = 0.131 ; } }
else if ( jbtgx35lnd_p > pqstirf1z1_p ) { jbtgx35lnd_p = 0.031 ; } else {
jbtgx35lnd_p = 0.16 ; } localB -> j2lzo3xpfu = jbtgx35lnd_p -
kbcbox3t34_idx_0 ; if ( rtmIsMajorTimeStep ( cngvpirc42 ) ) { localDW ->
mrzsgdsaso = localB -> j2lzo3xpfu >= fp2ueknauj . P_37 ? 1 : localB ->
j2lzo3xpfu > fp2ueknauj . P_38 ? 0 : - 1 ; } jbtgx35lnd_p = localDW ->
mrzsgdsaso == 1 ? fp2ueknauj . P_37 : localDW -> mrzsgdsaso == - 1 ?
fp2ueknauj . P_38 : localB -> j2lzo3xpfu ; localB -> oa45yxqgqz = (
fp2ueknauj . P_1 * jbtgx35lnd_p - localX -> bbqjdtuec0 ) * fp2ueknauj . P_10
; j1vjq3cki4_p = ( fp2ueknauj . P_12 * jbtgx35lnd_p + localX -> c3bqnycv0b )
+ localB -> oa45yxqgqz ; * mkm35othll = * j31xiaxm1w + j1vjq3cki4_p ; *
lhbg5ho01n = * guat43bbvw + j1vjq3cki4_p ; localB -> obvvg50txj = fp2ueknauj
. P_3 * jbtgx35lnd_p ; * crayd2v5n4 = look1_binlcpw ( * puhcrvviqe ,
fp2ueknauj . P_40 , fp2ueknauj . P_39 , 6U ) ; if ( rtmIsMajorTimeStep (
cngvpirc42 ) ) { srUpdateBC ( localDW -> jirxzen3lj ) ; } break ; case 2 : if
( rtAction != rtPrevAction ) { if ( rtmGetTaskTime ( cngvpirc42 , 0 ) !=
rtmGetTStart ( cngvpirc42 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
cngvpirc42 -> _mdlRefSfcnS ) ; } } jbtgx35lnd_p = look1_binlxpw ( *
puhcrvviqe , fp2ueknauj . P_48 , fp2ueknauj . P_47 , 6U ) ; if (
rtmIsMajorTimeStep ( cngvpirc42 ) && rtmIsSampleHit ( cngvpirc42 , 1 , 0 ) )
{ if ( rtmIsMajorTimeStep ( cngvpirc42 ) ) { localDW -> mcufrqb1af = ( *
aduu0dhcyx >= fp2ueknauj . P_14 ) ; } localB -> lbnnh4hq31 = localDW ->
mcufrqb1af ; } fx1dau35v2 = ( ( ( localB -> lbnnh4hq31 ? ( int32_T )
fp2ueknauj . P_62 : 0 ) != 0 ) && ( look1_iu8n7bdlu32n24_binlcase ( *
jxczhyyh0s , fp2ueknauj . P_51 , fp2ueknauj . P_63 , 10U ) != 0 ) ) ;
j1vjq3cki4_p = fp2ueknauj . P_52 * jbtgx35lnd_p ; if ( fx1dau35v2 ) {
pqstirf1z1_p = look1_binlxpw ( fp2ueknauj . P_44 * j1vjq3cki4_p , fp2ueknauj
. P_46 , fp2ueknauj . P_45 , 10U ) + fp2ueknauj . P_43 * j1vjq3cki4_p ; }
else { pqstirf1z1_p = fp2ueknauj . P_55 ; } * mkm35othll = fp2ueknauj . P_53
* pqstirf1z1_p ; * lhbg5ho01n = fp2ueknauj . P_54 * pqstirf1z1_p ; if ( (
look1_binlxpw ( jbtgx35lnd_p , fp2ueknauj . P_50 , fp2ueknauj . P_49 , 6U )
!= 0.0 ) && fx1dau35v2 ) { * crayd2v5n4 = fp2ueknauj . P_56 ; } else { *
crayd2v5n4 = j1vjq3cki4_p ; } if ( rtmIsMajorTimeStep ( cngvpirc42 ) ) {
srUpdateBC ( localDW -> hepypnl4n1 ) ; } break ; } } void EF20AlgoTID2 (
ilycrqp54b * localB ) { localB -> n4bxk4nh2t_mbvzarwird = 1.0 / fp2ueknauj .
P_61 ; } void a4you45rjf ( p1sowantt3 * const cngvpirc42 ) { if (
rtmIsMajorTimeStep ( cngvpirc42 ) ) { if ( memcmp ( cngvpirc42 ->
nonContDerivSignal [ 0 ] . pCurrVal , cngvpirc42 -> nonContDerivSignal [ 0 ]
. pPrevVal , cngvpirc42 -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( cngvpirc42 -> nonContDerivSignal [ 0 ] . pPrevVal ,
cngvpirc42 -> nonContDerivSignal [ 0 ] . pCurrVal , cngvpirc42 ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsReset ( cngvpirc42
-> _mdlRefSfcnS ) ; } if ( memcmp ( cngvpirc42 -> nonContDerivSignal [ 1 ] .
pCurrVal , cngvpirc42 -> nonContDerivSignal [ 1 ] . pPrevVal , cngvpirc42 ->
nonContDerivSignal [ 1 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
cngvpirc42 -> nonContDerivSignal [ 1 ] . pPrevVal , cngvpirc42 ->
nonContDerivSignal [ 1 ] . pCurrVal , cngvpirc42 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( cngvpirc42 -> _mdlRefSfcnS ) ; } }
} void a4you45rjfTID2 ( void ) { } void kwkh23fdkb ( ilycrqp54b * localB ,
m4roozarqt * localDW , kwlj3kmpqi * localXdot ) { { real_T * dx ; int_T i ;
dx = & ( localXdot -> ab1wykfl2n ) ; for ( i = 0 ; i < 2 ; i ++ ) { dx [ i ]
= 0.0 ; } } { real_T * dx ; int_T i ; dx = & ( localXdot -> c3bqnycv0b ) ;
for ( i = 0 ; i < 2 ; i ++ ) { dx [ i ] = 0.0 ; } } switch ( localDW ->
ol4mdh13u3 ) { case 0 : localXdot -> ab1wykfl2n = localB -> ojpcunngey ;
localXdot -> dwodg0sfus = localB -> jyfl5pthrn ; break ; case 1 : localXdot
-> c3bqnycv0b = localB -> obvvg50txj ; localXdot -> bbqjdtuec0 = localB ->
oa45yxqgqz ; break ; case 2 : break ; } } void pp0xtfasks ( const real_T *
m5gtm4vcbv , const real_T * aduu0dhcyx , ilycrqp54b * localB , m4roozarqt *
localDW , afbdbwras0 * localZCSV ) { int8_T rtAction ; real_T tmp ; localZCSV
-> d54aqbqtxx = 0.0 ; rtAction = - 1 ; if ( localB -> mgqns4zp14 < 0.0 ) {
tmp = muDoubleScalarCeil ( localB -> mgqns4zp14 ) ; } else { tmp =
muDoubleScalarFloor ( localB -> mgqns4zp14 ) ; } if ( muDoubleScalarIsNaN (
tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp =
muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } switch ( tmp < 0.0 ? - (
int32_T ) ( uint32_T ) - tmp : ( int32_T ) ( uint32_T ) tmp ) { case 1 :
rtAction = 0 ; break ; case 2 : rtAction = 1 ; break ; case 3 : rtAction = 2
; break ; } if ( rtAction != localDW -> ol4mdh13u3 ) { localZCSV ->
d54aqbqtxx = 1.0 ; } { real_T * zcsv = & ( localZCSV -> eztvdso0su ) ; int_T
i ; for ( i = 0 ; i < 11 ; i ++ ) { zcsv [ i ] = 0.0 ; } } if ( localDW ->
ol4mdh13u3 == 0 ) { localZCSV -> eztvdso0su = * m5gtm4vcbv - fp2ueknauj .
P_15 ; localZCSV -> g03pzjktwg = * m5gtm4vcbv - fp2ueknauj . P_16 ; localZCSV
-> ejkm3oxjix = localB -> m2u1bb503v - localB -> n4bxk4nh2t ; localZCSV ->
cvozgrtuxi = localB -> m2u1bb503v - localB -> o3yoflwjys ; localZCSV ->
li105os023 = localB -> lbhjhrcomc - fp2ueknauj . P_13 ; localZCSV ->
d0iyyrjuhv = localB -> lbhjhrcomc - fp2ueknauj . P_8 ; localZCSV ->
egyhd1np0k = localB -> gf50terurj - fp2ueknauj . P_18 ; localZCSV ->
n4n24eyq3k = localB -> gf50terurj - fp2ueknauj . P_19 ; localZCSV ->
dpfltufoqq = localB -> gf50terurj - fp2ueknauj . P_20 ; localZCSV ->
k2cuvpu4np = localB -> gf50terurj - fp2ueknauj . P_21 ; localZCSV ->
exebpkcili = localB -> h1o0cuuobl - fp2ueknauj . P_22 ; } { real_T * zcsv = &
( localZCSV -> kpybumlsce ) ; int_T i ; for ( i = 0 ; i < 2 ; i ++ ) { zcsv [
i ] = 0.0 ; } } if ( localDW -> ol4mdh13u3 == 1 ) { localZCSV -> kpybumlsce =
localB -> j2lzo3xpfu - fp2ueknauj . P_37 ; localZCSV -> bwbm0eckuf = localB
-> j2lzo3xpfu - fp2ueknauj . P_38 ; } { localZCSV -> mitrpvooa2 = 0.0 ; } if
( localDW -> ol4mdh13u3 == 2 ) { localZCSV -> mitrpvooa2 = * aduu0dhcyx -
fp2ueknauj . P_14 ; } } void pw3glfj5hp ( p1sowantt3 * const cngvpirc42 ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( cngvpirc42
-> _mdlRefSfcnS , "EF20Algo" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" )
; } } void m43mefuhjs ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , p1sowantt3 * const
cngvpirc42 , ilycrqp54b * localB , m4roozarqt * localDW , prjrkaduyw * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; fp2ueknauj . P_18 = rtInf ;
fp2ueknauj . P_21 = rtMinusInf ; ( void ) memset ( ( void * ) cngvpirc42 , 0
, sizeof ( p1sowantt3 ) ) ; cngvpirc42 -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; cngvpirc42 -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
cngvpirc42 -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; cngvpirc42 ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( cngvpirc42 -> _mdlRefSfcnS , "EF20Algo" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( ilycrqp54b ) ) ; { localB -> j2lzo3xpfu = 0.0 ;
localB -> oa45yxqgqz = 0.0 ; localB -> obvvg50txj = 0.0 ; localB ->
n4bxk4nh2t = 0.0 ; localB -> m2u1bb503v = 0.0 ; localB -> o3yoflwjys = 0.0 ;
localB -> h1o0cuuobl = 0.0 ; localB -> jyfl5pthrn = 0.0 ; localB ->
lbhjhrcomc = 0.0 ; localB -> gf50terurj = 0.0 ; localB -> ojpcunngey = 0.0 ;
localB -> n4bxk4nh2t_mbvzarwird = 0.0 ; localB -> mgqns4zp14 = 0.0 ; } ( void
) memset ( ( void * ) localDW , 0 , sizeof ( m4roozarqt ) ) ;
EF20Algo_InitializeDataMapInfo ( cngvpirc42 , localDW , localX , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
cngvpirc42 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( cngvpirc42 ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
cngvpirc42 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } cngvpirc42 ->
nonContDerivSignal [ 0 ] . pPrevVal = ( char_T * ) cngvpirc42 ->
NonContDerivMemory . mr_nonContSig0 ; cngvpirc42 -> nonContDerivSignal [ 0 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; cngvpirc42 ->
nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB -> pcehat2zsh )
; ; cngvpirc42 -> nonContDerivSignal [ 1 ] . pPrevVal = ( char_T * )
cngvpirc42 -> NonContDerivMemory . mr_nonContSig1 ; cngvpirc42 ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
cngvpirc42 -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> iavnojyf0h ) ; ; if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
pcehat2zsh ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 1 ] . currVal = ( char_T * ) &
localB -> iavnojyf0h ; mr_nonContOutputArray [ 0 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 2 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 2 ] . currVal = ( char_T * ) &
localB -> lbnnh4hq31 ; mr_nonContOutputArray [ 0 ] [ 2 ] . next = ( NULL ) ;
} if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1
] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 1
] [ 0 ] . currVal = ( char_T * ) & localB -> pcehat2zsh ;
mr_nonContOutputArray [ 1 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 1 ] [
1 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 1 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 1 ] [ 1 ] . currVal = ( char_T * ) & localB ->
iavnojyf0h ; mr_nonContOutputArray [ 1 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 2 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 2 ] . currVal = ( char_T * ) &
localB -> lbnnh4hq31 ; mr_nonContOutputArray [ 1 ] [ 2 ] . next = ( NULL ) ;
} if ( mr_nonContOutputArray [ 2 ] != ( NULL ) ) { mr_nonContOutputArray [ 2
] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 2
] [ 0 ] . currVal = ( char_T * ) & localB -> lbnnh4hq31 ;
mr_nonContOutputArray [ 2 ] [ 0 ] . next = ( NULL ) ; } } void
mr_EF20Algo_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_EF20Algo , 51 ) ; * retVal = 1 ; } static void
mr_EF20Algo_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_EF20Algo_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_EF20Algo_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_EF20Algo_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_EF20Algo_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_EF20Algo_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_EF20Algo_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_EF20Algo_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_EF20Algo_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_EF20Algo_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EF20Algo_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_EF20Algo_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EF20Algo_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_EF20Algo_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_EF20Algo_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_EF20Algo_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_EF20Algo_GetDWork ( const dlx312diuhz * mdlrefDW ) { static
const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_EF20Algo_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) ,
sizeof ( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 13
] = { "mdlrefDW->rtdw.mrzsgdsaso" , "mdlrefDW->rtdw.nrquthaejf" ,
"mdlrefDW->rtdw.jco2y5fccn" , "mdlrefDW->rtdw.dh1f11y51h" ,
"mdlrefDW->rtdw.m2jcxr0bz3" , "mdlrefDW->rtdw.ol4mdh13u3" ,
"mdlrefDW->rtdw.hepypnl4n1" , "mdlrefDW->rtdw.jirxzen3lj" ,
"mdlrefDW->rtdw.ndmy12lknt" , "mdlrefDW->rtdw.mcufrqb1af" ,
"mdlrefDW->rtdw.g0nofjcuqs" , "mdlrefDW->rtdw.kmfjva2spk" ,
"mdlrefDW->rtdw.lpw1z20xhn" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 13 , rtdwDataFieldNames ) ; mr_EF20Algo_cacheDataAsMxArray ( rtdwData
, 0 , 0 , & ( mdlrefDW -> rtdw . mrzsgdsaso ) , sizeof ( mdlrefDW -> rtdw .
mrzsgdsaso ) ) ; mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 1 , & (
mdlrefDW -> rtdw . nrquthaejf ) , sizeof ( mdlrefDW -> rtdw . nrquthaejf ) )
; mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW -> rtdw .
jco2y5fccn ) , sizeof ( mdlrefDW -> rtdw . jco2y5fccn ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw .
dh1f11y51h ) , sizeof ( mdlrefDW -> rtdw . dh1f11y51h ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw .
m2jcxr0bz3 ) , sizeof ( mdlrefDW -> rtdw . m2jcxr0bz3 ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW -> rtdw .
ol4mdh13u3 ) , sizeof ( mdlrefDW -> rtdw . ol4mdh13u3 ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW -> rtdw .
hepypnl4n1 ) , sizeof ( mdlrefDW -> rtdw . hepypnl4n1 ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW -> rtdw .
jirxzen3lj ) , sizeof ( mdlrefDW -> rtdw . jirxzen3lj ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW -> rtdw .
ndmy12lknt ) , sizeof ( mdlrefDW -> rtdw . ndmy12lknt ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW -> rtdw .
mcufrqb1af ) , sizeof ( mdlrefDW -> rtdw . mcufrqb1af ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW -> rtdw .
g0nofjcuqs ) , sizeof ( mdlrefDW -> rtdw . g0nofjcuqs ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW -> rtdw .
kmfjva2spk ) , sizeof ( mdlrefDW -> rtdw . kmfjva2spk ) ) ;
mr_EF20Algo_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW -> rtdw .
lpw1z20xhn ) , sizeof ( mdlrefDW -> rtdw . lpw1z20xhn ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_EF20Algo_SetDWork ( dlx312diuhz * mdlrefDW , const mxArray *
ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 ,
sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_EF20Algo_restoreDataFromMxArray ( &
( mdlrefDW -> rtdw . mrzsgdsaso ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . mrzsgdsaso ) ) ; mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . nrquthaejf ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
nrquthaejf ) ) ; mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
jco2y5fccn ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . jco2y5fccn ) )
; mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . dh1f11y51h ) ,
rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . dh1f11y51h ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . m2jcxr0bz3 ) ,
rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . m2jcxr0bz3 ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ol4mdh13u3 ) ,
rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . ol4mdh13u3 ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hepypnl4n1 ) ,
rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . hepypnl4n1 ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . jirxzen3lj ) ,
rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . jirxzen3lj ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ndmy12lknt ) ,
rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . ndmy12lknt ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . mcufrqb1af ) ,
rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . mcufrqb1af ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . g0nofjcuqs ) ,
rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . g0nofjcuqs ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . kmfjva2spk ) ,
rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . kmfjva2spk ) ) ;
mr_EF20Algo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lpw1z20xhn ) ,
rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . lpw1z20xhn ) ) ; } } void
mr_EF20Algo_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 3459972218U , 3745596221U , 3348637050U , 4204315020U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "EF20Algo" , & chksum [ 0 ] ) ; }
mxArray * mr_EF20Algo_GetSimStateDisallowedBlocks ( ) { return NULL ; }
