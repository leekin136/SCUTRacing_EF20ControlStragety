#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Driveline_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Driveline.h"
#include "Driveline_capi.h"
#include "Driveline_private.h"
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
 "Driveline/Trainsmission/Driveshaft Compliance L/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 1 , 3 , TARGET_STRING (
 "Driveline/Trainsmission/Driveshaft Compliance R/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 4 , TARGET_STRING (
 "Driveline/Trainsmission/Rotational Inertia L/Rotational Inertia/Rotational Inertia External Input/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 5 , TARGET_STRING (
 "Driveline/Trainsmission/Rotational Inertia R/Rotational Inertia/Rotational Inertia External Input/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 0 , TARGET_STRING (
 "Driveline/Trainsmission/Driveshaft Compliance L/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 2 , TARGET_STRING (
 "Driveline/Trainsmission/Driveshaft Compliance R/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void Driveline_InitializeDataAddr ( void * dataAddr [ ] , bsz3qtxrxd *
localDW , oakdhkzk5b * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
h0siwojyr3 ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> gzkkdjj2xk ) ;
dataAddr [ 2 ] = ( void * ) ( & localX -> fnqqpp431b ) ; dataAddr [ 3 ] = (
void * ) ( & localX -> lmmb1wsihs ) ; dataAddr [ 4 ] = ( void * ) ( & localX
-> bxlhhwrhea ) ; dataAddr [ 5 ] = ( void * ) ( & localX -> p5c5mh3nvx ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Driveline_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Driveline_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; }
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
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 6 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1633995722U , 3557642055U , 1074210623U ,
1922439196U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * Driveline_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Driveline_InitializeSystemRan ( dwsgrvz41y * const pubqvcmed4 ,
sysRanDType * systemRan [ ] , bsz3qtxrxd * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( pubqvcmed4 ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemTid [ 1 ] = pubqvcmed4 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = pubqvcmed4 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Driveline_InitializeDataMapInfo ( dwsgrvz41y * const pubqvcmed4 ,
bsz3qtxrxd * localDW , oakdhkzk5b * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( pubqvcmed4 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( pubqvcmed4 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( pubqvcmed4 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Driveline_InitializeDataAddr ( pubqvcmed4 ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
pubqvcmed4 -> DataMapInfo . mmi , pubqvcmed4 -> DataMapInfo . dataAddress ) ;
Driveline_InitializeVarDimsAddr ( pubqvcmed4 -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( pubqvcmed4 -> DataMapInfo . mmi ,
pubqvcmed4 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( pubqvcmed4
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( pubqvcmed4 ->
DataMapInfo . mmi , ( NULL ) ) ; Driveline_InitializeLoggingFunctions (
pubqvcmed4 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
pubqvcmed4 -> DataMapInfo . mmi , pubqvcmed4 -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( pubqvcmed4 -> DataMapInfo . mmi , &
pubqvcmed4 -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
pubqvcmed4 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
pubqvcmed4 -> DataMapInfo . mmi , 0 ) ; Driveline_InitializeSystemRan (
pubqvcmed4 , pubqvcmed4 -> DataMapInfo . systemRan , localDW , pubqvcmed4 ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
pubqvcmed4 -> DataMapInfo . mmi , pubqvcmed4 -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( pubqvcmed4 -> DataMapInfo . mmi , pubqvcmed4 ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( pubqvcmed4 ->
DataMapInfo . mmi , & pubqvcmed4 -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Driveline_host_InitializeDataMapInfo ( Driveline_host_DataMapInfo_T *
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
