/*  Kuis                : 5
 *  Nama (NIM)          : Hendra Chayadi Sutanto (18318013)
 *  Nama File           : kuis6.c
 */

#include <stdio.h>
#include <math.h>

float f(float x){

    if (x <= 3 && x >= 1)
        return ((x - 1) / 2);
    else
        return 0; 
}

float g(float x){

    if (x >= -1 && x <= 0)
        return (x + 1);
    else if (x >= 0 && x <= 1)
        return (1 - x);
    else
        return 0; 
}

//tidak mengerti cara mengerjakan kuis 6