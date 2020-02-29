// Fadia Hanifa S. / 18318029

#include <stdio.h>
#include <math.h>

int main(){
    FILE *fp = fopen("Quiz 7.csv", "w+");               // Membuat atau membuka file Quiz 7.csv
    // Deklarasi Variabel
    int r = 100;                                        // Rusuk tabung = 100cm
    float A2 = 3.1415926536 * 2.5 * 2.5;                // Luas penampang lubang dengan jari2 2.5
    int Qin = 1000;                                     // Debit masuk
    double volume = 0;                                  // Volume air dalam tabung. Volume awal = 0
    int t = 0;                                          // waktu dalam sekon
    double h, dV;                                       // variabel tinggi air dan perubahan volume
    // Perhitungan tinggi air
    while ((h < r) && (dV > 0.00001)){                  // selama tinggi belum maksimum dan perubahan volume mendekati 0
        h = volume/(r * r);                             // perhitungan tinggi air
        dV = Qin - A2 * sqrt(20*100*h);                 // perhitungan perubahan volume dalam 1 detik
        volume += dV;                                   // volume ditambah dengan perubahan volume
        t ++;                                           // waktu naik 1 detik
        fprintf(fp, "%d, %lf\n", t, h);                 // input waktu dan tinggi air ke dalam file
    }
    fclose(fp);                                         // Menutup file
    return 0;
}