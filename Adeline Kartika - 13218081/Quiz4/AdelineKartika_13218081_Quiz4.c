// Nama : Adeline Kartika Tiku Putri
// NIM  : 13218081
// Kuis 4
// Menghitung rangkaian RC Vo/t dengan V dc = 5V, r = 10k, C = 1uF.

#include <stdio.h>
#include <math.h>

int main(){
    double Vi = 5; // Nilai Tegangan input
    double R = 10000; // Nilai Resistor
    double C = 0.000001; // Nilai Kapasitor
    double Vo = 0; // Nilai Tegangan Output (Tegangan Kapasitor)
    double t = 0.5; // Waktu
    double dt = 0.001; // Rentang Waktu
    double i = dt;

    FILE *fp; // Inisiasi file
    fp = fopen("kuis4.csv", "w"); // Untuk membuka dan menulis file external

    // looping rumus tegangan di kapasitor
    while (i <= t){
        Vo = ((Vi*dt)+(Vo*R*C))/((R*C)+dt); // penurunan rumus, dimana Vo(t-dt) adalah Vo sebelumnya sehingga tidak perlu dikali (t-dt) cukup Vo saja
        printf("%.3f;%.3f\n", Vo, i); // display hasil
        fprintf(fp, "%.3f;%.3f\n", Vo, i); // untuk ditulis di file external
        i = i + dt;
    }

    fclose(fp); // untuk menutup file external
    return 0;
}
    