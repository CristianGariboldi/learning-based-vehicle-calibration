// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_learning_based_vehicle_calibration __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_learning_based_vehicle_calibration __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_learning_based_vehicle_calibration __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_learning_based_vehicle_calibration __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_learning_based_vehicle_calibration
    #define ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration ROSIDL_GENERATOR_C_EXPORT_learning_based_vehicle_calibration
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration ROSIDL_GENERATOR_C_IMPORT_learning_based_vehicle_calibration
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_learning_based_vehicle_calibration __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_learning_based_vehicle_calibration
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
