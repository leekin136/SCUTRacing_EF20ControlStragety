#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EDS_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "EDS.h"
#include "EDS_capi.h"
#include "EDS_private.h"
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
TARGET_STRING ( "EDS/EDN/PID Controller/Filter/Cont. Filter/Filter" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 1 , 0 , TARGET_STRING (
"EDS/EDN/PID Controller/Integrator/Continuous/Integrator" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 ,
( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void EDS_InitializeDataAddr ( void * dataAddr [ ] , pkakqulqic *
localDW , d2xhivalt0 * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
fhsu0lzfk3 ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> n40l1s5pzs ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void EDS_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void EDS_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs [ ]
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
rtContextSystems [ 3 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 3 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3627876515U , 2933353897U , 1826905169U ,
2992736972U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * EDS_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void EDS_InitializeSystemRan ( hr11lwjv3k * const ghzvm04goy ,
sysRanDType * systemRan [ ] , pkakqulqic * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( ghzvm04goy ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemTid [ 1 ] = ghzvm04goy -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = ghzvm04goy -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void EDS_InitializeDataMapInfo ( hr11lwjv3k * const ghzvm04goy , pkakqulqic *
localDW , d2xhivalt0 * localX , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( ghzvm04goy -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ghzvm04goy -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ghzvm04goy -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; EDS_InitializeDataAddr ( ghzvm04goy -> DataMapInfo .
dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap ( ghzvm04goy ->
DataMapInfo . mmi , ghzvm04goy -> DataMapInfo . dataAddress ) ;
EDS_InitializeVarDimsAddr ( ghzvm04goy -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetVarDimsAddressMap ( ghzvm04goy -> DataMapInfo . mmi , ghzvm04goy
-> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( ghzvm04goy ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( ghzvm04goy ->
DataMapInfo . mmi , ( NULL ) ) ; EDS_InitializeLoggingFunctions ( ghzvm04goy
-> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( ghzvm04goy ->
DataMapInfo . mmi , ghzvm04goy -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( ghzvm04goy -> DataMapInfo . mmi , &
ghzvm04goy -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
ghzvm04goy -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
ghzvm04goy -> DataMapInfo . mmi , 0 ) ; EDS_InitializeSystemRan ( ghzvm04goy
, ghzvm04goy -> DataMapInfo . systemRan , localDW , ghzvm04goy -> DataMapInfo
. systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( ghzvm04goy ->
DataMapInfo . mmi , ghzvm04goy -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( ghzvm04goy -> DataMapInfo . mmi , ghzvm04goy ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( ghzvm04goy ->
DataMapInfo . mmi , & ghzvm04goy -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EDS_host_InitializeDataMapInfo ( EDS_host_DataMapInfo_T * dataMap ,
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
