#include <stdio.h>
#include <math.h>

int main ()
{
    double debit_masuk, debit_keluar; // deklarasi variabel
    double volume_tambah, volume_air, h_air;
    int t;

    debit_masuk = 1000;
    volume_air = 0; //volume air di awal
    h_air = 0;
    t = 0;
    
    FILE *debitair = fopen("Grafik debit air.csv", "w+");

    while ((h_air < 100) && (volume_tambah != 0))
    {
        h_air = volume_air/(100*100); // kontainer berbentuk kubus dengan tinggi, panjang, dan lebar 100 cm
        debit_keluar = (3.1415*2.5*2.5)*sqrt(2*10/100*h_air); // Menghitung debit air yang keluar
        volume_tambah = (1000) - (debit_keluar); // Menghitung perubahan volume
        volume_air = (volume_air) + (volume_tambah); // Menghitung volume air
        fprintf(debitair, "%d;%lf\n", t, h_air );
        t = t+1;

    }
    return 0;

    fclose (debitair);
}