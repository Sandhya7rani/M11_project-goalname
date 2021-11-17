/**
 * @file complex.h
 * @author your name (you@domain.com)
 * @brief Main code to call all the other functions
 * @version 0.1
 * @date 2021-11-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef COMPLEX_H
#define COMPLEX_H

/* Included to allow users to call functions from math library if required */
#include "math.h"

/* strcture definition must be reused by the users in their code */
typedef struct complex
{
    float real;
    float img;
}complex_t;

#endif //#ifndef COMPLEX_H