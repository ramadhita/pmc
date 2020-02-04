#include <stdio.h>
#define PI 3.1416

int main(){
    float r;
    r = 7;
    int i,j;
    float luas1, luas2, hasils;
    luas1 = PI * 7 * 7;
    for (i = 0; i<1000; i++){
        hasils = hasils + (7*7/1000);
    }
    for (j = 0; j<1000; j++){
        luas2 = luas2 + (hasils*2*PI);
    }
    printf("Hasil berdasarkan rumus %f \n", luas1);
    printf("Hasil integral %f", luas2);
    return(0);
    }