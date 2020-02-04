// NAMA    : AGUNG DWI LAKSANA
// NIM     : 13218034
// PROGRAM : INTEGRAL
// TANGGAL : 4 Fwbeuari 2020

#include <stdio.h>

int main (void)
{
    // Definisikan konstanta nilai mula-mula R dan Phi
    const int r = 7;
    const double Phi = 22.0/7;

    double Int_luas;
    double luas;

    // Menghitung integral R
    double dr = 0.0000001;
    double Int_R;
    double cur_r = 0;

    while (cur_r <= r)
    {
        Int_R = Int_R + (cur_r*dr);
        cur_r = cur_r + dr;
    }

    // Menghitung integral sudut
    double dteta = 0.0000001;
    double Int_teta;
    double cur_teta = 0;

    while (cur_teta <= 2*Phi)
    {
        Int_teta = Int_teta + dteta;
        cur_teta = cur_teta + dteta;
    }

    // Menghitung luas metode integral
    Int_luas = Int_R * Int_teta;

    // Menghitung luas berdasarkan rumus biasa
    luas = Phi*r*r;

    printf("Perhitungan Luas metode Integral : %f \n", Int_luas);
    printf("Perhitungan Luas metode Biasa    : %f \n", luas);
    printf("Galat = %f \n", Int_luas - luas);

    return 0;
}

