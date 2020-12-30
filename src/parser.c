/**
 * parser.c
 * 
 * general input file for data analysis
 * 
 * copyright (c) 2020
 * Wei-Hsiang Tseng
 * All right reserved
 */
#include "parser.h"

// Construct 
int Data_init(Data **self, const char *file_name);
int Data_calloc(Data **self);
// Destruct
int Data_free(Data *self);
// Method
int Data_print(Data *self, const char *file_name){
    // Erorr Handling
    if (self == NULL) {
        printf("Data Miss\n");
        exit(EXIT_FAILURE);
    }
    FILE *f = fopen(file_name, "w");
    for(uint32_t i = 0; i < self->length; i++) {

    }
}