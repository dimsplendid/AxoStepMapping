/**
 * axoStepMapping.c
 * 
 * copyright (c) 2020
 * Wei-Hsiang Tseng
 * All right reserved
 * 
 */
#include "axoStepMapping.h"

// Construct 
int Data_init(Data **self, const char *file_name);
int Data_calloc(Data **self);
// Destruct
int Data_free(Data *self);
// Method
int Data_print(Data *self, const char *file_name){
    FILE *f = fopen(file_name, "w");
    for(uint32_t x = 0)
}