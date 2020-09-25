#include "__cf_flightControlSystem.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME flightControlSystem_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "flightControlSystem_types.h"
#include "flightControlSystem.h"
#include "flightControlSystem_private.h"
struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors = { { 1.00596 , 1.00383 , 0.99454 }
, { 0.99861 , 1.00644 , 0.99997 } , { { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0
} , 190.0 , 0.707 , { 1.00596 , 0.0 , 0.0 , 0.0 , 1.00383 , 0.0 , 0.0 , 0.0 ,
0.99454 } , { 0.09 , - 0.06 , 0.33699999999999974 } , { - 50.0 , - 50.0 , -
50.0 , 50.0 , 50.0 , 50.0 } , 190.0 , 0.707 , { 0.99861 , 0.0 , 0.0 , 0.0 ,
1.00644 , 0.0 , 0.0 , 0.0 , 0.99997 } , { - 0.0095 , - 0.0075 , 0.0015 } , {
0.0 , 0.0 , 0.0 } , { - 10.0 , - 10.0 , - 10.0 , 10.0 , 10.0 , 10.0 } , {
41.0 , 41.0 , 41.0 , 41.0 , 41.0 , 41.0 } , { 0.8 , 0.8 , 0.8 , 0.025 , 0.025
, 0.025 } , { 0.00021831529882618725 , 0.00018641345254680647 ,
0.00037251068300213613 , 1.0651514622688397e-8 , 1.3021327403798377e-8 ,
1.1929474437781302e-8 } } , { 1.0 , 41.0 } , - 99.0 , - 9.0 , { { - 99.0 ,
0.0 , 0.0 , - 9.0 } , 0.0 , { 3.5 , 70.0 } } , 1.0 , 1.225 , 12.01725 ,
101270.95 , { 0.99407531114557246 , 0.99618461293246863 , 1.0054899752649467
, 1.0013919347893572 , 0.99360120821906917 , 1.0000300009000269 } , 0.44 ,
1.0 } ; const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ;
} const char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; }
void * rt_GetOSigstreamManager ( void ) { return NULL ; } void *
rt_slioCatalogue ( void ) { return NULL ; } void * rtwGetPointerFromUniquePtr
( void * uniquePtr ) { return NULL ; } void * CreateDiagnosticAsVoidPtr (
const char * id , int nargs , ... ) { void * voidPtrDiagnostic = NULL ;
va_list args ; va_start ( args , nargs ) ; slmrCreateDiagnostic ( id , nargs
, args , & voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ;
} void rt_ssSet_slErrMsg ( SimStruct * S , void * diag ) { if ( !
_ssIsErrorStatusAslErrMsg ( S ) ) { _ssSet_slErrMsg ( S , diag ) ; } else {
_ssDiscardDiagnostic ( S , diag ) ; } } void rt_ssReportDiagnosticAsWarning (
SimStruct * S , void * diag ) { _ssReportDiagnosticAsWarning ( S , diag ) ; }
const char * rt_CreateFullPathToTop ( const char * toppath , const char *
subpath ) { char * fullpath = NULL ; slmrCreateFullPathToTop ( toppath ,
subpath , & fullpath ) ; return fullpath ; } boolean_T
slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) {
struct_8SSZ93PxvPkADZcA4gG8MD * GlobalPrm_0 = ( struct_8SSZ93PxvPkADZcA4gG8MD
* ) NULL ; if ( ! ssGetModelRefGlobalParamData ( S , 0 , ( void * * ) ( &
GlobalPrm_0 ) ) ) return ; if ( GlobalPrm_0 != NULL ) { ( void ) memcpy ( & (
rtP_Sensors ) , GlobalPrm_0 , sizeof ( struct_8SSZ93PxvPkADZcA4gG8MD ) ) ; }
}
#endif
static void mdlInitializeConditions ( SimStruct * S ) { uint8_T * o_o_B_35_2
= ( uint8_T * ) ssGetOutputPortSignal ( S , 1 ) ; ha1ipjbq54 ( o_o_B_35_2 ) ;
} static void mdlReset ( SimStruct * S ) { gwlyno50ln ( ) ; } static void
mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { const CommandBus *
i_lvnv2nqgkq = ( CommandBus * ) ssGetInputPortSignal ( S , 0 ) ; const
SensorsBus * i_kbv1jfsawh = ( SensorsBus * ) ssGetInputPortSignal ( S , 1 ) ;
real32_T * o_B_35_1 = ( real32_T * ) ssGetOutputPortSignal ( S , 0 ) ;
uint8_T * o_o_B_35_2 = ( uint8_T * ) ssGetOutputPortSignal ( S , 1 ) ; if (
tid == 0 ) { flightControlSystemTID0 ( i_lvnv2nqgkq , i_kbv1jfsawh , o_B_35_1
, o_o_B_35_2 ) ; pyvd4pdf3iTID0 ( ) ; } if ( tid == 1 ) {
flightControlSystemTID1 ( ) ; pyvd4pdf3iTID1 ( ) ; } } static void
mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo -> genericFcn != (
NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetSymbolicDimsSupport ( S , true ) ;
slmrInitializeIOPortDataVectors ( S , 3 , 2 ) ; if ( ! ssSetNumInputPorts ( S
, 3 ) ) return ; if ( ! ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg ; ssRegisterTypeFromNamedObject ( S , "CommandBus" ,
& dataTypeIdReg ) ; if ( dataTypeIdReg == INVALID_DTYPE_ID ) return ;
ssSetInputPortDataType ( S , 0 , dataTypeIdReg ) ; }
#endif
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.005 ) ;
ssSetInputPortOffsetTime ( S , 0 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg ; ssRegisterTypeFromNamedObject ( S , "SensorsBus" ,
& dataTypeIdReg ) ; if ( dataTypeIdReg == INVALID_DTYPE_ID ) return ;
ssSetInputPortDataType ( S , 1 , dataTypeIdReg ) ; }
#endif
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.005 ) ;
ssSetInputPortOffsetTime ( S , 1 , 0.0 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 2 , 4 , 9600 ) ) return ;
ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_UINT8 ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.2 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 2 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.005 ) ; ssSetOutputPortOffsetTime ( S
, 0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_UINT8 ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.005 ) ; ssSetOutputPortOffsetTime ( S
, 1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 1 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_flightControlSystem_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes (
S , 3 ) ; ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0
) ; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0
) ; { int_T zcsIdx = 0 ; } ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:ImplicitIterSS_SigObjExpStorageClassNotSupportedInside\" pr=\"d\"><arguments><arg type=\"numeric\">1</arg><arg type=\"encoded\">ZgBsAGkAZwBoAHQAQwBvAG4AdAByAG8AbABTAHkAcwB0AGUAbQAvAEEAQwAgAGMAbQBkAAAA</arg><arg type=\"encoded\">YwBtAGQAAAA=</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments><hs><h>AAAAIAD8rED+</h></hs></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_flightControlSystem_MdlInfoRegFcn ( S , "flightControlSystem" , & retVal )
; if ( ! retVal ) return ; }
#endif
ssSetNumDWork ( S , 0 ) ; slmrRegisterSystemInitializeMethod ( S ,
mdlInitializeConditions ) ; slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.0" ) ; ssSetNeedAbsoluteTime ( S ,
1 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
ssSetSampleTime ( S , 0 , 0.005 ) ; ssSetOffsetTime ( S , 0 , 0 ) ;
ssSetSampleTime ( S , 1 , 0.2 ) ; ssSetOffsetTime ( S , 1 , 0 ) ;
ssSetSampleTime ( S , 2 , mxGetInf ( ) ) ; ssSetOffsetTime ( S , 2 , 0 ) ;
return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { void * sysRanPtr = (
NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ;
ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid
= 0 ; } f4qzdbbxmw ( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 2 , true ) , sysRanPtr , sysTid , (
NULL ) , ( NULL ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( lhjbdsj2rj
. rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) )
{ _GenericFcn fcn = S -> mdlInfo -> genericFcn ; } dw0zngvhyq ( ) ; }
#define MDL_START
static void mdlStart ( SimStruct * S ) { mdlProcessParameters ( S ) ;
k3yxem35zg ( ) ; }
#define RTW_GENERATED_DISABLE
static void mdlDisable ( SimStruct * S ) { bog0frvixl ( ) ; return ; } static
void mdlOutputs ( SimStruct * S , int_T tid ) { const CommandBus *
i_lvnv2nqgkq = ( CommandBus * ) ssGetInputPortSignal ( S , 0 ) ; const
SensorsBus * i_kbv1jfsawh = ( SensorsBus * ) ssGetInputPortSignal ( S , 1 ) ;
real32_T * o_B_35_1 = ( real32_T * ) ssGetOutputPortSignal ( S , 0 ) ;
uint8_T * o_o_B_35_2 = ( uint8_T * ) ssGetOutputPortSignal ( S , 1 ) ; if (
tid == PARAMETER_TUNING_TID ) { flightControlSystemTID2 ( ) ; } if ( tid !=
CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { if ( ssIsSampleHit ( S , 0 ,
tid ) ) { flightControlSystemTID0 ( i_lvnv2nqgkq , i_kbv1jfsawh , o_B_35_1 ,
o_o_B_35_2 ) ; } if ( ssIsSampleHit ( S , 1 , tid ) ) {
flightControlSystemTID1 ( ) ; } } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { if ( ssIsSampleHit ( S
, 0 , tid ) ) { pyvd4pdf3iTID0 ( ) ; } if ( ssIsSampleHit ( S , 1 , tid ) ) {
pyvd4pdf3iTID1 ( ) ; } return ; } static void mdlTerminate ( SimStruct * S )
{ o2f5l50guo ( ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { m0l5se3ogg ( ) ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
simStateFieldNames ) ; { const real_T * localX = ( const real_T * )
ssGetContStates ( S ) ; const int_T numStates = ssGetNumContStates ( S ) ;
const size_t numBytes = numStates * sizeof ( real_T ) ; mxArray * storedX =
mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T *
rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] ,
localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } {
mxArray * mdlrefDW = mr_flightControlSystem_GetDWork ( ) ; mxSetFieldByNumber
( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber (
ss , 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 ,
mxCreateDoubleScalar ( ( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber (
ss , 0 , 4 , mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ;
return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { { real_T
* localX = ( real_T * ) ssGetContStates ( S ) ; const int_T numStates =
ssGetNumContStates ( S ) ; const size_t numBytes = numStates * sizeof (
real_T ) ; const mxArray * storedX = mxGetFieldByNumber ( ss , 0 , 0 ) ;
const UINT8_T * rawData = ( const UINT8_T * ) mxGetData ( storedX ) ; memcpy
( localX , & rawData [ 0 ] , numBytes ) ; } mr_flightControlSystem_SetDWork (
mxGetFieldByNumber ( ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar
( mxGetFieldByNumber ( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T )
mxGetScalar ( mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
