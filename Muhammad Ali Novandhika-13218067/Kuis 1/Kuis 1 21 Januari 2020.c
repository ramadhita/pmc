/* Nama     :   Muhammad Ali Novandhika
*  NIM      :   13218067
*  Tanggal  :   21 Januari 2020
*  Kuis 1

    Bola dilempar dengan kecepatan 50m/s dengan sudut 60 derajat dengan sumbu horizontal
    - Trekking posisi setiap 10ms
    - Hitung jarak terjauh

*/


#include <stdio.h>
#include <math.h>
#define pi 3.14159265


int main() {
    double kecepatan,sudut;                     /* deklarasi variabel */
    double t,i,vx,vy,px,py;
    kecepatan=50;                               /* kecepatan semula dalam m/s */
    sudut=60;                                   /* sudut elevasi */
    vx=kecepatan*cos((sudut/180)*pi);           /* kecepatan arah horizontal */
    vy=kecepatan*sin((sudut/180)*pi);           /* kecepatan arah vertikal */
    t= (2*vy)*10;
    for (i = 0;                                 /* initialization */
    i < t;                                      /* loop repetition condition */
    i += 1)                                     /* update */
    {
        px = ((vx*i)/100);                                       /* posisi horizontal */
        py = ((vy*i)/100)-((5*i*i)/10000);                       /* Posisi vertikal */
        printf("Waktu : %.0f0 ms  ",i);                          /* mencetak keluaran posisi setisp 10 ms */
        printf("( %0.2f ,",px);                                  /* Keluaran berbentuk (x,y) */
        printf(" %0.5f ) \n",py);
    }
    printf("\nJarak terjauh dari tempat semula adalah =\n");
    printf("%f ",px);
    return 0;
}

