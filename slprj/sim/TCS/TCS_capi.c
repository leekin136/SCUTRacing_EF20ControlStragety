#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "TCS_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "TCS.h"
#include "TCS_capi.h"
#include "TCS_private.h"
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
TARGET_STRING ( "TCS/PID Controller1/Filter/Cont. Filter/Filter" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 1 , 0 , TARGET_STRING (
"TCS/PID Controller1/Integrator/Continuous/Integrator" ) , TARGET_STRING ( ""
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 , (
NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void TCS_InitializeDataAddr ( void * dataAddr [ ] , gphq3cdevz *
localDW , f4qcna5pxy * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
hswdlnu12f ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> iipoma01tg ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void TCS_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void TCS_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs [ ]
) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 5 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 5 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3182943473U , 347321887U , 483539605U ,
3274945574U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * TCS_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void TCS_InitializeSystemRan ( kx3majpgnk * const aj3kfn0tsm ,
sysRanDType * systemRan [ ] , gphq3cdevz * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( aj3kfn0tsm ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemTid [ 1 ] =
aj3kfn0tsm -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = aj3kfn0tsm
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = aj3kfn0tsm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = aj3kfn0tsm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void TCS_InitializeDataMapInfo ( kx3majpgnk * const aj3kfn0tsm , gphq3cdevz *
localDW , f4qcna5pxy * localX , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( aj3kfn0tsm -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( aj3kfn0tsm -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( aj3kfn0tsm -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; TCS_InitializeDataAddr ( aj3kfn0tsm -> DataMapInfo .
dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap ( aj3kfn0tsm ->
DataMapInfo . mmi , aj3kfn0tsm -> DataMapInfo . dataAddress ) ;
TCS_InitializeVarDimsAddr ( aj3kfn0tsm -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetVarDimsAddressMap ( aj3kfn0tsm -> DataMapInfo . mmi , aj3kfn0tsm
-> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( aj3kfn0tsm ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( aj3kfn0tsm ->
DataMapInfo . mmi , ( NULL ) ) ; TCS_InitializeLoggingFunctions ( aj3kfn0tsm
-> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( aj3kfn0tsm ->
DataMapInfo . mmi , aj3kfn0tsm -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( aj3kfn0tsm -> DataMapInfo . mmi , &
aj3kfn0tsm -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
aj3kfn0tsm -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
aj3kfn0tsm -> DataMapInfo . mmi , 0 ) ; TCS_InitializeSystemRan ( aj3kfn0tsm
, aj3kfn0tsm -> DataMapInfo . systemRan , localDW , aj3kfn0tsm -> DataMapInfo
. systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( aj3kfn0tsm ->
DataMapInfo . mmi , aj3kfn0tsm -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( aj3kfn0tsm -> DataMapInfo . mmi , aj3kfn0tsm ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( aj3kfn0tsm ->
DataMapInfo . mmi , & aj3kfn0tsm -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void TCS_host_InitializeDataMapInfo ( TCS_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
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
