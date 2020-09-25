#include "__cf_flightControlSystem.h"
#ifndef RTW_HEADER_flightControlSystem_types_h_
#define RTW_HEADER_flightControlSystem_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_CommandBus_
#define DEFINED_TYPEDEF_FOR_CommandBus_
typedef struct { boolean_T controlModePosVSOrient ; uint8_T sl_padding0 [ 3 ]
; real32_T pos_ref [ 3 ] ; boolean_T takeoff_flag ; uint8_T sl_padding1 [ 3 ]
; real32_T orient_ref [ 3 ] ; uint32_T live_time_ticks ; uint8_T sl_padding2
[ 4 ] ; } CommandBus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_extraSensorData_t_
#define DEFINED_TYPEDEF_FOR_extraSensorData_t_
typedef struct { real32_T opticalFlow_data [ 3 ] ; real32_T posVIS_data [ 4 ]
; real32_T usePosVIS_flag ; } extraSensorData_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_acc_SI_t_
#define DEFINED_TYPEDEF_FOR_HAL_acc_SI_t_
typedef struct { real32_T x ; real32_T y ; real32_T z ; real32_T temperature
; } HAL_acc_SI_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_gyro_SI_t_
#define DEFINED_TYPEDEF_FOR_HAL_gyro_SI_t_
typedef struct { real32_T x ; real32_T y ; real32_T z ; real32_T temperature
; int32_T temperature_lsb ; uint8_T sl_padding0 [ 4 ] ; } HAL_gyro_SI_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_fifo_gyro_SI_t_
#define DEFINED_TYPEDEF_FOR_HAL_fifo_gyro_SI_t_
typedef struct { real32_T x ; real32_T y ; real32_T z ; uint8_T sl_padding0 [
4 ] ; } HAL_fifo_gyro_SI_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_magn_mG_t_
#define DEFINED_TYPEDEF_FOR_HAL_magn_mG_t_
typedef struct { real32_T x ; real32_T y ; real32_T z ; uint8_T sl_padding0 [
4 ] ; } HAL_magn_mG_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_pressure_SI_t_
#define DEFINED_TYPEDEF_FOR_HAL_pressure_SI_t_
typedef struct { real_T temperature ; real32_T pressure ; uint8_T sl_padding0
[ 4 ] ; } HAL_pressure_SI_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_echo_t_
#define DEFINED_TYPEDEF_FOR_HAL_echo_t_
typedef struct { uint16_T begin_echo_index ; uint16_T end_echo_index ;
int16_T max_value_index ; uint8_T sl_padding0 [ 2 ] ; int32_T max_value ;
uint16_T precedent ; int16_T d_echo ; uint16_T pre_max_index ; uint8_T
sl_padding1 [ 6 ] ; } HAL_echo_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_list_echo_t_
#define DEFINED_TYPEDEF_FOR_HAL_list_echo_t_
typedef struct { HAL_echo_t tab_echo [ 30 ] ; uint8_T number_of_echoes ;
uint8_T sl_padding0 [ 7 ] ; } HAL_list_echo_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_ultrasound_SI_t_
#define DEFINED_TYPEDEF_FOR_HAL_ultrasound_SI_t_
typedef struct { real32_T altitude ; real32_T raw_altitude ; uint16_T nb_echo
; uint8_T sl_padding0 [ 2 ] ; int32_T measure_ref ; int32_T measure_status ;
uint8_T new_data ; uint8_T sl_padding1 [ 3 ] ; HAL_list_echo_t HAL_list_echo
; HAL_list_echo_t HAL_list_echo_p ; } HAL_ultrasound_SI_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_vbat_SI_t_
#define DEFINED_TYPEDEF_FOR_HAL_vbat_SI_t_
typedef struct { real32_T vbat_V ; uint32_T vbat_percentage ; } HAL_vbat_SI_t
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_HAL_acquisition_t_
#define DEFINED_TYPEDEF_FOR_HAL_acquisition_t_
typedef struct { int32_T number_HAL_read_call ; uint32_T timestamp ; uint16_T
status ; uint8_T used ; uint8_T count_user ; uint8_T sl_padding0 [ 4 ] ;
HAL_acc_SI_t HAL_acc_SI ; HAL_gyro_SI_t HAL_gyro_SI ; uint16_T HAL_fifo_count
; uint8_T sl_padding1 [ 2 ] ; uint32_T fifo_timestamp ; HAL_fifo_gyro_SI_t
HAL_fifo_gyro_SI_TempCorr [ 5 ] ; HAL_fifo_gyro_SI_t
HAL_fifo_acce_SI_TempCorr [ 5 ] ; HAL_fifo_gyro_SI_t HAL_fifo_gyro_SI [ 5 ] ;
HAL_fifo_gyro_SI_t HAL_fifo_acce_SI [ 5 ] ; real32_T HAL_ref_IMU_temp ;
uint8_T HAL_fifo_fsync [ 5 ] ; uint8_T sl_padding2 [ 3 ] ; int32_T
HAL_fifo_size ; HAL_magn_mG_t HAL_magn_mG ; HAL_pressure_SI_t HAL_pressure_SI
; HAL_ultrasound_SI_t HAL_ultrasound_SI ; uint8_T padding [ 196 ] ; uint8_T
sl_padding3 [ 4 ] ; HAL_vbat_SI_t HAL_vbat_SI ; } HAL_acquisition_t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SensorsBus_
#define DEFINED_TYPEDEF_FOR_SensorsBus_
typedef struct { extraSensorData_t VisionSensors ; HAL_acquisition_t
HALSensors ; real32_T SensorCalibration [ 8 ] ; } SensorsBus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_eAf0NJvzCY9HYTXF7bLNgB_
#define DEFINED_TYPEDEF_FOR_struct_eAf0NJvzCY9HYTXF7bLNgB_
typedef struct { real_T Ts2Q [ 16 ] ; real_T Q2Ts [ 16 ] ; real_T takeoffGain
; real_T totalThrustMaxRelative ; real_T motorsThrustPerMotorMax ; }
struct_eAf0NJvzCY9HYTXF7bLNgB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_
#define DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_
typedef struct { real_T initGreenwich ; real_T quatGain ; }
struct_XRMsui9C07VjBvdq1msujB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_
#define DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_
typedef struct { real_T xAxis ; } struct_hxsmtt0xTZOLDNa2Rz7GAF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_
#define DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_
typedef struct { real_T href ; struct_hxsmtt0xTZOLDNa2Rz7GAF FlatEarthToLLA ;
} struct_IZWOW0zYvpphl7qLgSfN7E ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_
#define DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_
typedef struct { real_T mass ; real_T inertia [ 9 ] ; real_T d ; real_T xy ;
real_T h ; real_T Cdx ; real_T Cdy ; real_T diameter ; }
struct_q6UUpnZ4gTjFvULFx6Rxa ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_
#define DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_
typedef struct { real_T blades ; real_T radius ; real_T chord ; real_T
flappingOffset ; real_T bladeMass ; real_T bladeInertia ; real_T hubMass ;
real_T hubInertia ; real_T inertia ; real_T Ct ; real_T Cq ; real_T solidity
; real_T theta0 ; real_T thetaTip ; real_T theta1 ; real_T theta34 ; real_T a
; real_T area ; real_T lock ; real_T b ; real_T k ; real_T w2ToThrustGain ; }
struct_OMRgDnJcZuQneKEj9vdTyD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_
#define DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_
typedef struct { real_T maxLimit ; real_T minLimit ; real_T commandToW2Gain ;
real_T thrustToMotorCommand ; } struct_p3FXZIgqtjF2uqDpmYjb6C ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_
#define DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_
typedef struct { struct_XRMsui9C07VjBvdq1msujB SixDOF ;
struct_IZWOW0zYvpphl7qLgSfN7E PositionOnEarth ; struct_q6UUpnZ4gTjFvULFx6Rxa
Airframe ; struct_OMRgDnJcZuQneKEj9vdTyD Rotor ;
struct_p3FXZIgqtjF2uqDpmYjb6C Motor ; } struct_OSJpyIZcrpXqReVWwh9iuG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_hE1099BMemg5OfzqcWAA6G_
#define DEFINED_TYPEDEF_FOR_struct_hE1099BMemg5OfzqcWAA6G_
typedef struct { real_T date [ 6 ] ; real_T posLLA [ 3 ] ; real_T posNED [ 3
] ; real_T vb [ 3 ] ; real_T euler [ 3 ] ; real_T angRates [ 3 ] ; }
struct_hE1099BMemg5OfzqcWAA6G ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_X1tFsdWsY5fUn8DhZV5x2G_
#define DEFINED_TYPEDEF_FOR_struct_X1tFsdWsY5fUn8DhZV5x2G_
typedef struct { real_T A [ 4 ] ; real_T B [ 2 ] ; real_T C [ 2 ] ; real_T D
; real_T Ns ; real_T Nu ; real_T Ny ; real_T Ts ; real_T X0 [ 2 ] ; real_T P0
[ 4 ] ; real_T L [ 2 ] ; real_T Nw ; real_T G [ 2 ] ; real_T H ; real_T Q ;
real_T R ; real_T N ; real_T Qbar [ 4 ] ; real_T Rbar ; real_T Nbar [ 2 ] ;
real_T M [ 2 ] ; real_T Z [ 4 ] ; } struct_X1tFsdWsY5fUn8DhZV5x2G ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_eF5OUT33sX0T9pzS8027m_
#define DEFINED_TYPEDEF_FOR_struct_eF5OUT33sX0T9pzS8027m_
typedef struct { real_T cg [ 3 ] ; real_T location [ 3 ] ; real_T accNatFreq
; real_T accDamping ; real_T accScaleCross [ 9 ] ; real_T accBias [ 3 ] ;
real_T accLimits [ 6 ] ; real_T gyroNatFreq ; real_T gyroDamping ; real_T
gyroScaleCross [ 9 ] ; real_T gyroBias [ 3 ] ; real_T gyroGBias [ 3 ] ;
real_T gyroLimits [ 6 ] ; real_T noiseSeeds [ 6 ] ; real_T noiseWeights [ 6 ]
; real_T noisePower [ 6 ] ; } struct_eF5OUT33sX0T9pzS8027m ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_FIfaVnupBjYAxo1EdNiDlF_
#define DEFINED_TYPEDEF_FOR_struct_FIfaVnupBjYAxo1EdNiDlF_
typedef struct { real_T noisePower ; real_T noiseSeeds ; }
struct_FIfaVnupBjYAxo1EdNiDlF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_eFnp8sKFNJLN84XLbLzaFF_
#define DEFINED_TYPEDEF_FOR_struct_eFnp8sKFNJLN84XLbLzaFF_
typedef struct { real_T posVISNoVisionAvail [ 4 ] ; real_T usePosVISFlag ;
real_T batteryStatus [ 2 ] ; } struct_eFnp8sKFNJLN84XLbLzaFF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_8SSZ93PxvPkADZcA4gG8MD_
#define DEFINED_TYPEDEF_FOR_struct_8SSZ93PxvPkADZcA4gG8MD_
typedef struct { real_T IMUAccelGain [ 3 ] ; real_T IMUGyroGain [ 3 ] ;
struct_eF5OUT33sX0T9pzS8027m IMU ; struct_FIfaVnupBjYAxo1EdNiDlF Sonar ;
real_T NO_VIS_X ; real_T NO_VIS_YAW ; struct_eFnp8sKFNJLN84XLbLzaFF dummy ;
real_T sensorDelay ; real_T airDensity ; real_T altToPrsGain ; real_T
altToPrsBias ; real_T inverseIMUGain [ 6 ] ; real_T altSensorMin ; real_T
velocityToOpticalFlowGain ; } struct_8SSZ93PxvPkADZcA4gG8MD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_S5XPVZr9Ltni4p5tjvWJ6C_
#define DEFINED_TYPEDEF_FOR_struct_S5XPVZr9Ltni4p5tjvWJ6C_
typedef struct { real_T A [ 4 ] ; real_T B [ 4 ] ; real_T C [ 4 ] ; real_T D
[ 4 ] ; real_T Ns ; real_T Nu ; real_T Ny ; real_T Ts ; real_T X0 [ 2 ] ;
real_T P0 [ 4 ] ; real_T L [ 4 ] ; real_T Nw ; real_T G [ 4 ] ; real_T H [ 4
] ; real_T Q [ 4 ] ; real_T R [ 4 ] ; real_T N [ 4 ] ; real_T Qbar [ 4 ] ;
real_T Rbar [ 4 ] ; real_T Nbar [ 4 ] ; real_T M [ 4 ] ; real_T Z [ 4 ] ; }
struct_S5XPVZr9Ltni4p5tjvWJ6C ;
#endif
#ifndef typedef_elrp3gv4ik
#define typedef_elrp3gv4ik
typedef struct { uint32_T f1 [ 8 ] ; } elrp3gv4ik ;
#endif
#ifndef typedef_bjqsgn0csy
#define typedef_bjqsgn0csy
typedef struct { int32_T isInitialized ; elrp3gv4ik inputVarSize ; }
bjqsgn0csy ;
#endif
typedef struct bpvdgm2xq5_ bpvdgm2xq5 ; typedef struct nu4qaxumex_ nu4qaxumex
; typedef struct ileg2v2ld1r_ ileg2v2ld1r ; typedef struct diqjpw4041
ipf5ube4r0 ;
#endif
