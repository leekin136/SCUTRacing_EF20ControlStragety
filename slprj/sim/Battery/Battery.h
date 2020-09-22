#ifndef RTW_HEADER_Battery_h_
#define RTW_HEADER_Battery_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Battery_COMMON_INCLUDES_
#define Battery_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Battery_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T e0uqsjjr0m ; real_T gwarahsmii ; } mxa5nxzhui ;
typedef struct { int_T ckmx3n4kbu ; int_T it5axmqqq4 ; } ankhidv45b ; typedef
struct { real_T go0agd4tfz ; } j3n0eqmhaj ; typedef struct { real_T
go0agd4tfz ; } mz35a1uyii ; typedef struct { boolean_T go0agd4tfz ; }
ntyx1uyjgn ; typedef struct { real_T go0agd4tfz ; } fu1nu122kr ; typedef
struct { real_T go0agd4tfz ; } l2rftjgad3 ; typedef struct { real_T
go0agd4tfz ; } euu1zuks3c ; typedef struct { real_T mxylke051o ; real_T
esq110ztnv ; real_T fodnp0gtlq ; } iuxmppif4p ; struct hxvmolygkiq_ { real_T
P_0 ; real_T P_1 ; real_T P_2 [ 7 ] ; real_T P_3 [ 101 ] ; real_T P_4 [ 6 ] ;
real_T P_5 [ 101 ] ; real_T P_6 ; real_T P_7 ; real_T P_8 [ 42 ] ; real_T P_9
; real_T P_10 ; uint32_T P_11 [ 2 ] ; } ; struct b3i5rxtu5a { struct
SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { mxa5nxzhui rtb ; ankhidv45b rtdw ;
gqf2hjzsn4 rtm ; } mqcwxtbf1sa ; extern void phfmva5rcp ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , gqf2hjzsn4 * const
ftggyn125j , mxa5nxzhui * localB , ankhidv45b * localDW , j3n0eqmhaj * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Battery_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Battery_GetDWork ( const
mqcwxtbf1sa * mdlrefDW ) ; extern void mr_Battery_SetDWork ( mqcwxtbf1sa *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Battery_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Battery_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Battery_GetCAPIStaticMap ( void ) ; extern
void nhq0bqkl0c ( gqf2hjzsn4 * const ftggyn125j , ankhidv45b * localDW ,
j3n0eqmhaj * localX ) ; extern void evvdm5z5t3 ( gqf2hjzsn4 * const
ftggyn125j , ankhidv45b * localDW , j3n0eqmhaj * localX ) ; extern void
l3gwj3hfc2 ( mxa5nxzhui * localB , ankhidv45b * localDW , ntyx1uyjgn *
localXdis , mz35a1uyii * localXdot ) ; extern void jsn10h40qx ( mxa5nxzhui *
localB , ankhidv45b * localDW , j3n0eqmhaj * localX , iuxmppif4p * localZCSV
) ; extern void m5b5cwxqxz ( gqf2hjzsn4 * const ftggyn125j , mxa5nxzhui *
localB , ankhidv45b * localDW , j3n0eqmhaj * localX ) ; extern void
m5b5cwxqxzTID1 ( void ) ; extern void Battery ( gqf2hjzsn4 * const ftggyn125j
, const real_T * nmwxb1wgoz , const real_T * jpztsvuo3w , real_T * mzbq3lwscm
, real_T * hlhc4bk2af , mxa5nxzhui * localB , ankhidv45b * localDW ,
j3n0eqmhaj * localX ) ; extern void BatteryTID1 ( mxa5nxzhui * localB ) ;
extern void ej4hd4hlfw ( gqf2hjzsn4 * const ftggyn125j ) ;
#endif
