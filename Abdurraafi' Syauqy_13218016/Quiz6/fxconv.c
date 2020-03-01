//progressive directive
#include <stdio.h>
#include "fxconv.h"

// fungsi yang menentukan nilai f1(x)
double f1 (double x){
    double hasil;
    if ((x>=1) & (x<=3)) {
        hasil = 0.5*(x-1);
    } else {
        hasil = 0;
    }
    return hasil;
}

// fungsi yang menentukan nilai f2(x)
double f2 (double x){
    double hasil;
    if ((x<=0) & (x>=-1)){
        hasil = x + 1;
    } else if ((x>0) & (x<=1)) {
        hasil = 1 - x;
    } else {
        hasil = 0;
    }
    return hasil;
}


