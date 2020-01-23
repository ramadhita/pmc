//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   21 Januari 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 1

/*Program untuk melakukan tracking posisi sebuah benda setiap 10ms
dan posisi terjauh dari beda dengan kecepatan awal 50m/s dan sudut elevasi 60 derajat*/

#include <stdio.h>
#include <math.h>

//Deklarasi kondisi awal
#define gravity -10                 //asumsi gravitasi bernilai 10m/s2 ke arah bawah
#define vo 50                       //kecepatan awal 50m/s
#define sin_teta (sqrt(3)/2)        //nilai sinus sudut
#define cos_teta 0.5                //nilai cosinus sudut

int main(void)
{
    double vox, voy, t_peak, t_max, t, x, y, y_peak, xo, yo;
    
    vox = vo * cos_teta;            //kecepatan awal searah sumbu x
    voy = vo * sin_teta;            //kecepatan awal searah sumbu y
    t_peak = (0-voy)/(gravity);     //mencari waktu untuk mencapai puncak, atau saat v=0m/s
    t_max = 2 * t_peak;             //mencari waktu saat benda menyentuh tanah (jarak horizontal terjauh)
    
    y_peak = voy * t_peak + 0.5 * gravity * t_peak * t_peak;    //mencari ketinggian maksimum benda
    
    //Deklarasi posisi dan waktu awal
    xo = 0;
    yo = 0;
    t=0;
    
    while (t <= t_max)
    {
        x = xo + (vox * t);
        y = yo + (voy * t + (0.5 * gravity * t * t));
        printf("Saat t = %fs posisinya adalah (%f m, %f m).\n", t, x, y);       //output tracking posisi
        t = t + 0.01;               //increment selang waktu 10ms atau 0.01s
    }
    printf("Jarak horizontal maxnya adalah %f m.\n", x);        //output jarak horizontal terjauh
    printf("Jarak vertikal maxnya adalah %f m.\n", y_peak);     //output jarak vertikal terjauh
    
    return (0);
}