#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Battery_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Battery.h"
#include "Battery_capi.h"
#include "Battery_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING (
 "Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator\nLimited"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void Battery_InitializeDataAddr ( void * dataAddr [ ] , ankhidv45b *
localDW , j3n0eqmhaj * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
go0agd4tfz ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Battery_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Battery_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs
[ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
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
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2898609306U , 3280598845U , 2729075709U ,
322322102U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * Battery_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Battery_InitializeSystemRan ( gqf2hjzsn4 * const ftggyn125j ,
sysRanDType * systemRan [ ] , ankhidv45b * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( ftggyn125j ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = ftggyn125j ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Battery_InitializeDataMapInfo ( gqf2hjzsn4 * const ftggyn125j ,
ankhidv45b * localDW , j3n0eqmhaj * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( ftggyn125j -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ftggyn125j -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ftggyn125j -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Battery_InitializeDataAddr ( ftggyn125j ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
ftggyn125j -> DataMapInfo . mmi , ftggyn125j -> DataMapInfo . dataAddress ) ;
Battery_InitializeVarDimsAddr ( ftggyn125j -> DataMapInfo . vardimsAddress )
; rtwCAPI_SetVarDimsAddressMap ( ftggyn125j -> DataMapInfo . mmi , ftggyn125j
-> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( ftggyn125j ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( ftggyn125j ->
DataMapInfo . mmi , ( NULL ) ) ; Battery_InitializeLoggingFunctions (
ftggyn125j -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
ftggyn125j -> DataMapInfo . mmi , ftggyn125j -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( ftggyn125j -> DataMapInfo . mmi , &
ftggyn125j -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
ftggyn125j -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
ftggyn125j -> DataMapInfo . mmi , 0 ) ; Battery_InitializeSystemRan (
ftggyn125j , ftggyn125j -> DataMapInfo . systemRan , localDW , ftggyn125j ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
ftggyn125j -> DataMapInfo . mmi , ftggyn125j -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( ftggyn125j -> DataMapInfo . mmi , ftggyn125j ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( ftggyn125j ->
DataMapInfo . mmi , & ftggyn125j -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Battery_host_InitializeDataMapInfo ( Battery_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
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
