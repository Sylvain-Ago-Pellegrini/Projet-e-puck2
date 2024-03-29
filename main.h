/*

File    : main.h
Author  : Nicolas Zaugg, Sylvain Pellegrini
Date    : 10 may 2020

Main file containing the FSM controlling the Homing Audio Localization (H.A.L.) robot project

Adapted from the code given in the EPFL MICRO-315 TP (Spring Semester 2020)
*/

#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "camera/dcmi_camera.h"
#include "msgbus/messagebus.h"
#include "parameter/parameter.h"


/** Robot wide IPC bus. */
extern messagebus_t bus;

extern parameter_namespace_t parameter_root;

#ifdef __cplusplus
}
#endif

#endif
