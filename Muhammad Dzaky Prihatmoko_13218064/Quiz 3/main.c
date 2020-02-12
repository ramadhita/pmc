#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    /*Deklarasi tipe dan isi nilai awal */
    float luas1;
    float jari2 = 7;
    float j2 = 0;
    float sudut = 0;
    float sum =0;
    float sum2 = 0;
    float error;
    /*hitung luas dengan rumus */
    luas1 = (3.14)*(jari2)*(jari2);
    /*hitung luas dengan riemann */
    while (j2<=7)
    {
        sum = sum + (j2*(0.001));
        j2 = j2 + 0.001;
    }
    while (sudut <= 6.28 && sum2 < luas1)
    {
        sum2 = sum2 + (sum*0.0001);
        sudut = sudut + 0.0001;
    }
    error = sum2 - luas1;
    printf("luas dengan rumus: %f \n",luas1);
    printf("luas dengan riemann: %f \n",sum2);
    printf("error: %f \n",error);
    return (0);
}
