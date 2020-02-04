#include <stdio.h>
#include <stdlib.h>

// Fungsi luas dengan konsep matematika sederhana
double luassimple (int r){
    const double pi = 3.14159;
    double luas;
    luas = pi * pow(r,2);
    return (luas);
}

// Fungsi luas dengan konsep penjumalahan riemann
float luasintegral (int r, float segmen){
    const float pi = 3.14159;
    float add_rad = r / segmen;
    float i;
    float sumluas;
    for (i = 0; i <= r; i += add_rad){
        sumluas += (2*pi*i*add_rad);
    }
    return (sumluas);
}
// Main Program
int main()
{
    int radius;
    float segmen;
    printf("Radius lingkaran :");
    scanf("%d", &radius);
    printf("Banyaknya segmen :");
    scanf("%f", &segmen);
    printf("Luas lingkaran secara matematis :");
    printf("%f\n", luassimple(radius));
    printf("Luas lingkaran menggunakan prinsip integral :");
    printf("%f\n", luasintegral(radius, segmen));
    printf("Error = %f", (luassimple(radius) - luasintegral(radius, segmen)));
    return 0;
}
