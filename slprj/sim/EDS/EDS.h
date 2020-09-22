#ifndef RTW_HEADER_EDS_h_
#define RTW_HEADER_EDS_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef EDS_COMMON_INCLUDES_
#define EDS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "EDS_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T lmyp1aewby ; real_T my0xwnkptn ; real_T fq2g1ugbhz ;
real_T i2vdugbpjb ; real_T bshay5ehls ; real_T bqed15abp0 ; real_T bd0zb3ys15
; real_T g20nmlaxoe ; real_T or13zggi0k ; boolean_T ipowze40pn ; boolean_T
mja4p4jknh ; } popjryh50k ; typedef struct { int_T bevosgzild ; int_T
ky40cmm5f0 ; int_T l30hwl0lao ; boolean_T lr3p3pygkx ; boolean_T o5y3gmwq4p ;
boolean_T icrn5ggw3p ; } pkakqulqic ; typedef struct { real_T n40l1s5pzs ;
real_T fhsu0lzfk3 ; } d2xhivalt0 ; typedef struct { real_T n40l1s5pzs ;
real_T fhsu0lzfk3 ; } dhrgpckkpj ; typedef struct { boolean_T n40l1s5pzs ;
boolean_T fhsu0lzfk3 ; } hyzkh2onxy ; typedef struct { real_T n40l1s5pzs ;
real_T fhsu0lzfk3 ; } o0jxbwk4a0 ; typedef struct { real_T n40l1s5pzs ;
real_T fhsu0lzfk3 ; } k23wehn3sn ; typedef struct { real_T n40l1s5pzs ;
real_T fhsu0lzfk3 ; } eyogzjqonj ; typedef struct { real_T lkvbrj5ddg ;
real_T cei4zw4hgs ; real_T ctwc2nukat ; real_T gg5jtftlom ; real_T gtmsona4ih
; real_T hff0qoo0mn ; real_T ar4ivwgcds ; real_T nkqpbvusxy ; real_T
hfv0zi0wmv ; } ptuovjkhs1 ; struct cuuwyo5gw5k_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; real_T P_14 [ 6 ] ; real_T P_15 [ 6 ] ; real_T P_16 ; real_T P_17 ;
real_T P_18 ; real_T P_19 ; real_T P_20 ; } ; struct n0rkb0iqnq { struct
SimStruct_tag * _mdlRefSfcnS ; struct { boolean_T mr_nonContSig0 [ 1 ] ;
boolean_T mr_nonContSig1 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 2 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 2 ] ; int32_T * vardimsAddress [ 2
] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ; sysRanDType * systemRan [ 3 ] ;
int_T systemTid [ 3 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; } Timing ; } ; typedef struct { popjryh50k rtb ; pkakqulqic rtdw ;
hr11lwjv3k rtm ; } dglgh01jbp1 ; extern void aggg415ceg ( SimStruct *
_mdlRefSfcnS , ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray ,
int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , hr11lwjv3k *
const ghzvm04goy , popjryh50k * localB , pkakqulqic * localDW , d2xhivalt0 *
localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_EDS_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray * mr_EDS_GetDWork (
const dglgh01jbp1 * mdlrefDW ) ; extern void mr_EDS_SetDWork ( dglgh01jbp1 *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_EDS_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_EDS_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * EDS_GetCAPIStaticMap ( void ) ; extern void
gbapffbdit ( d2xhivalt0 * localX ) ; extern void fq1cqbwtjw ( d2xhivalt0 *
localX ) ; extern void ehqaws4onp ( popjryh50k * localB , dhrgpckkpj *
localXdot ) ; extern void grhiuxld4g ( popjryh50k * localB , ptuovjkhs1 *
localZCSV ) ; extern void mswf3wfk1p ( hr11lwjv3k * const ghzvm04goy ) ;
extern void mswf3wfk1pTID2 ( void ) ; extern void EDS ( hr11lwjv3k * const
ghzvm04goy , const real_T cgspcqr3fx [ 2 ] , const real_T * a3ip2cjjw3 ,
const real_T * b3yxex4e3k , const real_T * eja4hbvwxl , const real_T *
c4qmkncvhf , const real_T * lzjqm4axef , real_T * l3sd4k1oi3 , real_T *
ibcaxrtnq4 , real_T * nqzcqciqa4 , popjryh50k * localB , pkakqulqic * localDW
, d2xhivalt0 * localX ) ; extern void EDSTID2 ( popjryh50k * localB ) ;
extern void pcpwp5chy2 ( hr11lwjv3k * const ghzvm04goy ) ;
#endif
