#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EF20Algo_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "EF20Algo.h"
#include "EF20Algo_capi.h"
#include "EF20Algo_private.h"
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
TARGET_STRING ( "EF20Algo/TCS/PID Controller1/Filter/Cont. Filter/Filter" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 1 , 0 , TARGET_STRING (
"EF20Algo/TCS/PID Controller1/Integrator/Continuous/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 2 , 3 , TARGET_STRING (
"EF20Algo/EDS/EDN/PID Controller/Filter/Cont. Filter/Filter" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 3 , 2 , TARGET_STRING (
"EF20Algo/EDS/EDN/PID Controller/Integrator/Continuous/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1
, 0 } } ;
#ifndef HOST_CAPI_BUILD
static void EF20Algo_InitializeDataAddr ( void * dataAddr [ ] , m4roozarqt *
localDW , prjrkaduyw * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
bbqjdtuec0 ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> c3bqnycv0b ) ;
dataAddr [ 2 ] = ( void * ) ( & localX -> dwodg0sfus ) ; dataAddr [ 3 ] = (
void * ) ( & localX -> ab1wykfl2n ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void EF20Algo_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void EF20Algo_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; }
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
rtContextSystems [ 10 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ]
= { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 10 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 4 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 488084635U , 3147530287U , 290713304U ,
223131158U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * EF20Algo_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void EF20Algo_InitializeSystemRan ( p1sowantt3 * const cngvpirc42 ,
sysRanDType * systemRan [ ] , m4roozarqt * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( cngvpirc42 ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( sysRanDType
* ) & localDW -> hepypnl4n1 ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] =
( sysRanDType * ) & localDW -> ndmy12lknt ; systemRan [ 5 ] = ( NULL ) ;
systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan [ 8 ] = (
sysRanDType * ) & localDW -> jirxzen3lj ; systemRan [ 9 ] = ( NULL ) ;
systemTid [ 5 ] = cngvpirc42 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
3 ] = cngvpirc42 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] =
cngvpirc42 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = cngvpirc42
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = cngvpirc42 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = cngvpirc42 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 1 ] = cngvpirc42 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = cngvpirc42 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = cngvpirc42 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 2 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 4 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 8 ; rtContextSystems [ 7 ] = 8 ;
rtContextSystems [ 8 ] = 8 ; rtContextSystems [ 9 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void EF20Algo_InitializeDataMapInfo ( p1sowantt3 * const cngvpirc42 ,
m4roozarqt * localDW , prjrkaduyw * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( cngvpirc42 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( cngvpirc42 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( cngvpirc42 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; EF20Algo_InitializeDataAddr ( cngvpirc42 ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
cngvpirc42 -> DataMapInfo . mmi , cngvpirc42 -> DataMapInfo . dataAddress ) ;
EF20Algo_InitializeVarDimsAddr ( cngvpirc42 -> DataMapInfo . vardimsAddress )
; rtwCAPI_SetVarDimsAddressMap ( cngvpirc42 -> DataMapInfo . mmi , cngvpirc42
-> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( cngvpirc42 ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( cngvpirc42 ->
DataMapInfo . mmi , ( NULL ) ) ; EF20Algo_InitializeLoggingFunctions (
cngvpirc42 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
cngvpirc42 -> DataMapInfo . mmi , cngvpirc42 -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( cngvpirc42 -> DataMapInfo . mmi , &
cngvpirc42 -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
cngvpirc42 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
cngvpirc42 -> DataMapInfo . mmi , 0 ) ; EF20Algo_InitializeSystemRan (
cngvpirc42 , cngvpirc42 -> DataMapInfo . systemRan , localDW , cngvpirc42 ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
cngvpirc42 -> DataMapInfo . mmi , cngvpirc42 -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( cngvpirc42 -> DataMapInfo . mmi , cngvpirc42 ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( cngvpirc42 ->
DataMapInfo . mmi , & cngvpirc42 -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EF20Algo_host_InitializeDataMapInfo ( EF20Algo_host_DataMapInfo_T *
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
