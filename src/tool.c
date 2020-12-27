/**
 * tool.c
 * 
 * copyright (c) 2020
 * Wei-Hsiang Tseng
 * All right reserved
 * 
 */

#include "tool.h"
void rmFileAtrr(char *file_name) {
    char *pch = NULL;
    if(NULL != (pch = strrchr(file_name, '.'))) {
        *pch = '\0';
    }
}