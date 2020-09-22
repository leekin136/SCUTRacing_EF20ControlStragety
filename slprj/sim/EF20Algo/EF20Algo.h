#ifndef RTW_HEADER_EF20Algo_h_
#define RTW_HEADER_EF20Algo_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef EF20Algo_COMMON_INCLUDES_
#define EF20Algo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "EF20Algo_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T j2lzo3xpfu ; real_T oa45yxqgqz ; real_T obvvg50txj ;
real_T n4bxk4nh2t ; real_T m2u1bb503v ; real_T o3yoflwjys ; real_T h1o0cuuobl
; real_T jyfl5pthrn ; real_T lbhjhrcomc ; real_T gf50terurj ; real_T
ojpcunngey ; real_T n4bxk4nh2t_mbvzarwird ; real_T mgqns4zp14 ; boolean_T
lbnnh4hq31 ; boolean_T iavnojyf0h ; boolean_T pcehat2zsh ; } ilycrqp54b ;
typedef struct { int_T mrzsgdsaso ; int_T nrquthaejf ; int_T jco2y5fccn ;
int_T dh1f11y51h ; int_T m2jcxr0bz3 ; int8_T ol4mdh13u3 ; int8_T hepypnl4n1 ;
int8_T jirxzen3lj ; int8_T ndmy12lknt ; boolean_T mcufrqb1af ; boolean_T
g0nofjcuqs ; boolean_T kmfjva2spk ; boolean_T lpw1z20xhn ; } m4roozarqt ;
typedef struct { real_T c3bqnycv0b ; real_T bbqjdtuec0 ; real_T ab1wykfl2n ;
real_T dwodg0sfus ; } prjrkaduyw ; typedef struct { real_T c3bqnycv0b ;
real_T bbqjdtuec0 ; real_T ab1wykfl2n ; real_T dwodg0sfus ; } kwlj3kmpqi ;
typedef struct { boolean_T c3bqnycv0b ; boolean_T bbqjdtuec0 ; boolean_T
ab1wykfl2n ; boolean_T dwodg0sfus ; } oruwjz03rj ; typedef struct { real_T
c3bqnycv0b ; real_T bbqjdtuec0 ; real_T ab1wykfl2n ; real_T dwodg0sfus ; }
fw5a3zdxqu ; typedef struct { real_T c3bqnycv0b ; real_T bbqjdtuec0 ; real_T
ab1wykfl2n ; real_T dwodg0sfus ; } kpsh3bar5e ; typedef struct { real_T
c3bqnycv0b ; real_T bbqjdtuec0 ; real_T ab1wykfl2n ; real_T dwodg0sfus ; }
mqdgnrqqdo ; typedef struct { real_T d54aqbqtxx ; real_T mitrpvooa2 ; real_T
kpybumlsce ; real_T bwbm0eckuf ; real_T eztvdso0su ; real_T g03pzjktwg ;
real_T ejkm3oxjix ; real_T cvozgrtuxi ; real_T li105os023 ; real_T d0iyyrjuhv
; real_T egyhd1np0k ; real_T n4n24eyq3k ; real_T dpfltufoqq ; real_T
k2cuvpu4np ; real_T exebpkcili ; } afbdbwras0 ; struct fp2ueknauji_ { real_T
P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T
P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ;
real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T
P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ;
real_T P_23 [ 7 ] ; real_T P_24 [ 7 ] ; real_T P_25 ; real_T P_26 ; real_T
P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 [ 51 ] ; real_T
P_32 [ 51 ] ; real_T P_33 [ 51 ] ; real_T P_34 [ 51 ] ; real_T P_35 [ 51 ] ;
real_T P_36 [ 51 ] ; real_T P_37 ; real_T P_38 ; real_T P_39 [ 7 ] ; real_T
P_40 [ 7 ] ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T
P_45 [ 11 ] ; real_T P_46 [ 11 ] ; real_T P_47 [ 7 ] ; real_T P_48 [ 7 ] ;
real_T P_49 [ 7 ] ; real_T P_50 [ 7 ] ; real_T P_51 [ 11 ] ; real_T P_52 ;
real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T
P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; uint8_T P_62 ; uint8_T P_63
[ 11 ] ; } ; struct d553jg20cw { struct SimStruct_tag * _mdlRefSfcnS ; struct
{ boolean_T mr_nonContSig0 [ 1 ] ; boolean_T mr_nonContSig1 [ 1 ] ; }
NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 2 ] ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
4 ] ; int32_T * vardimsAddress [ 4 ] ; RTWLoggingFcnPtr loggingPtrs [ 4 ] ;
sysRanDType * systemRan [ 10 ] ; int_T systemTid [ 10 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef struct {
ilycrqp54b rtb ; m4roozarqt rtdw ; p1sowantt3 rtm ; } dlx312diuhz ; extern
void m43mefuhjs ( SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports
* * mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , p1sowantt3 * const cngvpirc42 , ilycrqp54b * localB ,
m4roozarqt * localDW , prjrkaduyw * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_EF20Algo_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_EF20Algo_GetDWork ( const dlx312diuhz
* mdlrefDW ) ; extern void mr_EF20Algo_SetDWork ( dlx312diuhz * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_EF20Algo_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_EF20Algo_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * EF20Algo_GetCAPIStaticMap (
void ) ; extern void pjmlk5fbyb ( real_T * mkm35othll , real_T * lhbg5ho01n ,
real_T * crayd2v5n4 , prjrkaduyw * localX ) ; extern void p0mld3mkzl (
m4roozarqt * localDW ) ; extern void kwkh23fdkb ( ilycrqp54b * localB ,
m4roozarqt * localDW , kwlj3kmpqi * localXdot ) ; extern void pp0xtfasks (
const real_T * m5gtm4vcbv , const real_T * aduu0dhcyx , ilycrqp54b * localB ,
m4roozarqt * localDW , afbdbwras0 * localZCSV ) ; extern void pwp1kxll41 (
p1sowantt3 * const cngvpirc42 , m4roozarqt * localDW , oruwjz03rj * localXdis
) ; extern void a4you45rjf ( p1sowantt3 * const cngvpirc42 ) ; extern void
a4you45rjfTID2 ( void ) ; extern void EF20Algo ( p1sowantt3 * const
cngvpirc42 , const real_T * m5gtm4vcbv , const real_T * aduu0dhcyx , const
real_T * j31xiaxm1w , const real_T * guat43bbvw , const real_T * ka4f5sotyq ,
const real_T * p51cjq5af1 , const real_T * puhcrvviqe , const uint8_T *
jxczhyyh0s , const real_T * ly1yujtwf4 , const real_T * bu51or0ctk , real_T *
mkm35othll , real_T * lhbg5ho01n , real_T * crayd2v5n4 , ilycrqp54b * localB
, m4roozarqt * localDW , prjrkaduyw * localX , oruwjz03rj * localXdis ) ;
extern void EF20AlgoTID2 ( ilycrqp54b * localB ) ; extern void pw3glfj5hp (
p1sowantt3 * const cngvpirc42 ) ;
#endif
