/*
bak diisi air dengan debit 1L/detik = 0.001m^3/detik
lubang dibawah dengan d=5cm=0.05m; r=0.025m
volume bak = 1m^3*/

#include <stdio.h>
#include <math.h>

int main()
{
    float realtime_vol = 0,
            vol_masuk,
            vol_keluar,
            tinggi_air = 0,
            LP_tangki = 1,
            LP_lubang;
    int t = 0;

    FILE *isitangki;
    isitangki = fopen("isibaktxt_13218062_Odelia.txt", "w+");

    LP_lubang = 3.1416*pow(0.025,2);

    while (realtime_vol < 1 && t<80)
    {
        vol_masuk = 0.001*t;
        tinggi_air = realtime_vol/LP_tangki;
        vol_keluar = sqrt(2*9.8*tinggi_air)*t*LP_lubang;
        realtime_vol += vol_masuk-vol_keluar;
        fprintf(isitangki, "%d %f\n", t, tinggi_air);
        t++;
    }

    fclose(isitangki);
    return 0;
}