#include <stdio.h>
#include <math.h>

float integral1, integral2, deltax, deltay, r, phi, luas;
float n, i, j;


int main ()
{
    n = 506;
    phi = 3.1415;
    r = 7;

    deltax = (r-0)/n;
    deltay = (2*phi)/n;

    for  (j = 0; j<= 2*phi; j += deltay)
    {
        integral2 = 0;

        for (i = 0; i <= r; i += deltax)
        {
            integral1 = integral1 + (i*deltax);
        }
    
        integral2 = integral2 + (integral1*deltay);
    }

luas = 3.1415*49;

printf("Hasil dengan integral adalah %f \n", integral2);
printf("Sedangkan hasil menggunakan rumus lingkaran adalah %f \n",luas);
printf("Galat dari hasil perhitungan dengan integral dan rumus lingkaran adalah %f",integral2-luas);

return 0;

}

