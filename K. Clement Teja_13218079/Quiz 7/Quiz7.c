/******************************************************************************

Quiz7
K. Clement Teja
13218079

Soal :
  - kubus 1 m^2 diisi air dengan debit:
    Q = 1L/s = 1 dm^3/s
  - ada lubang lingkaran di dasar, diameter 5 cm
1. waktu penuh?
2. grafik tinggi permukaan terhadap waktu

Jawab :
1. kubus tidak akan penuh karena debit air yang keluar sama dengan 
   debit air yang masuk saat ketinggiannya 0.13m
2. terlampir pada file grafik tinggi vs waktu.png

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{   
    float D_lubang = 0.05;  // Diameter lubang
    float G  = 9.8;         // gravitasi
    float Q_in = 0.001;     // debit masuk
    float Q_out = 0;        // debit keluar
    float v_out = 0;        // kecepatan air pada lubang
    float ho = 0;           // tinggi air saat t - Δt
    float h = 0;            // tinggi air saat t
    float delta_t = 1;      // Δt
    float t = 0;            // waktu
    FILE *fp;

/* Proses dan Display */
    fp = fopen("DATA.txt", "w+");
    fprintf(fp, "time, height"); 
    
    while ((h < 1) && (t < 230))
    {   v_out = sqrt(2 * G * ho);
        Q_out = M_PI * D_lubang/2 * D_lubang/2 * v_out;
        h += (Q_in * delta_t) - (Q_out * delta_t);
        ho = h;
        t += delta_t;
        fprintf(fp, "\n%.2f,%.6f", t, h);
    }

    fclose(fp);
    return 0;
}