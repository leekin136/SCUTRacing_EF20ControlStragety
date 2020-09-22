#ifndef RTW_HEADER_MotorController_Motor_h_
#define RTW_HEADER_MotorController_Motor_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef MotorController_Motor_COMMON_INCLUDES_
#define MotorController_Motor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "MotorController_Motor_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T gdsiulctkx ; real_T jcttjvetjz ; real_T d2mdqno2vo ;
real_T ma10qpk4dj ; real_T pjtipmnpfw ; real_T l5pep0bffa ; real_T fn3ba5lt4e
; real_T lzmgv2co5r ; real_T p5q30h0u5a ; real_T gdsiulctkx_mbvzarwird ;
real_T jcttjvetjz_cl54gopm0x ; real_T kfxg3mqgyd ; real_T lvr1v104vg ; real_T
hr0x1lh4l1 ; real_T girozsp15z ; real_T d2mdqno2vo_kkiq3xxxve ; real_T
jg5qydeu3x ; real_T hvfwpqavv2 ; real_T lou30zkwo0 ; real_T b52a323250 ;
real_T j0egur4mo5 ; real_T k1auhcyuqp ; real_T oaik41k3ap ; real_T oi4yhxx40u
; real_T mvvx05o5ws ; real_T cj3ls05rsg ; real_T leyajshupm ; real_T
h0n0msqs3c ; real_T eu3gbrsgbe ; real_T gbzwq35xry ; real_T nbd5j4xid0 ;
real_T meoyafrqf0 ; } aqhhluydqz ; typedef struct { real_T hrld4y0eco ;
real_T dt0ehp3ejr ; int_T b41cgz1ldw ; int_T nhnhojbm0m ; int_T nii2rfaw3f ;
int_T pailmcgxuc ; int8_T kfm0vxmfr1 ; int8_T fzxpm0jdc3 ; int8_T pi1314udbz
; int8_T hhlvyn4zum ; int8_T kg2tzjkbyc ; int8_T harls3m1h2 ; int8_T
hnnsk411ps ; int8_T akw2cmhtvj ; int8_T c15wjj1kln ; int8_T brecurpyqf ;
int8_T gsmplkkuhp ; int8_T j2a1cbrlgy ; } iwztahng0v ; typedef struct {
real_T pvuwel0xoa ; real_T i4svxgppca ; real_T d2tcw0vor0 ; } dmv3yeuq34 ;
typedef int_T ggf4no41aw [ 1 ] ; typedef real_T pdsz0xbxfw [ 2 ] ; typedef
struct { real_T pvuwel0xoa ; real_T i4svxgppca ; real_T d2tcw0vor0 ; }
az44w3s1m5 ; typedef struct { boolean_T pvuwel0xoa ; boolean_T i4svxgppca ;
boolean_T d2tcw0vor0 ; } b0j5lrjxmi ; typedef struct { real_T pvuwel0xoa ;
real_T i4svxgppca ; real_T d2tcw0vor0 ; } i0354kg0a4 ; typedef struct {
real_T pvuwel0xoa ; real_T i4svxgppca ; real_T d2tcw0vor0 ; } ns5z3yjcts ;
typedef struct { real_T pvuwel0xoa ; real_T i4svxgppca ; real_T d2tcw0vor0 ;
} nltybd0j0i ; typedef struct { real_T ednht3jxvm ; real_T nz33gtrlns ;
real_T oj2vkqwsoj ; real_T hw5daffbqi ; real_T b0uuz1gdq4 ; real_T b4krjmssiy
; } dpabllznuo ; struct byk2u51fqjk_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T
P_8 ; real_T P_9 [ 10 ] ; real_T P_10 ; real_T P_11 [ 10 ] ; real_T P_12 [ 2
] ; real_T P_13 [ 3 ] ; real_T P_14 [ 10 ] ; real_T P_15 ; real_T P_16 ;
real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T
P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ;
real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T
P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ;
real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ;
real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T
P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ;
real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T
P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ;
real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T
P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ;
real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; } ; struct cjrusihnb0
{ struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ]
; real_T mr_nonContSig1 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 2 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 5 ] ; int32_T * vardimsAddress [ 5
] ; RTWLoggingFcnPtr loggingPtrs [ 5 ] ; sysRanDType * systemRan [ 13 ] ;
int_T systemTid [ 13 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3
] ; } Timing ; } ; typedef struct { aqhhluydqz rtb ; iwztahng0v rtdw ;
cg1a0054vq rtm ; } g321l4fgcjv ; extern void fsqmqoeryg ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
cg1a0054vq * const mrok2kfx0s , aqhhluydqz * localB , iwztahng0v * localDW ,
dmv3yeuq34 * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_MotorController_Motor_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_MotorController_Motor_GetDWork ( const g321l4fgcjv * mdlrefDW ) ; extern
void mr_MotorController_Motor_SetDWork ( g321l4fgcjv * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_MotorController_Motor_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_MotorController_Motor_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * MotorController_Motor_GetCAPIStaticMap
( void ) ; extern void ogs3v1zv4a ( cg1a0054vq * const mrok2kfx0s ,
aqhhluydqz * localB , iwztahng0v * localDW , dmv3yeuq34 * localX ) ; extern
void m3vrwg1rl1 ( cg1a0054vq * const mrok2kfx0s , iwztahng0v * localDW ,
dmv3yeuq34 * localX ) ; extern void canocfvrcu ( iwztahng0v * localDW ) ;
extern void ecix5wfoq0 ( const real_T * fyh2ehge0f , aqhhluydqz * localB ,
iwztahng0v * localDW , b0j5lrjxmi * localXdis , az44w3s1m5 * localXdot ) ;
extern void kwv3rukthn ( aqhhluydqz * localB , iwztahng0v * localDW ,
dmv3yeuq34 * localX , dpabllznuo * localZCSV ) ; extern void cbtrgbhqib (
cg1a0054vq * const mrok2kfx0s , iwztahng0v * localDW ) ; extern void
hvnefhchlk ( cg1a0054vq * const mrok2kfx0s , aqhhluydqz * localB , iwztahng0v
* localDW , dmv3yeuq34 * localX ) ; extern void hvnefhchlkTID2 ( void ) ;
extern void MotorController_Motor ( cg1a0054vq * const mrok2kfx0s , const
real_T * p5rqxxpa5q , const real_T * fyh2ehge0f , const real_T * aro020ao2x ,
real_T * lwcz2log02 , real_T * d1egkhmlvn , real_T * gkhfk4apxp , aqhhluydqz
* localB , iwztahng0v * localDW , dmv3yeuq34 * localX ) ; extern void
MotorController_MotorTID2 ( cg1a0054vq * const mrok2kfx0s , aqhhluydqz *
localB , iwztahng0v * localDW ) ; extern void gurjr1qgs3 ( cg1a0054vq * const
mrok2kfx0s ) ;
#endif
