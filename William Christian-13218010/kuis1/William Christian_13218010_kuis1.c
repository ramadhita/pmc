#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
float   Vo,
        g=10,
        theta,
        X=0,
        Y=0,
        rtheta,
        tcheck = 0.01;
// Input
printf("Enter the velocity:");
scanf("%f",&Vo);
printf("\nEnter angle of projection:");
scanf("%f",&theta);
// Konversi Sudut
rtheta = 3.1415 * theta / 180;
while (Y >= 0)
        {
            // Posisi X
            X = Vo*cos(rtheta)*tcheck;
            printf("\nX Pos:%fs\n",X);
            // Posisi Y
            Y = (Vo*sin(rtheta)* tcheck) - 0.5 * 10 * pow(tcheck,2);
            printf("\nY Pos:%fs\n",Y);
            tcheck = tcheck + 0.01 ;
        }
X = Vo*cos(rtheta)*(tcheck-0.02);
printf("\nJarak Horizontal saat benda kembali menyentuh tanah:%fs\n",X);
return;
}



