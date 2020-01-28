//Muhammad Heronan Hyanda 13218073
//Quiz 21 Januari 2020

/*Deklarasi untuk library yang digunakan dalam source file quiz ini. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Deklarasi untuk beberapa cons (konstanta) yang digunakan dalam pemecahan masalah ini.*/
#define INITIAL_VELOCITY 50
#define COS_60 0.5
#define SIN_60 0.866
#define GRAVITY 10

int main(void)
{
    double posisi_x, posisi_y, x_max;       //deklarasi variabel yang digunakan
    double time = 0.0;      //deklarasi dan inisiasi variabel waktu
    double time_max = 2 * INITIAL_VELOCITY * SIN_60 / GRAVITY;      //operasi aritmatika untuk menghitung waktu maksimum yang diperlukan oleh benda untuk mencapai posisi y sama dengan 0 kembali
    for (time = 0.0; time <= time_max; time += 10e-3)       //loop untuk membuat iterasi waktu dengan increment 10 ms
    {
        posisi_x = INITIAL_VELOCITY * COS_60 * time;        //posisi benda terhadap sumbu-x pada time tertentu
        posisi_y = (INITIAL_VELOCITY * SIN_60 * time) - (0.5 * GRAVITY * (time * time));        //posisi benda terhadap sumbu-y pada time tertentu
        printf("Posisi (x,y) dari benda tersebut adalah (%.3f, %.3f) pada saat %.3f \n", posisi_x, posisi_y, time);
        x_max = posisi_x;       //jarak terjauh dari benda akan diupdate setiap posisi x berubah hingga akan diambil saat posisi x bernilai maksimum
    }
    printf("Posisi terjauh dari benda tersebut adalah %.3f \n", x_max);
    return 0;
}
