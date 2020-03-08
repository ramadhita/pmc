/*  EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 *  Tugas               :7
 *  Nama/NIM            :Hendra Chayadi Sutanto/18318013
 *  Nama file           :kuis7.c
 */

#include <stdio.h>
#include <math.h>

int main(){
    // Deklarasi variabel Qi, Qo, Apenampunagn(bak), Alubang,V(volume),h(tinggi),t(waktu)
    float Qi, Qo, Apenampungan, Alubang, V, h, t;

    Qi = 1000;                     
    Apenampungan = 10000;                   
    Alubang = 3.1415*2.5*2.5;       

    FILE *fp;
    fp = fopen("kuis7.txt", "w+");

    h = 0;
    t = 0;
    while ((h < 100) && (t < 15)){
        Qo = sqrt(2 * 980 * h);               
        V = (Qi * t) - (Qo * t * Alubang);     
        h += V / Apenampungan;                      
        t += 0.01;
        fprintf(fp, "%f\t%f\n", t, h);
    }

    fclose(fp);
    return 0;
}