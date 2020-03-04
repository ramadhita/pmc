// Nama : Adeline Kartika Tiku Putri
// NIM : 13218081
// Kuis 7
// Ada keran mengeluarkan air 1 L/detik, trus ada bocor dibawah diameternya 5 cm.
// Dari volume 0 ke penuh, volumenya 1 m kubik buat grafiknya

#include <stdio.h>
#include <math.h>

int main(){
    double Qlubang, A, volume1, volume2, vlubang;
    double Qkeran = 0.001; // debit air dari keran dalam m kubik
    double g = 10; // grafiktas
    double h = 0; // ketinggian bak
    double t = 0; // waktu pengisian
    double volume = 0; // volume total bak
    double dt = 0.1; // rentang waktu

    FILE *fp;
    
    // membuka file
    fp = fopen("quiz7.csv", "w");

    A = M_PI*(0.025)*(0.025); // luas lubang bocor dengan diameter 0.05 m

    while (h <= 1 && t < 200){ // hingga bak penuh (ketinggiannya 1) dan rentang waktu
        vlubang = sqrt(2*g*h); // kecepatan air di lubang
        Qlubang = A*vlubang; // debit air di lubang
        volume1 = Qkeran*dt; // volume keran (Rumus => Q = V/t)
        volume2 = Qlubang*dt; // volume lubang bocor
        volume = volume + (volume1 - volume2); // volume total
        h = h + ((Qkeran - Qlubang)*dt); // ketinggian bak
        t = t + dt; // waktu pengisian

        // output ke file
        fprintf(fp, "%.3f; %.5f\n", t, h);
    }

    fclose(fp); // menutup file

    return 0;
}
