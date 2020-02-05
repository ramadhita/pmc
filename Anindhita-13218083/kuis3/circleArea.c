#include <math.h>
#include "circleArea.h"

#define PI 3.14159265358979323846

double luasRiemann(double r) {

    // jumlah persegi panjang
    double n = 1000000;

    // tinggi persegi panjang (konstan)
    double dr = r/n;

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        // lebar persegi panjang
        double circumference = (i + 1) * dr * 2 * PI;

        sum += dr * circumference;
    }
    return sum;
}

double luas(double r) {
    double area = r * r * PI;
    return area;
}