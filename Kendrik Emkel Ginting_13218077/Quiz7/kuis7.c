#include <stdio.h>
#include <math.h>

/* bak 1 m3, keran 1 liter/detik, lubang diameter 5cm, Volume awal 0
   diisi sampai penuh. Berapa waktunya, bagaimana grafik h thdp t */

/*
    Pengisian
    Vin = Q*t

    Keluar
    Persamaan Bernoulli
    Q = Av
    Vout/t = Av
    Vout/t = A*SQRT(2gh)
    Vout = A*SQRT(2gh)*t
    h = V
    Vout = A*SQRT(2gV[t-deltat])*t

    TOTAL
    V = Vin - Vout
    V = Q*delta t - (A*SQRT(2gV[t-delta t]))*delta t
*/

int main()
{
    FILE* outfile; 
    double Volume = 0, Qin = 0.001, diameter = 0.05, gravity = 9.8, deltat = 0.5, Vin, Vout, Area, time = 0;
    int i;

    // hitung luas
    Area = M_PI*diameter/2*diameter/2;

    // buka file, cetak header, dan data pertama saat masih kosong
    outfile = fopen("volume.csv", "w");
    fprintf(outfile, "t, height\n%5d, %2.4lf\n", 0, Volume);

    // hitung dan cetak volume setiap satuan waktu
    while ((Volume <= 1) && (time <= 210))
    {
        Vin = Qin*deltat;
        Vout = Area*sqrt(2*gravity*Volume)*deltat;
        Volume += Vin - Vout;
        fprintf(outfile, "%5.2lf, %2.4lf\n", time, Volume);
        time += deltat;
    }
    fclose(outfile);

    return 0;
}