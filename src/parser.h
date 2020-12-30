/**
 * parser.h
 * 
 * general input file for data analysis
 * 
 * copyright (c) 2020
 * Wei-Hsiang Tseng
 * All right reserved
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

/* Constant */
#define MAXDATASIZE 1000000

typedef struct _Datus Datus;

/* Data */
struct _Data {
    char name[20];
    Datus *data;
    uint32_t length;
};
/* The object to store raw data */
typedef struct _Data Data;
// Construct 
int Data_init(Data **self, const char *file_name);
int Data_calloc(Data **self);
// Destruct
int Data_free(Data *self);
// Method
int Data_print(Data *self, const char *file_name);