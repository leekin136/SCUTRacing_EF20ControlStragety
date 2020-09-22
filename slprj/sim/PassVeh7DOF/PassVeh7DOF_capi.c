#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PassVeh7DOF_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "PassVeh7DOF.h"
#include "PassVeh7DOF_capi.h"
#include "PassVeh7DOF_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 8 ,
TARGET_STRING (
"PassVeh7DOF/Subsystem/Vehicle Body 3DOF Dual Track/state/xdot int/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 1 , 0 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Velocity and Vertical Load/Dual/Dual Fz/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 12 , TARGET_STRING (
 "PassVeh7DOF/Subsystem/Vehicle Body 3DOF Dual Track/Signal Routing/Signal Routing Dual/state2bus/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 4 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 5 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 6 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake2/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 6 , 7 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake3/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeDataAddr ( void * dataAddr [ ] , bpefjqedzq
* localDW , hcqlainyez * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
n5tb00omor [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> l2hk3fgmlh [ 0
] ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> bmsz0qfwwr [ 0 ] ) ; dataAddr
[ 3 ] = ( void * ) ( & localX -> boq0sjomkz ) ; dataAddr [ 4 ] = ( void * ) (
& localX -> g4fxozrdb2 ) ; dataAddr [ 5 ] = ( void * ) ( & localX ->
i12d3wngfk ) ; dataAddr [ 6 ] = ( void * ) ( & localX -> betxkjviha ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_SCALAR , 4 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 4 , 1
, 2 , 1 , 1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 38 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ]
= { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 38 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 7 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3765247205U , 998721771U , 2588504555U ,
3738529029U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * PassVeh7DOF_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeSystemRan ( pa50wxsaaa * const hokadafud5 ,
sysRanDType * systemRan [ ] , bpefjqedzq * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( hokadafud5 ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( sysRanDType
* ) & localDW -> lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ;
systemRan [ 3 ] = ( sysRanDType * ) & localDW -> lf15r5ane43 [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ; systemRan [ 4 ] = ( sysRanDType * ) &
localDW -> lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ;
systemRan [ 5 ] = ( sysRanDType * ) & localDW -> lf15r5ane43 [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ; systemRan [ 6 ] = ( NULL ) ; systemRan
[ 7 ] = ( NULL ) ; systemRan [ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ;
systemRan [ 10 ] = ( sysRanDType * ) & localDW -> g2eyqylo5m [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ; systemRan [ 11 ] = ( sysRanDType * ) &
localDW -> g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ;
systemRan [ 12 ] = ( sysRanDType * ) & localDW -> g2eyqylo5m [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ; systemRan [ 13 ] = ( sysRanDType * ) &
localDW -> g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ;
systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( NULL ) ; systemRan [ 16 ]
= ( NULL ) ; systemRan [ 17 ] = ( NULL ) ; systemRan [ 18 ] = ( sysRanDType *
) & localDW -> d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ;
systemRan [ 19 ] = ( sysRanDType * ) & localDW -> d22xfw4kpx [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ; systemRan [ 20 ] = ( sysRanDType * ) &
localDW -> d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ;
systemRan [ 21 ] = ( sysRanDType * ) & localDW -> d22xfw4kpx [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ; systemRan [ 22 ] = ( NULL ) ;
systemRan [ 23 ] = ( NULL ) ; systemRan [ 24 ] = ( NULL ) ; systemRan [ 25 ]
= ( NULL ) ; systemRan [ 26 ] = ( sysRanDType * ) & localDW -> hzwxfzysvm [ 0
] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ; systemRan [ 27 ] = ( sysRanDType *
) & localDW -> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ;
systemRan [ 28 ] = ( sysRanDType * ) & localDW -> hzwxfzysvm [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ; systemRan [ 29 ] = ( sysRanDType * ) &
localDW -> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ;
systemRan [ 30 ] = ( NULL ) ; systemRan [ 31 ] = ( NULL ) ; systemRan [ 32 ]
= ( NULL ) ; systemRan [ 33 ] = ( NULL ) ; systemRan [ 34 ] = ( NULL ) ;
systemRan [ 35 ] = ( NULL ) ; systemRan [ 36 ] = ( NULL ) ; systemRan [ 37 ]
= ( NULL ) ; systemTid [ 1 ] = hokadafud5 -> Timing . mdlref_GlobalTID [ 0 ]
; systemTid [ 9 ] = hokadafud5 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid
[ 17 ] = hokadafud5 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 25 ] =
hokadafud5 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = hokadafud5
-> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 13 ] = hokadafud5 -> Timing
. mdlref_GlobalTID [ 1 ] ; systemTid [ 21 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 29 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 4 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 12 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 20 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 28 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 2 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 26 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 27 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 30 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 31 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 32 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 33 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 34 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 35 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 36 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 37 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [
5 ] = 5 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 10 ; rtContextSystems [ 11 ] = 11 ; rtContextSystems [ 12 ] = 12 ;
rtContextSystems [ 13 ] = 13 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems
[ 15 ] = 0 ; rtContextSystems [ 16 ] = 0 ; rtContextSystems [ 17 ] = 0 ;
rtContextSystems [ 18 ] = 18 ; rtContextSystems [ 19 ] = 19 ;
rtContextSystems [ 20 ] = 20 ; rtContextSystems [ 21 ] = 21 ;
rtContextSystems [ 22 ] = 0 ; rtContextSystems [ 23 ] = 0 ; rtContextSystems
[ 24 ] = 0 ; rtContextSystems [ 25 ] = 0 ; rtContextSystems [ 26 ] = 26 ;
rtContextSystems [ 27 ] = 27 ; rtContextSystems [ 28 ] = 28 ;
rtContextSystems [ 29 ] = 29 ; rtContextSystems [ 30 ] = 0 ; rtContextSystems
[ 31 ] = 0 ; rtContextSystems [ 32 ] = 0 ; rtContextSystems [ 33 ] = 0 ;
rtContextSystems [ 34 ] = 0 ; rtContextSystems [ 35 ] = 0 ; rtContextSystems
[ 36 ] = 0 ; rtContextSystems [ 37 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void PassVeh7DOF_InitializeDataMapInfo ( pa50wxsaaa * const hokadafud5 ,
bpefjqedzq * localDW , hcqlainyez * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( hokadafud5 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( hokadafud5 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( hokadafud5 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; PassVeh7DOF_InitializeDataAddr ( hokadafud5 ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
hokadafud5 -> DataMapInfo . mmi , hokadafud5 -> DataMapInfo . dataAddress ) ;
PassVeh7DOF_InitializeVarDimsAddr ( hokadafud5 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( hokadafud5 -> DataMapInfo .
mmi , hokadafud5 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
hokadafud5 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
hokadafud5 -> DataMapInfo . mmi , ( NULL ) ) ;
PassVeh7DOF_InitializeLoggingFunctions ( hokadafud5 -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( hokadafud5 -> DataMapInfo . mmi ,
hokadafud5 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
hokadafud5 -> DataMapInfo . mmi , & hokadafud5 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( hokadafud5 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( hokadafud5 -> DataMapInfo .
mmi , 0 ) ; PassVeh7DOF_InitializeSystemRan ( hokadafud5 , hokadafud5 ->
DataMapInfo . systemRan , localDW , hokadafud5 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( hokadafud5 -> DataMapInfo .
mmi , hokadafud5 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
hokadafud5 -> DataMapInfo . mmi , hokadafud5 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( hokadafud5 -> DataMapInfo . mmi , & hokadafud5 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void PassVeh7DOF_host_InitializeDataMapInfo ( PassVeh7DOF_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
