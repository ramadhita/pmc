#include <stdio.h>
#define PI 3.1416

int main(){
    float r;
    r = 7;
    int i,j;
    float luas1, luas2, hasils;
    luas1 = PI * 7 * 7;
    hasils = 0;
    luas2 = 0;
    for (i = 0; i<100; i++){
        hasils = hasils + (7*0.07);
    }
    for (j = 0; j<100; j++){
        luas2 = luas2 + (hasils*PI*0.01);
    }
    printf("Hasil berdasarkan rumus %f \n", luas1);
    printf("%f \n",hasils);
    printf("Hasil integral %f", luas2);
    return(0);
    }