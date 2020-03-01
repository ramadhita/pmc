/* EL2208 Praktikum Pemecahan Masalah dengan C
*Modul       :
*Percobaan   : 
*Hari/Tanggal: Tuesday/25-02-2020
*Nama/NIM    : Oktavianus Irvan Sitanggang/13218071
*Asisten/NIM : 
*Nama File   : main.c
*Deskripsi   : 
*/


#include <stdio.h>
#include <math.h>
#include <string.h>

#define t_s 0.01
#define grav 980
#define PI 3.14159265359

int main(){
    double h = 0,
           area = 10000,
           radLubang = 2.5;
    double h_last = 100;
    double speedAir;
    FILE *in;
    in = fopen("in.txt", "w");
    /*
        0 = -pgh + 0.5pv^2
        v = sqrt(2gh)
    */
    float t = 0;
    float debit = 10000;
    // v*A = Q
    // sqrt(2*g*h)*10000 < 1000
    // hmaks = 0.01/2g
    // hmaks = 0.013
    // imposibble penuh
    while (h < 100 && h_last != h){
        h_last = h;
        speedAir = sqrt(2*grav*h);
        h -= (speedAir *PI* radLubang*radLubang)*t_s/area;
        h += debit*t_s/(area);
        fprintf(in,"%f,%f,%f\n", h, t,);
        t += t_s;
    }
    fclose(in);

    return 0;
}