/* EL2008 Pemecahan Masalah dengan C 2019/2020
* Hari dan Tanggal : Kamis, 20 Februari 2020
* Nama (NIM) : Muhammad Ali Novandhika (13218067)
* Nama File : Kuis6 20 Februari 2020.c
* Deskripsi : Konvolusi
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include <time.h>
#include <string.h>


double pertama (double b)
{
    if(b>=1&&b<=3){return (b-1)/2;}
    else{return 0;}
}


double kedua (double a)
{
    if ((a>=0)&&(a<=1)){return 1-a;}
    else{
        if((a<0)&&(a>=-1)){return 1+a;}
        else{return 0;}
    }
}


int main()
{
    FILE *fp;
    double hasil=0;
    double dt=0.01;

    fp = fopen("test8.txt","w+");
    for (double i=0;i<=5;i+=dt)
    {   hasil=0;
        for(double j=0;j<=i;j+=dt){
        hasil+= pertama(j)*kedua(i-j)*dt;
        }
    fprintf (fp,"t= %0.4f   |    h(t)= %0.4f\n",i,hasil);
    }

    fclose(fp);
    return 0;
}

