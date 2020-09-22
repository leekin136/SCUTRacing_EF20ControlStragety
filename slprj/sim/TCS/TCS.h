#ifndef RTW_HEADER_TCS_h_
#define RTW_HEADER_TCS_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef TCS_COMMON_INCLUDES_
#define TCS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "TCS_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T crpjkus541 ; real_T a2qfmn15xy ; real_T f10qpsxqvk ;
real_T k4xnuom4iu ; } fnnb3w1van ; typedef struct { int_T oawg33e3lm ; int_T
pwwfbpw12u ; boolean_T dml1ap1ilm ; boolean_T fhzgmnoube ; } gphq3cdevz ;
typedef struct { real_T iipoma01tg ; real_T hswdlnu12f ; } f4qcna5pxy ;
typedef struct { real_T iipoma01tg ; real_T hswdlnu12f ; } pk43t0fmge ;
typedef struct { boolean_T iipoma01tg ; boolean_T hswdlnu12f ; } hrhtbvpmyn ;
typedef struct { real_T iipoma01tg ; real_T hswdlnu12f ; } oi5uhkevjv ;
typedef struct { real_T iipoma01tg ; real_T hswdlnu12f ; } gca1rltppg ;
typedef struct { real_T iipoma01tg ; real_T hswdlnu12f ; } c2tbpo33ov ;
typedef struct { real_T pspdxdsuto ; real_T itaybahrqq ; real_T byc1cgxden ;
real_T igtyx5cjo3 ; real_T dtdhlkspht ; real_T mr1vithslv ; } juuhue00j5 ;
struct k2oeqtnrlv3_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 [
51 ] ; real_T P_10 [ 51 ] ; real_T P_11 [ 51 ] ; real_T P_12 [ 51 ] ; real_T
P_13 [ 51 ] ; real_T P_14 [ 51 ] ; real_T P_15 ; real_T P_16 ; real_T P_17 ;
real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 [ 6 ] ; real_T P_22 [ 6
] ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; } ; struct
eiil22cm0j { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 2 ] ; int32_T * vardimsAddress [ 2
] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ; sysRanDType * systemRan [ 5 ] ;
int_T systemTid [ 5 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { fnnb3w1van rtb ; gphq3cdevz rtdw ;
kx3majpgnk rtm ; } ivfewk2aavd ; extern void cjd4seot4o ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , kx3majpgnk * const
aj3kfn0tsm , fnnb3w1van * localB , gphq3cdevz * localDW , f4qcna5pxy * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_TCS_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_TCS_GetDWork ( const
ivfewk2aavd * mdlrefDW ) ; extern void mr_TCS_SetDWork ( ivfewk2aavd *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_TCS_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_TCS_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * TCS_GetCAPIStaticMap ( void ) ; extern void
aea2zwsupp ( f4qcna5pxy * localX ) ; extern void ju3zgqvbra ( f4qcna5pxy *
localX ) ; extern void l53f12csi1 ( fnnb3w1van * localB , pk43t0fmge *
localXdot ) ; extern void kvod0t0030 ( const real_T * pvvxcnqrdt , const
real_T * bt4e0fmjpm , fnnb3w1van * localB , juuhue00j5 * localZCSV ) ; extern
void dseiro2eqdTID1 ( void ) ; extern void TCS ( kx3majpgnk * const
aj3kfn0tsm , const real_T * bvpzwdr1ml , const real_T * gnptrsbbgv , const
real_T * iiyqaopsdd , const real_T * bptz454g4t , const real_T * emyq25yeii ,
const real_T * n432h4d50u , const real_T * pvvxcnqrdt , const real_T *
bt4e0fmjpm , real_T * kxyklxgg1g , real_T * c0jqeysko1 , real_T * fsq102djca
, fnnb3w1van * localB , gphq3cdevz * localDW , f4qcna5pxy * localX ) ; extern
void TCSTID1 ( void ) ; extern void ig1otzaqul ( kx3majpgnk * const
aj3kfn0tsm ) ;
#endif
