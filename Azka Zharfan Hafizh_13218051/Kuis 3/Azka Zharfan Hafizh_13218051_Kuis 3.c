#include <stdio.h>

#define phi 3.1428

int main()
{

float r, integral, luas1, luas2, galat;


float luas (float r)
{

 float luas;
 luas = phi*r*r;
 return luas;
}

float integral_1(float r)
{
    float i;
    float integral;
    integral = 0;

    for (i=0; i<=r; i+= 0.001)
    {
     integral += (r*0.001);
    }
    return integral;
}

float integral_2(float integral)
{
    float i;
    float integral2;
    integral2=0;

    for (i=0 ; i<3.1428; i+= 0.001)
    {
        integral2 += (integral*0.001);
    }
    return integral2;
}

printf("MENGHITUNG LUAS LINGKARAN\n");
printf("---------------------------\n");
printf("MASUKAN BESAR JARI-JARI :");
scanf ("%f",&r);
luas1 = integral_1(r);
luas2 = integral_2(luas1);
printf("LUAS :");
printf("%.3f\n", luas(r));
printf("LUAS (menggunakan integral) : ");
printf("%.3f\n",luas2);
galat = (luas2 - luas(r));
printf("EROR:");
printf("%.2f", galat);


return 0;
}



