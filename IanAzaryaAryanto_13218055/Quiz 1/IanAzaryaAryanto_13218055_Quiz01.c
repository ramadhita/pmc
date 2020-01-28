// Nama         : Ian Azarya Aryanto
// NIM          : 13218055
// Kelas        : K02 EL2008

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
//Men-define nilai pi
#define g 10 
//Asumsi nilai gravitasi = 10 m/s^2

int main ()
{
    int v,theta;
    double t = 0.01; //Inisiasi 10 ms
    int num = 1;
    double y,x,rad;
    printf("Input nilai kecepatan (v m/s) = \n");
    scanf("%d",&v); 
	//Input nilai kecepatan dalam m/s
    printf("Input nilai sudut (theta) = \n"); 
    scanf("%d",&theta);
	//Input nilai theta
    printf("\n");
    rad = (double)(theta*M_PI)/180;
	//Konversi nilai theta (degree) menjadi radian
    y = (v*sin(rad)*t)-(0.5*g*t*t);
	//Posisi y (ketinggian) dalam meter
    x = v*cos(rad)*t;
	//Posisi x (jarak tempuh) dalam meter
    
    while (y>0) {
        //Looping hingga ketinggian <= 0 (menyentuh tanah)
        if (((int)(t*1000))%10 == 0) {
            //Tracking posisi setiap 10 ms
            printf("Posisi %d \n",num);
            printf("x = %f m \n",x);
            printf("y = %f m \n",y);
            printf("\n");
            num = num + 1;
            }
        t = t + 0.001; 
        //Increment 1 ms sehingga hasil lebih presisi
        y = (double)((v*sin(rad)*t)-(0.5*g*t*t));
        x = (double)(v*cos(rad)*t);
    }
    printf("Jarak maksimum yang ditempuh benda dalam meter adalah = %f m/s ",x);
    return(0);
}
