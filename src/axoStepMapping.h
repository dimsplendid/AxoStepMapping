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
#define MAXDAASIZE 1000000
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
/* Each row of raw data */
typedef struct _Datus Datus;

/* Data */
struct _Data {
    char name[20];
    Datus *data;
    uint32_t length;
};
/* The object to store axo step raw data */
typedef struct _Data Data;
// Construct 
int Data_init(Data **self, const char *file_name);
int Data_calloc(Data **self);
// Destruct
int Data_free(Data *self);
// Method
int Data_print(Data *self, const char *file_name);