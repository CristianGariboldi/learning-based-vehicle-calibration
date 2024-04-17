// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_learning_based_vehicle_calibration __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_learning_based_vehicle_calibration __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_learning_based_vehicle_calibration __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_learning_based_vehicle_calibration __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_learning_based_vehicle_calibration
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learning_based_vehicle_calibration ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_learning_based_vehicle_calibration
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learning_based_vehicle_calibration ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_learning_based_vehicle_calibration
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_learning_based_vehicle_calibration __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_learning_based_vehicle_calibration
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learning_based_vehicle_calibration __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learning_based_vehicle_calibration
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
