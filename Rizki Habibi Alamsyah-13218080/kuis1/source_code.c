/*  Nama    : Rizki Habibi Alamsyah
    NIM     : 13218080  */

#include<stdio.h>

main (void)
{   const double Vo=50,sin60=0.866,cos60=0.5; /*kecepatan awal dan nilai sinus dan cosinus sudut 60 derajat*/
    double x,y,xmax,t; /*variabel yang akan digunakan yaitu x:jarak, y:ketinggian*/
    t=0.01; /*inisiasi t=10ms*/
    y=Vo*sin60*t-0.5*10*t*t;; /*rumus ketinggian*/
    while (y>0){ /*saat sebelum menyentuh tanah*/
        x=50*cos60*t; /*jarak mendatar*/
        printf("t=%fs ",t);
        printf("x=%fm ",x);
        printf("y=%fm\n",y);
        t=t+0.01; /*t bertambah 10ms setiap iterasi*/
        y=Vo*sin60*t-0.5*10*t*t;
    }
    xmax=x;/*jarak maksimum yang diperoleh saat menyentuh tanah*/
    printf("Jarak terjauh :%f",xmax);
    return(0);
}
