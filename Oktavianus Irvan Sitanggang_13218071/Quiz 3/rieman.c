#include "rieman.h"
double int_rie(double low_bound, double upper_bound, double f(double x)){
    int n = 1000000;
    double step = (upper_bound - low_bound)/n;
    double res = 0;
    double first = low_bound;
    int i;
    for (i = 0; i < n; i++){
        res += (f(first) + f(first+step))*step/2;
        first += step;
    }
    return res;
}