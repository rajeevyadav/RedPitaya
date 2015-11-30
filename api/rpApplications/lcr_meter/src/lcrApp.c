/**
* $Id: $
*
* @brief Red Pitaya application Impedance Analyzer module interface
*
* @Author Luka Golinar <luka.golinar@redpitaya.com>
*
* (c) Red Pitaya  http://www.redpitaya.com
*
* This part of code is written in C programming language.
* Please visit http://en.wikipedia.org/wiki/C_(programming_language)
* for more details on the language used herein.
*/

#include <stdio.h>
#include <sys/syslog.h>

#include "lcrApp.h"
#include "common.h"

/* Resource managment functions */
int lcrApp_lcrInit(){
	return lcr_Init();
}

int lcrApp_LcrRelease(){
	return lcr_Release();
}

int lcrApp_LcrReset(){
	return lcr_Reset();
}

int lcrApp_LcrRun(float *amplitudez){
	return lcr_Run(amplitudez);
}

int lcrApp_LcrStartCorrection(){
	return lcr_Correction();
}

int lcrApp_LcrSetFrequency(float frequency){
	return lcr_SetFrequency(frequency);
}

int lcrApp_LcrGetFrequency(float *frequency){
	return lcr_GetFrequency(frequency);
}

int lcrApp_LcrSetCalibMode(calib_t calib_mode){
	return lcr_SetCalibMode(calib_mode);
}

int lcrApp_LcrGetCalibMode(calib_t *calib_mode){
	return lcr_GetCalibMode(calib_mode);
}


