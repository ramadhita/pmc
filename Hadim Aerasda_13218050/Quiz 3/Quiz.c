#include "string.h"
#include "stdio.h"
#include "math.h"
#include "operasi.h"
#define pi 3.14

int main ()
{
    double r,n;
    double delta_r, Area, ends, area1, pembagi, error;
    input (&r,&n);
    delta_r = 1;
    ends = r*pangkat(10,n);
    pembagi = pangkat(10,n);
    Area = 0;
    while (delta_r<ends)
    {
        Area = Area + ((2*pi*delta_r)/pembagi);
        delta_r += 1;
    }
    Area = Area/(pembagi);
    area1 = pi*(pangkat(r,2));
    error = area1 - Area;
    printf("Luas Lingkaran = %f \n", Area);
    printf("Luas Lingkaran = %f \n", area1); 
    printf("Error = %f \n", error);    
    return 0;
}
