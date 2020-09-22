#ifndef RTW_HEADER_Driveline_h_
#define RTW_HEADER_Driveline_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Driveline_COMMON_INCLUDES_
#define Driveline_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Driveline_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T erhr5ibplw ; real_T fpyhjocody ; real_T pv2pdca3cw ;
real_T atolypax4g ; real_T pr243imisr ; real_T g3zn1p1xrt ; real_T agrlsta4kh
; real_T avjk1k5bgn ; real_T nf5rhsxepc ; real_T aprxtsl3n2 ; real_T
msmuvulz41 ; real_T oo112mvwjv ; real_T m1kb1e3n1l ; real_T f5vpukdlmu ;
real_T gq150gczzl ; real_T hytjgrpw1p ; real_T gimdcylxoy ; } fxrjyezkwn ;
typedef struct { real_T aydhqotte1 ; real_T pepn3ieo20 ; real_T b4e5r1pw0m ;
int_T pcp4p3iilg ; int_T bjea3qlbxx ; } bsz3qtxrxd ; typedef struct { real_T
bxlhhwrhea ; real_T h0siwojyr3 ; real_T p5c5mh3nvx ; real_T gzkkdjj2xk ;
real_T fnqqpp431b ; real_T lmmb1wsihs ; } oakdhkzk5b ; typedef struct {
real_T bxlhhwrhea ; real_T h0siwojyr3 ; real_T p5c5mh3nvx ; real_T gzkkdjj2xk
; real_T fnqqpp431b ; real_T lmmb1wsihs ; } bjbjifrsrv ; typedef struct {
boolean_T bxlhhwrhea ; boolean_T h0siwojyr3 ; boolean_T p5c5mh3nvx ;
boolean_T gzkkdjj2xk ; boolean_T fnqqpp431b ; boolean_T lmmb1wsihs ; }
l1pljxktrl ; typedef struct { real_T bxlhhwrhea ; real_T h0siwojyr3 ; real_T
p5c5mh3nvx ; real_T gzkkdjj2xk ; real_T fnqqpp431b ; real_T lmmb1wsihs ; }
grfcawoazk ; typedef struct { real_T bxlhhwrhea ; real_T h0siwojyr3 ; real_T
p5c5mh3nvx ; real_T gzkkdjj2xk ; real_T fnqqpp431b ; real_T lmmb1wsihs ; }
bhoei0xoot ; typedef struct { real_T bxlhhwrhea ; real_T h0siwojyr3 ; real_T
p5c5mh3nvx ; real_T gzkkdjj2xk ; real_T fnqqpp431b ; real_T lmmb1wsihs ; }
ewin1y1mwc ; typedef struct { real_T ld14ejozat ; real_T albm2srozv ; }
jn1etpvcka ; typedef struct { ZCSigState dfzt0qw2wu ; ZCSigState k32bbhajcz ;
} gvxaj4x0qw ; struct gimbih1di0h_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ;
real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T
P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ;
real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T
P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ;
real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; } ; struct coyvih0rk1
{ struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ]
; real_T mr_nonContSig1 [ 1 ] ; real_T mr_nonContSig2 [ 1 ] ; real_T
mr_nonContSig3 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 4 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 6 ] ; int32_T * vardimsAddress [ 6
] ; RTWLoggingFcnPtr loggingPtrs [ 6 ] ; sysRanDType * systemRan [ 3 ] ;
int_T systemTid [ 3 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { fxrjyezkwn rtb ; bsz3qtxrxd rtdw ;
dwsgrvz41y rtm ; gvxaj4x0qw rtzce ; } n5qm5cab0up ; extern void jnccjczqwr (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , dwsgrvz41y
* const pubqvcmed4 , fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b
* localX , gvxaj4x0qw * localZCE , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Driveline_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_Driveline_GetDWork ( const n5qm5cab0up
* mdlrefDW ) ; extern void mr_Driveline_SetDWork ( n5qm5cab0up * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_Driveline_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_Driveline_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * Driveline_GetCAPIStaticMap
( void ) ; extern void djkfokdtse ( dwsgrvz41y * const pubqvcmed4 ,
bsz3qtxrxd * localDW , oakdhkzk5b * localX ) ; extern void aj1apekess (
dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd * localDW , oakdhkzk5b * localX )
; extern void igx4apxpta ( fxrjyezkwn * localB ) ; extern void bpgqz3xzpl (
const real_T * mwonwqqv5l , const real_T * nh5gs0cpaf , const real_T
pmpfb1utv4 [ 4 ] , fxrjyezkwn * localB , bjbjifrsrv * localXdot ) ; extern
void cyzpp4e52p ( dwsgrvz41y * const pubqvcmed4 , fxrjyezkwn * localB ,
bsz3qtxrxd * localDW ) ; extern void Driveline ( dwsgrvz41y * const
pubqvcmed4 , const real_T * j45cp5ppdn , const real_T caebyi2sab [ 4 ] ,
real_T iioyllnquu [ 4 ] , real_T jp4z35ch12 [ 4 ] , real_T bumnd4n3ix [ 4 ] ,
fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw
* localZCE ) ; extern void btsnzboicn ( dwsgrvz41y * const pubqvcmed4 ) ;
#endif
