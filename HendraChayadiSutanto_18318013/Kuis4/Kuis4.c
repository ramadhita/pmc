/*  EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 *  Tugas               :4
 *  Hari dan tanggal    :Selasa 11 Febuari 2020
 *  Nama/NIM            :Hendra Chayadi Sutanto/18318013
 *  Nama file           :kuis4.c
 */

#include <stdio.h>
#include <math.h>

int main()  
{

    double Vs, Res, Cap, time, Vi, Vc, dt;

    FILE *fp;
    fp = fopen("kuis4.txt", "w+");  

    Vs = 5;
    R = 10000;
    C = 0.000001;
    deltat = 0.00001;
    Vc = 0;

   
    for(t=0; t<0.07; t+=0.00001) {
        Vi = (((Vc * Res * Cap / deltat) + Vs)/((Res * Cap / dt) + 1));
        Vc = Vi;
        fprintf(fp, "%lf\t%lf\n",time,Vo);
    }
   fclose(fp);  
}