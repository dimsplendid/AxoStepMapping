/**
 * axoStepMapping.h
 * 
 * copyright (c) 2020
 * Wei-Hsiang Tseng
 * All right reserved
 */
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

/* Constant */
#define BOXSIZE 100

/* Data Structure */

/* Each value */
struct _Datus {
    double x;
    double y;
    double cell_gap;
    double psg_rubbing_direction;
    double psa_rubbing_direction;
    double twist;
    double psg_pre_tilt;
    double psa_pre_tilt;
    double rms_percent_error;
    double number_of_iterations;
};
