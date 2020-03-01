#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g 10 //percepatan grafitasi

//Muhammad Heronan Hyanda (13218073)
//Quiz 7

//permasalahan
/*Tangki mempunyai volume(V) sebesar 1 meter kubik (m3) diisi dengan debit masuk (Q masuk) sebesar 1 dm3/s
dan tangki juga bocor dibagian alas dengan diameter 5 cm
perlu ditentukan : 1. t untuk tangki penuh?
                   2. Grafik keluaran V vs t?
*memakai asumsi luas pemnampang tangki 1 m2 dengan ketinggian 1 m
*/

int main()
{
    //inisialisasi
    FILE *fp;
    char *filename = "bocor.txt";
    double t = 0, dt = 0.01; //interval waktu pengamatan 10 ms
    double d = 5 * 0.01; //konversi ke m
    double A = M_PI * d * d / 4; //luas penampang kebocoran
    double q_in = 10e-6; //debit masuk sesuai dengan waktu 10ms
    double h = 0, dh; //ketinggian dan delta ketinggian
    double v = 0, v_buffer; //kondisi awal V kosong

    //proses pembuatan file
    fp = fopen(filename, "w");

    //proses perhitungan
    while (v != v_buffer) //syaratnya berupa ketinggan sudah tidak bisa bertambah ataupun berkurang atau kondisi ini steady state (Qin = Qout)
    {
        v_buffer = v;
        t += dt;
        dh = q_in/1 - A*sqrt(2*g*h)*dt/1; //debit masuk per luas (asumsi 1 m) dijadikan ketinggian tiap pengamatan dikurangi dengan ketinggian akibat volume keluar
        h += dh;
        v += dh * 1; //asumsi luas penampang 1 m2
        printf("%lf\n", v);
        fprintf(fp, "%.6lf,%.4lf\n", v, t);
    }
    fclose(fp);
}
