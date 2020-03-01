#include "rieman.h"
double int_rie(double low_bound, double upper_bound ,double f(double x, double t)){
    int n = 1000000;

    double step = (upper_bound + 1 - low_bound)/n;
    double res = 0;
    double first = low_bound;

    int i = 0;

    for (; i < n; i++){
        res += (f(first ,upper_bound) + f(first+step, upper_bound))*step/2;
        first += step;
    }

    return res;
}