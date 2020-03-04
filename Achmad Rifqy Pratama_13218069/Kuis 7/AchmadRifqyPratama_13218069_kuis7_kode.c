/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8
#define delt 0.001
#define A 1

int main(void){
    
    double t=0;
    double h=0;
    double h_penuh=1;
    double v_tumpah,vel,v;
    double luas_lubang=0.25*0.05*0.05*pi;

    FILE *fp;
    fp = fopen("dataKuis-7", "w+");
    
    while (h<h_penuh) {
        // printf("t = %lf\th = %lf\n", t, h);
        fprintf(fp, "%f\t%f\n", t, h);
        // Air keran masuk bak dengan debit 1m^3/s dengan luas alas 
        // 1m^2, jadi laju penambahan ketinggian adalah 1m/s
        v+=delt;
        h=v/A;
        // Mencari debit air bocor
        vel=sqrt(2*g*h);
        v_tumpah=luas_lubang*vel*t;
        // Setiap volume air tumpah dikonversikan dalam ketinggian
        // dengan membagi luas alas A = 1m^2
        h-=v_tumpah;
        // Increment waktu per 0.001s
        t+=delt;
    }

    // printf("waktu yang diperlukan untuk mengisi air : %lf\n", t);
    fprintf(fp, "\nWaktu yang diperlukan adalah %f", t);

    fclose(fp);
    return 0;
}