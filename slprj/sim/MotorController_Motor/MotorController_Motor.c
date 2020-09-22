#include "MotorController_Motor_capi.h"
#include "MotorController_Motor.h"
#include "MotorController_Motor_private.h"
#include "look1_binlxpw.h"
static RegMdlInfo rtMdlInfo_MotorController_Motor [ 45 ] = { { "g321l4fgcjv"
, MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "MotorController_Motor" }
, { "dpabllznuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "nltybd0j0i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "ns5z3yjcts" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "i0354kg0a4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "b0j5lrjxmi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "az44w3s1m5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "dmv3yeuq34" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "bavawo2qlp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "ezuhrtdjue" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "nxyfwgs5xs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "buy3nvslk4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "iwztahng0v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "aqhhluydqz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "cheyhxg1pd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "gurjr1qgs3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "jvwifv015y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "cbtrgbhqib" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "mg32y4snwf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "kwv3rukthn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "ecix5wfoq0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "hvnefhchlk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "m3vrwg1rl1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "ogs3v1zv4a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "fsqmqoeryg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "canocfvrcu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "lwhspwpch2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "MotorController_Motor"
, MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "cpafjgrwwf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , { "cjrusihnb0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotorController_Motor" } , { "cg1a0054vq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotorController_Motor" } , {
"mr_MotorController_Motor_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "MotorController_Motor" } , {
"mr_MotorController_Motor_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotorController_Motor" } ,
{ "mr_MotorController_Motor_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "MotorController_Motor" } , {
"mr_MotorController_Motor_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "MotorController_Motor" } , { "MotorController_Motor.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "MotorController_Motor.c"
, MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "MotorController_Motor" } }
; byk2u51fqjk byk2u51fqj = { 15.0796 , 0.13069 , 0.14074 , 5.2E-5 , { 5.2E-5
, 5.6E-5 } , 5.6E-5 , 10.0 , 10.0 , 0.006 , { 0.0 , 15.531226878328 ,
31.0642852747721 , 46.6010049095523 , 62.1432119156802 , 77.6927270667208 ,
93.2513640299298 , 108.820927652792 , 124.403212290623 , 140.000000182471 } ,
98.0 , { 0.0 , - 0.252602944280072 , - 1.01017357706881 , - 2.27199841989307
, - 4.03689206860216 , - 6.30320274051235 , - 9.06881995564731 , -
12.3311842693036 , - 16.0872989522962 , - 20.3337434963309 } , { 0.0 , 0.0 }
, { - 20.333741947309 , 362.019009378644 , 362.589608528808 } , { 0.0 ,
40.2869423665694 , 80.5691360467715 , 120.841846330784 , 161.100366350739 ,
201.340030725588 , 241.556228879371 , 281.744417931854 , 321.900135066892 ,
362.019009291639 } , 0.0257 , 0.0257 , 0.0 , 0.001 , 3.0 , 0.0 , 3.0 ,
2.2204460492503131E-16 , 0.0 , 0.0 , 3.0 , 2.2204460492503131E-16 , 0.0 , 3.0
, 0.66666666666666663 , - 0.33333333333333331 , - 1.0 , - 0.33333333333333331
, 0.57735026918962573 , - 0.57735026918962573 , 0.57735026918962584 , 4.0 ,
0.0 , 0.0 , 0.0 , 5.0E-5 , 1.0E+7 , - 1.0E+7 , 0.0 , 5.0E-5 , 1.0E+7 , -
1.0E+7 , - 0.5 , - 0.5 , 0.8660254037844386 , - 0.8660254037844386 , 1.0 ,
2.0 , 2.2204460492503131E-16 , 0.0 , 0.0 , 100.0 , 100.0 , 1.0 , 1.0E+7 , -
1.0E+7 , 3.1415926535897931 , - 3.1415926535897931 , 1.0E+7 , - 1.0E+7 , -
0.5 , 0.8660254037844386 , 0.66666666666666663 , - 0.33333333333333331 , -
0.33333333333333331 , 0.57735026918962573 , - 0.57735026918962573 , - 0.5 , -
0.8660254037844386 , 1.0 , 2.0 , 1.0 , 1.0 , 2.0 , 1.0 , 1.0 , 2.0 , 2.0 ,
1.0 , 2.0 , 2.0 , 2.0 } ; void ogs3v1zv4a ( cg1a0054vq * const mrok2kfx0s ,
aqhhluydqz * localB , iwztahng0v * localDW , dmv3yeuq34 * localX ) {
boolean_T tmp ; localDW -> b41cgz1ldw = 1 ; if ( rtmIsFirstInitCond (
mrok2kfx0s ) ) { localX -> pvuwel0xoa = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( mrok2kfx0s -> _mdlRefSfcnS ) ; localDW ->
b41cgz1ldw = ! tmp ; } else { localDW -> b41cgz1ldw = 1 ; } localX ->
d2tcw0vor0 = 0.0 ; } localX -> i4svxgppca = byk2u51fqj . P_17 ; localDW ->
nhnhojbm0m = 1 ; if ( rtmIsFirstInitCond ( mrok2kfx0s ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( mrok2kfx0s -> _mdlRefSfcnS ) ; localDW ->
nhnhojbm0m = ! tmp ; } else { localDW -> nhnhojbm0m = 1 ; } } localDW ->
hrld4y0eco = byk2u51fqj . P_39 ; localDW -> dt0ehp3ejr = byk2u51fqj . P_43 ;
localB -> mvvx05o5ws = byk2u51fqj . P_23 ; localB -> cj3ls05rsg = byk2u51fqj
. P_24 ; localB -> b52a323250 = byk2u51fqj . P_37 ; localB -> j0egur4mo5 =
byk2u51fqj . P_38 ; } void m3vrwg1rl1 ( cg1a0054vq * const mrok2kfx0s ,
iwztahng0v * localDW , dmv3yeuq34 * localX ) { boolean_T tmp ; localDW ->
b41cgz1ldw = 1 ; if ( rtmIsFirstInitCond ( mrok2kfx0s ) ) { localX ->
pvuwel0xoa = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ssGetGlobalInitialStatesAvailable ( mrok2kfx0s -> _mdlRefSfcnS ) ;
localDW -> b41cgz1ldw = ! tmp ; } else { localDW -> b41cgz1ldw = 1 ; } localX
-> d2tcw0vor0 = 0.0 ; } localX -> i4svxgppca = byk2u51fqj . P_17 ; localDW ->
nhnhojbm0m = 1 ; if ( rtmIsFirstInitCond ( mrok2kfx0s ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( mrok2kfx0s -> _mdlRefSfcnS ) ; localDW ->
nhnhojbm0m = ! tmp ; } else { localDW -> nhnhojbm0m = 1 ; } } localDW ->
hrld4y0eco = byk2u51fqj . P_39 ; localDW -> dt0ehp3ejr = byk2u51fqj . P_43 ;
} void cbtrgbhqib ( cg1a0054vq * const mrok2kfx0s , iwztahng0v * localDW ) {
switch ( localDW -> kfm0vxmfr1 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; switch ( localDW -> kg2tzjkbyc ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; break ; } localDW -> kg2tzjkbyc = - 1 ; switch ( localDW ->
harls3m1h2 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
mrok2kfx0s -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; } localDW -> harls3m1h2 = - 1 ; break ; } localDW -> kfm0vxmfr1 = - 1
; } void canocfvrcu ( iwztahng0v * localDW ) { localDW -> fzxpm0jdc3 = 0 ;
localDW -> brecurpyqf = 0 ; localDW -> hhlvyn4zum = 0 ; localDW -> kg2tzjkbyc
= - 1 ; localDW -> harls3m1h2 = - 1 ; localDW -> kfm0vxmfr1 = - 1 ; } void
MotorController_Motor ( cg1a0054vq * const mrok2kfx0s , const real_T *
p5rqxxpa5q , const real_T * fyh2ehge0f , const real_T * aro020ao2x , real_T *
lwcz2log02 , real_T * d1egkhmlvn , real_T * gkhfk4apxp , aqhhluydqz * localB
, iwztahng0v * localDW , dmv3yeuq34 * localX ) { real_T ekse0djpc2 ; real_T
liehc2uwil ; real_T as1zrz5ut4 ; real_T lph3v3ceup ; real_T fyxx51lkhj ;
real_T avxzddabfx ; real_T jb0ynmd1ah ; real_T bgxih44r2l ; real_T du0alo4ng5
; int8_T rtPrevAction ; int8_T rtAction ; real_T dh12zchz0o ; real_T
h1ivdjczcs ; real_T mz5g2ahsq5_p ; real_T olxomuidu2_p ; real_T bnoshle3tz_p
; real_T fn3ba5lt4e_p ; int32_T u0 ; if ( localDW -> b41cgz1ldw != 0 ) {
localX -> pvuwel0xoa = localB -> l5pep0bffa ; } if ( rtmIsMajorTimeStep (
mrok2kfx0s ) ) { if ( localX -> pvuwel0xoa >= byk2u51fqj . P_59 ) { if (
localX -> pvuwel0xoa > byk2u51fqj . P_59 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
localX -> pvuwel0xoa = byk2u51fqj . P_59 ; } else { if ( localX -> pvuwel0xoa
<= byk2u51fqj . P_60 ) { if ( localX -> pvuwel0xoa < byk2u51fqj . P_60 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
localX -> pvuwel0xoa = byk2u51fqj . P_60 ; } } } mz5g2ahsq5_p = localX ->
pvuwel0xoa ; bnoshle3tz_p = localX -> i4svxgppca ; muDoubleScalarSinCos (
byk2u51fqj . P_6 * localX -> i4svxgppca , & ekse0djpc2 , & liehc2uwil ) ;
as1zrz5ut4 = localX -> pvuwel0xoa * liehc2uwil ; if ( localDW -> nhnhojbm0m
!= 0 ) { localX -> d2tcw0vor0 = localB -> jcttjvetjz_cl54gopm0x ; } if (
rtmIsMajorTimeStep ( mrok2kfx0s ) ) { if ( localX -> d2tcw0vor0 >= byk2u51fqj
. P_63 ) { if ( localX -> d2tcw0vor0 > byk2u51fqj . P_63 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
localX -> d2tcw0vor0 = byk2u51fqj . P_63 ; } else { if ( localX -> d2tcw0vor0
<= byk2u51fqj . P_64 ) { if ( localX -> d2tcw0vor0 < byk2u51fqj . P_64 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
localX -> d2tcw0vor0 = byk2u51fqj . P_64 ; } } } olxomuidu2_p = localX ->
d2tcw0vor0 ; as1zrz5ut4 -= localX -> d2tcw0vor0 * ekse0djpc2 ; fn3ba5lt4e_p =
( mz5g2ahsq5_p * ekse0djpc2 + localX -> d2tcw0vor0 * liehc2uwil ) *
byk2u51fqj . P_66 + byk2u51fqj . P_65 * as1zrz5ut4 ; if ( rtmIsMajorTimeStep
( mrok2kfx0s ) && rtmIsSampleHit ( mrok2kfx0s , 1 , 0 ) ) { if (
rtmIsMajorTimeStep ( mrok2kfx0s ) && rtmIsSampleHit ( mrok2kfx0s , 1 , 0 ) )
{ jb0ynmd1ah = ( as1zrz5ut4 + fn3ba5lt4e_p ) * byk2u51fqj . P_31 ; fyxx51lkhj
= ( byk2u51fqj . P_29 * as1zrz5ut4 + byk2u51fqj . P_30 * fn3ba5lt4e_p ) +
byk2u51fqj . P_32 * jb0ynmd1ah ; avxzddabfx = byk2u51fqj . P_33 *
fn3ba5lt4e_p + byk2u51fqj . P_34 * jb0ynmd1ah ; bgxih44r2l =
muDoubleScalarAbs ( * p5rqxxpa5q ) ; lph3v3ceup = byk2u51fqj . P_35 * *
aro020ao2x ; du0alo4ng5 = byk2u51fqj . P_7 * muDoubleScalarAbs ( * fyh2ehge0f
) ; jb0ynmd1ah = byk2u51fqj . P_36 * * p5rqxxpa5q ; dh12zchz0o =
look1_binlxpw ( bgxih44r2l , byk2u51fqj . P_9 , byk2u51fqj . P_11 , 9U ) ;
h1ivdjczcs = look1_binlxpw ( bgxih44r2l , byk2u51fqj . P_9 , byk2u51fqj .
P_14 , 9U ) ; rtPrevAction = localDW -> kfm0vxmfr1 ; rtAction = ( int8_T ) !
( du0alo4ng5 <= lph3v3ceup / localB -> oi4yhxx40u ) ; localDW -> kfm0vxmfr1 =
rtAction ; if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0
: ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; switch ( localDW -> kg2tzjkbyc ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; break ; } localDW -> kg2tzjkbyc = - 1 ; switch ( localDW ->
harls3m1h2 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
mrok2kfx0s -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; } localDW -> harls3m1h2 = - 1 ; break ; } } if ( rtAction == 0 ) { if
( 0 != rtPrevAction ) { if ( rtmGetTaskTime ( mrok2kfx0s , 1 ) !=
rtmGetTStart ( mrok2kfx0s ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
mrok2kfx0s -> _mdlRefSfcnS ) ; } } localB -> b52a323250 = dh12zchz0o ; localB
-> j0egur4mo5 = h1ivdjczcs ; srUpdateBC ( localDW -> j2a1cbrlgy ) ; } else {
if ( 1 != rtPrevAction ) { if ( rtmGetTaskTime ( mrok2kfx0s , 1 ) !=
rtmGetTStart ( mrok2kfx0s ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
mrok2kfx0s -> _mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( mrok2kfx0s ) &&
rtmIsSampleHit ( mrok2kfx0s , 1 , 0 ) ) { lph3v3ceup /= muDoubleScalarMax (
du0alo4ng5 , byk2u51fqj . P_26 ) ; lph3v3ceup = muDoubleScalarMax ( localB ->
eu3gbrsgbe - ( localB -> h0n0msqs3c - lph3v3ceup * lph3v3ceup ) * localB ->
nbd5j4xid0 , byk2u51fqj . P_27 ) ; if ( rtmIsMajorTimeStep ( mrok2kfx0s ) ) {
if ( localDW -> hhlvyn4zum != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
localDW -> hhlvyn4zum = 0 ; } du0alo4ng5 = muDoubleScalarSqrt ( lph3v3ceup )
; } else if ( lph3v3ceup < 0.0 ) { du0alo4ng5 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( lph3v3ceup ) ) ; localDW -> hhlvyn4zum = 1 ; } else {
du0alo4ng5 = muDoubleScalarSqrt ( lph3v3ceup ) ; } lph3v3ceup = ( -
byk2u51fqj . P_15 * byk2u51fqj . P_3 + du0alo4ng5 ) / localB -> gbzwq35xry ;
rtPrevAction = localDW -> kg2tzjkbyc ; rtAction = ( int8_T ) ! ( lph3v3ceup <
localB -> leyajshupm ) ; localDW -> kg2tzjkbyc = rtAction ; if ( rtPrevAction
!= rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; break ; } } if ( rtAction == 0 ) { if ( 0 != rtPrevAction )
{ if ( rtmGetTaskTime ( mrok2kfx0s , 1 ) != rtmGetTStart ( mrok2kfx0s ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
} if ( rtmIsMajorTimeStep ( mrok2kfx0s ) && rtmIsSampleHit ( mrok2kfx0s , 1 ,
0 ) ) { if ( rtmIsMajorTimeStep ( mrok2kfx0s ) ) { localB -> mvvx05o5ws = -
byk2u51fqj . P_13 [ ( int32_T ) byk2u51fqj . P_19 - 1 ] ; } else { u0 = (
int32_T ) byk2u51fqj . P_19 ; if ( u0 > 3 ) { u0 = 3 ; } else { if ( u0 < 1 )
{ u0 = 1 ; } } localB -> mvvx05o5ws = - byk2u51fqj . P_13 [ u0 - 1 ] ; }
localB -> cj3ls05rsg = byk2u51fqj . P_20 ; } srUpdateBC ( localDW ->
gsmplkkuhp ) ; } else { if ( 1 != rtPrevAction ) { if ( rtmGetTaskTime (
mrok2kfx0s , 1 ) != rtmGetTStart ( mrok2kfx0s ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
} if ( rtmIsMajorTimeStep ( mrok2kfx0s ) && rtmIsSampleHit ( mrok2kfx0s , 1 ,
0 ) ) { localB -> mvvx05o5ws = lph3v3ceup ; lph3v3ceup = localB -> meoyafrqf0
- lph3v3ceup * lph3v3ceup ; if ( rtmIsMajorTimeStep ( mrok2kfx0s ) ) { if (
localDW -> brecurpyqf != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
mrok2kfx0s -> _mdlRefSfcnS ) ; localDW -> brecurpyqf = 0 ; } localB ->
cj3ls05rsg = muDoubleScalarSqrt ( lph3v3ceup ) ; } else if ( lph3v3ceup < 0.0
) { localB -> cj3ls05rsg = - muDoubleScalarSqrt ( muDoubleScalarAbs (
lph3v3ceup ) ) ; localDW -> brecurpyqf = 1 ; } else { localB -> cj3ls05rsg =
muDoubleScalarSqrt ( lph3v3ceup ) ; } } srUpdateBC ( localDW -> c15wjj1kln )
; } rtPrevAction = localDW -> harls3m1h2 ; rtAction = ( int8_T ) ! ( ( (
byk2u51fqj . P_3 - byk2u51fqj . P_5 ) * localB -> mvvx05o5ws + byk2u51fqj .
P_15 ) * localB -> cj3ls05rsg * ( 1.5 * byk2u51fqj . P_7 ) < bgxih44r2l ) ;
localDW -> harls3m1h2 = rtAction ; if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
mrok2kfx0s -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
break ; } } if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { if (
rtmGetTaskTime ( mrok2kfx0s , 1 ) != rtmGetTStart ( mrok2kfx0s ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
} localB -> b52a323250 = localB -> mvvx05o5ws ; localB -> j0egur4mo5 = localB
-> cj3ls05rsg ; srUpdateBC ( localDW -> akw2cmhtvj ) ; } else { if ( 1 !=
rtPrevAction ) { if ( rtmGetTaskTime ( mrok2kfx0s , 1 ) != rtmGetTStart (
mrok2kfx0s ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( mrok2kfx0s ) && rtmIsSampleHit
( mrok2kfx0s , 1 , 0 ) ) { localB -> j0egur4mo5 = bgxih44r2l /
muDoubleScalarMax ( ( ( byk2u51fqj . P_3 - byk2u51fqj . P_5 ) * localB ->
mvvx05o5ws + byk2u51fqj . P_15 ) * ( 1.5 * byk2u51fqj . P_7 ) , byk2u51fqj .
P_22 ) ; localB -> b52a323250 = localB -> mvvx05o5ws ; } srUpdateBC ( localDW
-> hnnsk411ps ) ; } } srUpdateBC ( localDW -> pi1314udbz ) ; }
muDoubleScalarSinCos ( byk2u51fqj . P_7 * bnoshle3tz_p , & bgxih44r2l , &
lph3v3ceup ) ; bnoshle3tz_p = fyxx51lkhj * lph3v3ceup + avxzddabfx *
bgxih44r2l ; du0alo4ng5 = byk2u51fqj . P_7 * * fyh2ehge0f ; fyxx51lkhj =
avxzddabfx * lph3v3ceup - fyxx51lkhj * bgxih44r2l ; jb0ynmd1ah = localB ->
j0egur4mo5 * muDoubleScalarTanh ( jb0ynmd1ah ) - fyxx51lkhj ; avxzddabfx =
localB -> b52a323250 - bnoshle3tz_p ; dh12zchz0o = byk2u51fqj . P_0 *
avxzddabfx * byk2u51fqj . P_40 + localDW -> hrld4y0eco ; if ( dh12zchz0o >
byk2u51fqj . P_41 ) { localB -> k1auhcyuqp = byk2u51fqj . P_41 ; } else if (
dh12zchz0o < byk2u51fqj . P_42 ) { localB -> k1auhcyuqp = byk2u51fqj . P_42 ;
} else { localB -> k1auhcyuqp = dh12zchz0o ; } dh12zchz0o = byk2u51fqj . P_0
* jb0ynmd1ah * byk2u51fqj . P_44 + localDW -> dt0ehp3ejr ; if ( dh12zchz0o >
byk2u51fqj . P_45 ) { localB -> oaik41k3ap = byk2u51fqj . P_45 ; } else if (
dh12zchz0o < byk2u51fqj . P_46 ) { localB -> oaik41k3ap = byk2u51fqj . P_46 ;
} else { localB -> oaik41k3ap = dh12zchz0o ; } avxzddabfx = ( byk2u51fqj .
P_1 * avxzddabfx + localDW -> hrld4y0eco ) - byk2u51fqj . P_5 * fyxx51lkhj *
du0alo4ng5 ; bnoshle3tz_p = ( byk2u51fqj . P_3 * bnoshle3tz_p + byk2u51fqj .
P_15 ) * du0alo4ng5 + ( byk2u51fqj . P_2 * jb0ynmd1ah + localDW -> dt0ehp3ejr
) ; fyxx51lkhj = avxzddabfx * lph3v3ceup - bnoshle3tz_p * bgxih44r2l ;
bnoshle3tz_p = avxzddabfx * bgxih44r2l + bnoshle3tz_p * lph3v3ceup ;
jb0ynmd1ah = byk2u51fqj . P_48 * fyxx51lkhj + byk2u51fqj . P_49 *
bnoshle3tz_p ; avxzddabfx = byk2u51fqj . P_47 * fyxx51lkhj + byk2u51fqj .
P_50 * bnoshle3tz_p ; as1zrz5ut4 = ( fyxx51lkhj - avxzddabfx ) * as1zrz5ut4 +
( jb0ynmd1ah - avxzddabfx ) * fn3ba5lt4e_p ; if ( as1zrz5ut4 >= byk2u51fqj .
P_55 ) { bnoshle3tz_p = as1zrz5ut4 * localB -> jg5qydeu3x ; } else {
bnoshle3tz_p = muDoubleScalarAbs ( as1zrz5ut4 ) * localB -> hvfwpqavv2 ; } *
gkhfk4apxp = as1zrz5ut4 + bnoshle3tz_p ; if ( ( * aro020ao2x >= - byk2u51fqj
. P_18 ) && ( * aro020ao2x <= byk2u51fqj . P_18 ) ) { if ( * aro020ao2x >=
byk2u51fqj . P_54 ) { bnoshle3tz_p = byk2u51fqj . P_58 ; } else {
bnoshle3tz_p = localB -> lou30zkwo0 ; } as1zrz5ut4 = 0.002 / ( 3.0 -
muDoubleScalarPower ( * aro020ao2x / 0.001 , 2.0 ) ) * bnoshle3tz_p ; } else
{ as1zrz5ut4 = * aro020ao2x ; } * d1egkhmlvn = * gkhfk4apxp / as1zrz5ut4 ; }
localB -> gdsiulctkx = ( byk2u51fqj . P_67 * fyxx51lkhj + byk2u51fqj . P_68 *
jb0ynmd1ah ) + byk2u51fqj . P_69 * avxzddabfx ; localB -> jcttjvetjz =
byk2u51fqj . P_70 * jb0ynmd1ah + byk2u51fqj . P_71 * avxzddabfx ; }
as1zrz5ut4 = byk2u51fqj . P_6 * * fyh2ehge0f ; * lwcz2log02 = ( mz5g2ahsq5_p
* olxomuidu2_p * localB -> pjtipmnpfw + byk2u51fqj . P_16 * olxomuidu2_p ) *
( 1.5 * byk2u51fqj . P_6 ) ; localB -> d2mdqno2vo = ( ( localB -> gdsiulctkx
* liehc2uwil + localB -> jcttjvetjz * ekse0djpc2 ) / localB -> fn3ba5lt4e +
as1zrz5ut4 * olxomuidu2_p * localB -> lzmgv2co5r / localB -> p5q30h0u5a ) -
mz5g2ahsq5_p * byk2u51fqj . P_8 / localB -> gdsiulctkx_mbvzarwird ; localB ->
ma10qpk4dj = ( ( ( localB -> jcttjvetjz * liehc2uwil - localB -> gdsiulctkx *
ekse0djpc2 ) / localB -> kfxg3mqgyd - mz5g2ahsq5_p * as1zrz5ut4 * localB ->
lvr1v104vg / localB -> hr0x1lh4l1 ) - as1zrz5ut4 * byk2u51fqj . P_16 / localB
-> girozsp15z ) - olxomuidu2_p * byk2u51fqj . P_8 / localB ->
d2mdqno2vo_kkiq3xxxve ; } void MotorController_MotorTID2 ( cg1a0054vq * const
mrok2kfx0s , aqhhluydqz * localB , iwztahng0v * localDW ) { real_T l05gswe4ly
; real_T fm1uievfpv ; int32_T u0 ; if ( rtmIsMajorTimeStep ( mrok2kfx0s ) ) {
fm1uievfpv = byk2u51fqj . P_13 [ ( int32_T ) byk2u51fqj . P_51 - 1 ] ; } else
{ u0 = ( int32_T ) byk2u51fqj . P_51 ; if ( u0 > 3 ) { u0 = 3 ; } else { if (
u0 < 1 ) { u0 = 1 ; } } fm1uievfpv = byk2u51fqj . P_13 [ u0 - 1 ] ; }
l05gswe4ly = byk2u51fqj . P_3 * fm1uievfpv + byk2u51fqj . P_15 ; if (
rtmIsMajorTimeStep ( mrok2kfx0s ) ) { fm1uievfpv = byk2u51fqj . P_13 [ (
int32_T ) byk2u51fqj . P_52 - 1 ] ; } else { u0 = ( int32_T ) byk2u51fqj .
P_52 ; if ( u0 > 3 ) { u0 = 3 ; } else { if ( u0 < 1 ) { u0 = 1 ; } }
fm1uievfpv = byk2u51fqj . P_13 [ u0 - 1 ] ; } fm1uievfpv *= byk2u51fqj . P_5
; l05gswe4ly = l05gswe4ly * l05gswe4ly + fm1uievfpv * fm1uievfpv ; if (
rtmIsMajorTimeStep ( mrok2kfx0s ) ) { if ( localDW -> fzxpm0jdc3 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
localDW -> fzxpm0jdc3 = 0 ; } fm1uievfpv = muDoubleScalarSqrt ( l05gswe4ly )
; localB -> leyajshupm = - byk2u51fqj . P_13 [ ( int32_T ) byk2u51fqj . P_25
- 1 ] ; l05gswe4ly = byk2u51fqj . P_13 [ ( int32_T ) byk2u51fqj . P_28 - 1 ]
; } else { if ( l05gswe4ly < 0.0 ) { fm1uievfpv = - muDoubleScalarSqrt (
muDoubleScalarAbs ( l05gswe4ly ) ) ; localDW -> fzxpm0jdc3 = 1 ; } else {
fm1uievfpv = muDoubleScalarSqrt ( l05gswe4ly ) ; } u0 = ( int32_T )
byk2u51fqj . P_25 ; if ( u0 > 3 ) { u0 = 3 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> leyajshupm = - byk2u51fqj . P_13 [ u0 - 1 ] ; u0 = ( int32_T
) byk2u51fqj . P_28 ; if ( u0 > 3 ) { u0 = 3 ; } else { if ( u0 < 1 ) { u0 =
1 ; } } l05gswe4ly = byk2u51fqj . P_13 [ u0 - 1 ] ; } localB -> oi4yhxx40u =
muDoubleScalarMax ( fm1uievfpv , byk2u51fqj . P_53 ) ; fm1uievfpv =
byk2u51fqj . P_5 * byk2u51fqj . P_5 ; localB -> h0n0msqs3c = fm1uievfpv * (
l05gswe4ly * l05gswe4ly ) + byk2u51fqj . P_15 * byk2u51fqj . P_15 ;
l05gswe4ly = byk2u51fqj . P_15 * byk2u51fqj . P_3 ; localB -> eu3gbrsgbe =
l05gswe4ly * l05gswe4ly ; l05gswe4ly = byk2u51fqj . P_3 * byk2u51fqj . P_3 -
fm1uievfpv ; localB -> gbzwq35xry = l05gswe4ly ; localB -> nbd5j4xid0 =
l05gswe4ly ; if ( rtmIsMajorTimeStep ( mrok2kfx0s ) ) { l05gswe4ly =
byk2u51fqj . P_13 [ ( int32_T ) byk2u51fqj . P_21 - 1 ] ; } else { u0 = (
int32_T ) byk2u51fqj . P_21 ; if ( u0 > 3 ) { u0 = 3 ; } else { if ( u0 < 1 )
{ u0 = 1 ; } } l05gswe4ly = byk2u51fqj . P_13 [ u0 - 1 ] ; } localB ->
meoyafrqf0 = l05gswe4ly * l05gswe4ly ; l05gswe4ly = byk2u51fqj . P_56 -
byk2u51fqj . P_10 ; localB -> jg5qydeu3x = l05gswe4ly / byk2u51fqj . P_10 ;
localB -> hvfwpqavv2 = l05gswe4ly / byk2u51fqj . P_57 ; localB -> lou30zkwo0
= - byk2u51fqj . P_58 ; if ( rtmIsMajorTimeStep ( mrok2kfx0s ) ) { fm1uievfpv
= byk2u51fqj . P_4 [ ( int32_T ) byk2u51fqj . P_74 - 1 ] ; l05gswe4ly =
byk2u51fqj . P_4 [ ( int32_T ) byk2u51fqj . P_75 - 1 ] ; localB -> l5pep0bffa
= byk2u51fqj . P_12 [ ( int32_T ) byk2u51fqj . P_76 - 1 ] ; localB ->
fn3ba5lt4e = byk2u51fqj . P_4 [ ( int32_T ) byk2u51fqj . P_77 - 1 ] ; localB
-> lzmgv2co5r = byk2u51fqj . P_4 [ ( int32_T ) byk2u51fqj . P_78 - 1 ] ;
localB -> p5q30h0u5a = byk2u51fqj . P_4 [ ( int32_T ) byk2u51fqj . P_79 - 1 ]
; localB -> gdsiulctkx_mbvzarwird = byk2u51fqj . P_4 [ ( int32_T ) byk2u51fqj
. P_80 - 1 ] ; localB -> jcttjvetjz_cl54gopm0x = byk2u51fqj . P_12 [ (
int32_T ) byk2u51fqj . P_81 - 1 ] ; localB -> kfxg3mqgyd = byk2u51fqj . P_4 [
( int32_T ) byk2u51fqj . P_82 - 1 ] ; localB -> lvr1v104vg = byk2u51fqj . P_4
[ ( int32_T ) byk2u51fqj . P_83 - 1 ] ; localB -> hr0x1lh4l1 = byk2u51fqj .
P_4 [ ( int32_T ) byk2u51fqj . P_84 - 1 ] ; localB -> girozsp15z = byk2u51fqj
. P_4 [ ( int32_T ) byk2u51fqj . P_85 - 1 ] ; localB -> d2mdqno2vo_kkiq3xxxve
= byk2u51fqj . P_4 [ ( int32_T ) byk2u51fqj . P_86 - 1 ] ; } else { u0 = (
int32_T ) byk2u51fqj . P_74 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 )
{ u0 = 1 ; } } fm1uievfpv = byk2u51fqj . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
byk2u51fqj . P_75 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } l05gswe4ly = byk2u51fqj . P_4 [ u0 - 1 ] ; u0 = ( int32_T ) byk2u51fqj
. P_76 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1 ; } }
localB -> l5pep0bffa = byk2u51fqj . P_12 [ u0 - 1 ] ; u0 = ( int32_T )
byk2u51fqj . P_77 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> fn3ba5lt4e = byk2u51fqj . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
byk2u51fqj . P_78 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> lzmgv2co5r = byk2u51fqj . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
byk2u51fqj . P_79 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> p5q30h0u5a = byk2u51fqj . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
byk2u51fqj . P_80 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> gdsiulctkx_mbvzarwird = byk2u51fqj . P_4 [ u0 - 1 ] ; u0 = (
int32_T ) byk2u51fqj . P_81 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 )
{ u0 = 1 ; } } localB -> jcttjvetjz_cl54gopm0x = byk2u51fqj . P_12 [ u0 - 1 ]
; u0 = ( int32_T ) byk2u51fqj . P_82 ; if ( u0 > 2 ) { u0 = 2 ; } else { if (
u0 < 1 ) { u0 = 1 ; } } localB -> kfxg3mqgyd = byk2u51fqj . P_4 [ u0 - 1 ] ;
u0 = ( int32_T ) byk2u51fqj . P_83 ; if ( u0 > 2 ) { u0 = 2 ; } else { if (
u0 < 1 ) { u0 = 1 ; } } localB -> lvr1v104vg = byk2u51fqj . P_4 [ u0 - 1 ] ;
u0 = ( int32_T ) byk2u51fqj . P_84 ; if ( u0 > 2 ) { u0 = 2 ; } else { if (
u0 < 1 ) { u0 = 1 ; } } localB -> hr0x1lh4l1 = byk2u51fqj . P_4 [ u0 - 1 ] ;
u0 = ( int32_T ) byk2u51fqj . P_85 ; if ( u0 > 2 ) { u0 = 2 ; } else { if (
u0 < 1 ) { u0 = 1 ; } } localB -> girozsp15z = byk2u51fqj . P_4 [ u0 - 1 ] ;
u0 = ( int32_T ) byk2u51fqj . P_86 ; if ( u0 > 2 ) { u0 = 2 ; } else { if (
u0 < 1 ) { u0 = 1 ; } } localB -> d2mdqno2vo_kkiq3xxxve = byk2u51fqj . P_4 [
u0 - 1 ] ; } localB -> pjtipmnpfw = fm1uievfpv - l05gswe4ly ; } void
hvnefhchlk ( cg1a0054vq * const mrok2kfx0s , aqhhluydqz * localB , iwztahng0v
* localDW , dmv3yeuq34 * localX ) { if ( rtmIsMajorTimeStep ( mrok2kfx0s ) )
{ if ( memcmp ( mrok2kfx0s -> nonContDerivSignal [ 0 ] . pCurrVal ,
mrok2kfx0s -> nonContDerivSignal [ 0 ] . pPrevVal , mrok2kfx0s ->
nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
mrok2kfx0s -> nonContDerivSignal [ 0 ] . pPrevVal , mrok2kfx0s ->
nonContDerivSignal [ 0 ] . pCurrVal , mrok2kfx0s -> nonContDerivSignal [ 0 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( mrok2kfx0s -> _mdlRefSfcnS ) ; } if
( memcmp ( mrok2kfx0s -> nonContDerivSignal [ 1 ] . pCurrVal , mrok2kfx0s ->
nonContDerivSignal [ 1 ] . pPrevVal , mrok2kfx0s -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( mrok2kfx0s -> nonContDerivSignal [
1 ] . pPrevVal , mrok2kfx0s -> nonContDerivSignal [ 1 ] . pCurrVal ,
mrok2kfx0s -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( mrok2kfx0s -> _mdlRefSfcnS ) ; } } localDW ->
b41cgz1ldw = 0 ; if ( localX -> pvuwel0xoa == byk2u51fqj . P_59 ) { switch (
localDW -> nii2rfaw3f ) { case 3 : if ( localB -> d2mdqno2vo < 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
localDW -> nii2rfaw3f = 1 ; } break ; case 1 : if ( localB -> d2mdqno2vo >=
0.0 ) { localDW -> nii2rfaw3f = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; if ( localB -> d2mdqno2vo < 0.0 ) { localDW -> nii2rfaw3f =
1 ; } else { localDW -> nii2rfaw3f = 3 ; } break ; } } else if ( localX ->
pvuwel0xoa == byk2u51fqj . P_60 ) { switch ( localDW -> nii2rfaw3f ) { case 4
: if ( localB -> d2mdqno2vo > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
localDW -> nii2rfaw3f = 2 ; } break ; case 2 : if ( localB -> d2mdqno2vo <=
0.0 ) { localDW -> nii2rfaw3f = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; if ( localB -> d2mdqno2vo > 0.0 ) { localDW -> nii2rfaw3f =
2 ; } else { localDW -> nii2rfaw3f = 4 ; } break ; } } else { localDW ->
nii2rfaw3f = 0 ; } localDW -> nhnhojbm0m = 0 ; if ( localX -> d2tcw0vor0 ==
byk2u51fqj . P_63 ) { switch ( localDW -> pailmcgxuc ) { case 3 : if ( localB
-> ma10qpk4dj < 0.0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
mrok2kfx0s -> _mdlRefSfcnS ) ; localDW -> pailmcgxuc = 1 ; } break ; case 1 :
if ( localB -> ma10qpk4dj >= 0.0 ) { localDW -> pailmcgxuc = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; if ( localB -> ma10qpk4dj < 0.0 ) { localDW -> pailmcgxuc =
1 ; } else { localDW -> pailmcgxuc = 3 ; } break ; } } else if ( localX ->
d2tcw0vor0 == byk2u51fqj . P_64 ) { switch ( localDW -> pailmcgxuc ) { case 4
: if ( localB -> ma10qpk4dj > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ;
localDW -> pailmcgxuc = 2 ; } break ; case 2 : if ( localB -> ma10qpk4dj <=
0.0 ) { localDW -> pailmcgxuc = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( mrok2kfx0s ->
_mdlRefSfcnS ) ; if ( localB -> ma10qpk4dj > 0.0 ) { localDW -> pailmcgxuc =
2 ; } else { localDW -> pailmcgxuc = 4 ; } break ; } } else { localDW ->
pailmcgxuc = 0 ; } if ( ( rtmIsMajorTimeStep ( mrok2kfx0s ) && rtmIsSampleHit
( mrok2kfx0s , 1 , 0 ) ) && ( rtmIsMajorTimeStep ( mrok2kfx0s ) &&
rtmIsSampleHit ( mrok2kfx0s , 1 , 0 ) ) ) { localDW -> hrld4y0eco = localB ->
k1auhcyuqp ; localDW -> dt0ehp3ejr = localB -> oaik41k3ap ; } } void
hvnefhchlkTID2 ( void ) { } void ecix5wfoq0 ( const real_T * fyh2ehge0f ,
aqhhluydqz * localB , iwztahng0v * localDW , b0j5lrjxmi * localXdis ,
az44w3s1m5 * localXdot ) { if ( ( localDW -> nii2rfaw3f != 3 ) && ( localDW
-> nii2rfaw3f != 4 ) ) { localXdot -> pvuwel0xoa = localB -> d2mdqno2vo ;
localXdis -> pvuwel0xoa = false ; } else { localXdot -> pvuwel0xoa = 0.0 ;
localXdis -> pvuwel0xoa = ( ( localDW -> nii2rfaw3f == 3 ) || ( localDW ->
nii2rfaw3f == 4 ) || localXdis -> pvuwel0xoa ) ; } localXdot -> i4svxgppca =
* fyh2ehge0f ; if ( ( localDW -> pailmcgxuc != 3 ) && ( localDW -> pailmcgxuc
!= 4 ) ) { localXdot -> d2tcw0vor0 = localB -> ma10qpk4dj ; localXdis ->
d2tcw0vor0 = false ; } else { localXdot -> d2tcw0vor0 = 0.0 ; localXdis ->
d2tcw0vor0 = ( ( localDW -> pailmcgxuc == 3 ) || ( localDW -> pailmcgxuc == 4
) || localXdis -> d2tcw0vor0 ) ; } } void kwv3rukthn ( aqhhluydqz * localB ,
iwztahng0v * localDW , dmv3yeuq34 * localX , dpabllznuo * localZCSV ) { if (
( localDW -> nii2rfaw3f == 1 ) && ( localX -> pvuwel0xoa >= byk2u51fqj . P_59
) ) { localZCSV -> ednht3jxvm = 0.0 ; } else { localZCSV -> ednht3jxvm =
localX -> pvuwel0xoa - byk2u51fqj . P_59 ; } if ( ( localDW -> nii2rfaw3f ==
2 ) && ( localX -> pvuwel0xoa <= byk2u51fqj . P_60 ) ) { localZCSV ->
nz33gtrlns = 0.0 ; } else { localZCSV -> nz33gtrlns = localX -> pvuwel0xoa -
byk2u51fqj . P_60 ; } if ( ( localDW -> nii2rfaw3f == 3 ) || ( localDW ->
nii2rfaw3f == 4 ) ) { localZCSV -> oj2vkqwsoj = localB -> d2mdqno2vo ; } else
{ localZCSV -> oj2vkqwsoj = 0.0 ; } if ( ( localDW -> pailmcgxuc == 1 ) && (
localX -> d2tcw0vor0 >= byk2u51fqj . P_63 ) ) { localZCSV -> hw5daffbqi = 0.0
; } else { localZCSV -> hw5daffbqi = localX -> d2tcw0vor0 - byk2u51fqj . P_63
; } if ( ( localDW -> pailmcgxuc == 2 ) && ( localX -> d2tcw0vor0 <=
byk2u51fqj . P_64 ) ) { localZCSV -> b0uuz1gdq4 = 0.0 ; } else { localZCSV ->
b0uuz1gdq4 = localX -> d2tcw0vor0 - byk2u51fqj . P_64 ; } if ( ( localDW ->
pailmcgxuc == 3 ) || ( localDW -> pailmcgxuc == 4 ) ) { localZCSV ->
b4krjmssiy = localB -> ma10qpk4dj ; } else { localZCSV -> b4krjmssiy = 0.0 ;
} } void gurjr1qgs3 ( cg1a0054vq * const mrok2kfx0s ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( mrok2kfx0s ->
_mdlRefSfcnS , "MotorController_Motor" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void fsqmqoeryg (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , cg1a0054vq * const mrok2kfx0s , aqhhluydqz * localB ,
iwztahng0v * localDW , dmv3yeuq34 * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) mrok2kfx0s , 0 , sizeof
( cg1a0054vq ) ) ; mrok2kfx0s -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; mrok2kfx0s -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
mrok2kfx0s -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; mrok2kfx0s ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( mrok2kfx0s -> _mdlRefSfcnS , "MotorController_Motor" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> gdsiulctkx = 0.0
; localB -> jcttjvetjz = 0.0 ; localB -> d2mdqno2vo = 0.0 ; localB ->
ma10qpk4dj = 0.0 ; localB -> pjtipmnpfw = 0.0 ; localB -> l5pep0bffa = 0.0 ;
localB -> fn3ba5lt4e = 0.0 ; localB -> lzmgv2co5r = 0.0 ; localB ->
p5q30h0u5a = 0.0 ; localB -> gdsiulctkx_mbvzarwird = 0.0 ; localB ->
jcttjvetjz_cl54gopm0x = 0.0 ; localB -> kfxg3mqgyd = 0.0 ; localB ->
lvr1v104vg = 0.0 ; localB -> hr0x1lh4l1 = 0.0 ; localB -> girozsp15z = 0.0 ;
localB -> d2mdqno2vo_kkiq3xxxve = 0.0 ; localB -> jg5qydeu3x = 0.0 ; localB
-> hvfwpqavv2 = 0.0 ; localB -> lou30zkwo0 = 0.0 ; localB -> b52a323250 = 0.0
; localB -> j0egur4mo5 = 0.0 ; localB -> k1auhcyuqp = 0.0 ; localB ->
oaik41k3ap = 0.0 ; localB -> oi4yhxx40u = 0.0 ; localB -> mvvx05o5ws = 0.0 ;
localB -> cj3ls05rsg = 0.0 ; localB -> leyajshupm = 0.0 ; localB ->
h0n0msqs3c = 0.0 ; localB -> eu3gbrsgbe = 0.0 ; localB -> gbzwq35xry = 0.0 ;
localB -> nbd5j4xid0 = 0.0 ; localB -> meoyafrqf0 = 0.0 ; } ( void ) memset (
( void * ) localDW , 0 , sizeof ( iwztahng0v ) ) ; localDW -> hrld4y0eco =
0.0 ; localDW -> dt0ehp3ejr = 0.0 ;
MotorController_Motor_InitializeDataMapInfo ( mrok2kfx0s , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( mrok2kfx0s -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
mrok2kfx0s -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( mrok2kfx0s -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } mrok2kfx0s -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) mrok2kfx0s -> NonContDerivMemory . mr_nonContSig0 ; mrok2kfx0s ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
mrok2kfx0s -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> jcttjvetjz ) ; ; mrok2kfx0s -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) mrok2kfx0s -> NonContDerivMemory . mr_nonContSig1 ; mrok2kfx0s ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
mrok2kfx0s -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> gdsiulctkx ) ; ; } void mr_MotorController_Motor_MdlInfoRegFcn ( SimStruct
* mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_MotorController_Motor , 45 ) ; * retVal = 1 ; } static void
mr_MotorController_Motor_cacheDataAsMxArray ( mxArray * destArray , mwIndex i
, int j , const void * srcData , size_t numBytes ) ; static void
mr_MotorController_Motor_cacheDataAsMxArray ( mxArray * destArray , mwIndex i
, int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_MotorController_Motor_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_MotorController_Motor_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_MotorController_Motor_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_MotorController_Motor_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_MotorController_Motor_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_MotorController_Motor_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_MotorController_Motor_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_MotorController_Motor_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_MotorController_Motor_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_MotorController_Motor_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_MotorController_Motor_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_MotorController_Motor_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_MotorController_Motor_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_MotorController_Motor_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_MotorController_Motor_GetDWork (
const g321l4fgcjv * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_MotorController_Motor_cacheDataAsMxArray (
ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; {
static const char * rtdwDataFieldNames [ 18 ] = { "mdlrefDW->rtdw.hrld4y0eco"
, "mdlrefDW->rtdw.dt0ehp3ejr" , "mdlrefDW->rtdw.b41cgz1ldw" ,
"mdlrefDW->rtdw.nhnhojbm0m" , "mdlrefDW->rtdw.nii2rfaw3f" ,
"mdlrefDW->rtdw.pailmcgxuc" , "mdlrefDW->rtdw.kfm0vxmfr1" ,
"mdlrefDW->rtdw.fzxpm0jdc3" , "mdlrefDW->rtdw.pi1314udbz" ,
"mdlrefDW->rtdw.hhlvyn4zum" , "mdlrefDW->rtdw.kg2tzjkbyc" ,
"mdlrefDW->rtdw.harls3m1h2" , "mdlrefDW->rtdw.hnnsk411ps" ,
"mdlrefDW->rtdw.akw2cmhtvj" , "mdlrefDW->rtdw.c15wjj1kln" ,
"mdlrefDW->rtdw.brecurpyqf" , "mdlrefDW->rtdw.gsmplkkuhp" ,
"mdlrefDW->rtdw.j2a1cbrlgy" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 18 , rtdwDataFieldNames ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW
-> rtdw . hrld4y0eco ) , sizeof ( mdlrefDW -> rtdw . hrld4y0eco ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW
-> rtdw . dt0ehp3ejr ) , sizeof ( mdlrefDW -> rtdw . dt0ehp3ejr ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW
-> rtdw . b41cgz1ldw ) , sizeof ( mdlrefDW -> rtdw . b41cgz1ldw ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW
-> rtdw . nhnhojbm0m ) , sizeof ( mdlrefDW -> rtdw . nhnhojbm0m ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW
-> rtdw . nii2rfaw3f ) , sizeof ( mdlrefDW -> rtdw . nii2rfaw3f ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW
-> rtdw . pailmcgxuc ) , sizeof ( mdlrefDW -> rtdw . pailmcgxuc ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW
-> rtdw . kfm0vxmfr1 ) , sizeof ( mdlrefDW -> rtdw . kfm0vxmfr1 ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW
-> rtdw . fzxpm0jdc3 ) , sizeof ( mdlrefDW -> rtdw . fzxpm0jdc3 ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW
-> rtdw . pi1314udbz ) , sizeof ( mdlrefDW -> rtdw . pi1314udbz ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW
-> rtdw . hhlvyn4zum ) , sizeof ( mdlrefDW -> rtdw . hhlvyn4zum ) ) ;
mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 10 , & (
mdlrefDW -> rtdw . kg2tzjkbyc ) , sizeof ( mdlrefDW -> rtdw . kg2tzjkbyc ) )
; mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 11 , & (
mdlrefDW -> rtdw . harls3m1h2 ) , sizeof ( mdlrefDW -> rtdw . harls3m1h2 ) )
; mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 12 , & (
mdlrefDW -> rtdw . hnnsk411ps ) , sizeof ( mdlrefDW -> rtdw . hnnsk411ps ) )
; mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 13 , & (
mdlrefDW -> rtdw . akw2cmhtvj ) , sizeof ( mdlrefDW -> rtdw . akw2cmhtvj ) )
; mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 14 , & (
mdlrefDW -> rtdw . c15wjj1kln ) , sizeof ( mdlrefDW -> rtdw . c15wjj1kln ) )
; mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 15 , & (
mdlrefDW -> rtdw . brecurpyqf ) , sizeof ( mdlrefDW -> rtdw . brecurpyqf ) )
; mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 16 , & (
mdlrefDW -> rtdw . gsmplkkuhp ) , sizeof ( mdlrefDW -> rtdw . gsmplkkuhp ) )
; mr_MotorController_Motor_cacheDataAsMxArray ( rtdwData , 0 , 17 , & (
mdlrefDW -> rtdw . j2a1cbrlgy ) , sizeof ( mdlrefDW -> rtdw . j2a1cbrlgy ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_MotorController_Motor_SetDWork ( g321l4fgcjv *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
hrld4y0eco ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . hrld4y0eco ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
dt0ehp3ejr ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . dt0ehp3ejr ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
b41cgz1ldw ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . b41cgz1ldw ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
nhnhojbm0m ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . nhnhojbm0m ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
nii2rfaw3f ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . nii2rfaw3f ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
pailmcgxuc ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . pailmcgxuc ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
kfm0vxmfr1 ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . kfm0vxmfr1 ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
fzxpm0jdc3 ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . fzxpm0jdc3 ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
pi1314udbz ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . pi1314udbz ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
hhlvyn4zum ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . hhlvyn4zum ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
kg2tzjkbyc ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . kg2tzjkbyc ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
harls3m1h2 ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . harls3m1h2 ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
hnnsk411ps ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . hnnsk411ps ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
akw2cmhtvj ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . akw2cmhtvj ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
c15wjj1kln ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . c15wjj1kln ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
brecurpyqf ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . brecurpyqf ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
gsmplkkuhp ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . gsmplkkuhp ) )
; mr_MotorController_Motor_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
j2a1cbrlgy ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . j2a1cbrlgy ) )
; } } void mr_MotorController_Motor_RegisterSimStateChecksum ( SimStruct * S
) { const uint32_T chksum [ 4 ] = { 794032105U , 3128463927U , 1227085318U ,
1234151252U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"MotorController_Motor" , & chksum [ 0 ] ) ; } mxArray *
mr_MotorController_Motor_GetSimStateDisallowedBlocks ( ) { return NULL ; }
