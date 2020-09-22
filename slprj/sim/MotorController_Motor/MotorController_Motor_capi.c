#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "MotorController_Motor_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "MotorController_Motor.h"
#include "MotorController_Motor_capi.h"
#include "MotorController_Motor_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 1 ,
TARGET_STRING (
 "MotorController_Motor/Interior PMSM SS Spd/PMSM Speed Input Continuous/PMSM Speed Input Core/Mechanical and Angle/Int1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 1 , - 1 , TARGET_STRING (
 "MotorController_Motor/Interior PM Controller SS Trq/Interior PMSM Torque Control Drive CE/Current Controller/DQ Current Control and Decouple/Integrator/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 2
, - 1 , TARGET_STRING (
 "MotorController_Motor/Interior PM Controller SS Trq/Interior PMSM Torque Control Drive CE/Current Controller/DQ Current Control and Decouple/Integrator1/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 3
, 0 , TARGET_STRING (
 "MotorController_Motor/Interior PMSM SS Spd/PMSM Speed Input Continuous/PMSM Speed Input Core/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 2 , TARGET_STRING (
 "MotorController_Motor/Interior PMSM SS Spd/PMSM Speed Input Continuous/PMSM Speed Input Core/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage1/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void MotorController_Motor_InitializeDataAddr ( void * dataAddr [ ] ,
iwztahng0v * localDW , dmv3yeuq34 * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> i4svxgppca ) ; dataAddr [ 1 ] = ( void * ) ( & localDW ->
hrld4y0eco ) ; dataAddr [ 2 ] = ( void * ) ( & localDW -> dt0ehp3ejr ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> pvuwel0xoa ) ; dataAddr [ 4 ] = (
void * ) ( & localX -> d2tcw0vor0 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotorController_Motor_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotorController_Motor_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3
] = ( NULL ) ; loggingPtrs [ 4 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 5.0E-5 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 ,
0 } } ; static int_T rtContextSystems [ 13 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 13 ,
rtContextSystems , loggingMetaInfo , 0 , NULL , { 0 , NULL , NULL } , 0 , (
NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 5 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1362793236U , 4084335552U , 2008504185U , 1617225112U } , &
mmiStaticInfoLogging , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
MotorController_Motor_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void MotorController_Motor_InitializeSystemRan ( cg1a0054vq * const
mrok2kfx0s , sysRanDType * systemRan [ ] , iwztahng0v * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
mrok2kfx0s ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW ->
j2a1cbrlgy ; systemRan [ 2 ] = ( sysRanDType * ) & localDW -> gsmplkkuhp ;
systemRan [ 3 ] = ( sysRanDType * ) & localDW -> hnnsk411ps ; systemRan [ 4 ]
= ( sysRanDType * ) & localDW -> akw2cmhtvj ; systemRan [ 5 ] = ( sysRanDType
* ) & localDW -> c15wjj1kln ; systemRan [ 6 ] = ( sysRanDType * ) & localDW
-> pi1314udbz ; systemRan [ 7 ] = ( NULL ) ; systemRan [ 8 ] = ( NULL ) ;
systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( NULL ) ; systemRan [ 11 ] =
( NULL ) ; systemRan [ 12 ] = ( NULL ) ; systemTid [ 1 ] = mrok2kfx0s ->
Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 2 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 5 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 4 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 3 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 6 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 7 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 8 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 9 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 10 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 11 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 12 ] = mrok2kfx0s -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [
5 ] = 5 ; rtContextSystems [ 6 ] = 6 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void MotorController_Motor_InitializeDataMapInfo ( cg1a0054vq * const
mrok2kfx0s , iwztahng0v * localDW , dmv3yeuq34 * localX , void * sysRanPtr ,
int contextTid ) { rtwCAPI_SetVersion ( mrok2kfx0s -> DataMapInfo . mmi , 1 )
; rtwCAPI_SetStaticMap ( mrok2kfx0s -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( mrok2kfx0s -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; MotorController_Motor_InitializeDataAddr (
mrok2kfx0s -> DataMapInfo . dataAddress , localDW , localX ) ;
rtwCAPI_SetDataAddressMap ( mrok2kfx0s -> DataMapInfo . mmi , mrok2kfx0s ->
DataMapInfo . dataAddress ) ; MotorController_Motor_InitializeVarDimsAddr (
mrok2kfx0s -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap (
mrok2kfx0s -> DataMapInfo . mmi , mrok2kfx0s -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetPath ( mrok2kfx0s -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetFullPath ( mrok2kfx0s -> DataMapInfo . mmi , ( NULL ) ) ;
MotorController_Motor_InitializeLoggingFunctions ( mrok2kfx0s -> DataMapInfo
. loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( mrok2kfx0s -> DataMapInfo . mmi ,
mrok2kfx0s -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
mrok2kfx0s -> DataMapInfo . mmi , & mrok2kfx0s -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( mrok2kfx0s -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( mrok2kfx0s -> DataMapInfo .
mmi , 0 ) ; MotorController_Motor_InitializeSystemRan ( mrok2kfx0s ,
mrok2kfx0s -> DataMapInfo . systemRan , localDW , mrok2kfx0s -> DataMapInfo .
systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( mrok2kfx0s ->
DataMapInfo . mmi , mrok2kfx0s -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( mrok2kfx0s -> DataMapInfo . mmi , mrok2kfx0s ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( mrok2kfx0s ->
DataMapInfo . mmi , & mrok2kfx0s -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void MotorController_Motor_host_InitializeDataMapInfo (
MotorController_Motor_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
