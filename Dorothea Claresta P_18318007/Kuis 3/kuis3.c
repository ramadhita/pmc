/* Kuis 5 Selasa, 4 Februari 2020
Nama    : Dorothea Claresta P
NIM     : 18318007

Menghitung luas lingkaran dengan rumus dan dengan integral serta menghitung errornya
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float pi, Lrumus, sum, Lintegral, i, j, r, error;
    
    r = 7;
    pi = 3.1416;
   
    // Menghitung luas lingkaran dengan rumus
    Lrumus = pi * r * r;
    printf("Luas lingkaran dgn rumus = %f\n", Lrumus);

    // Menghitung luas lingkaran dengan integral
    sum = 0;
    Lintegral = 0;

    for (i=0; i<=r; i+= r*0.008){
        sum += (r * r * 0.008);
    }

    for (j=0; j<=pi; j+=pi*0.008){
        Lintegral += sum * 0.008 * pi;
    }
   
    printf("Luas lingkaran dgn integral = %f\n", Lintegral);

    // Menghitung error
    error = Lrumus - Lintegral;
    printf("Error = %f", error);

    return 0;

}
