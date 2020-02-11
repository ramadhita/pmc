/*
*Hari dan Tanggal   : Jumat, 11 Februari 2020
*Kelas              : K02S
*Nama (NIM)         : Ignatius Enrico Bramantya (13218059) 
*Topik              : Quiz 4
*Deskripsi Masalah  :
    Program ini menentukan gejala transien pada sirkuit RC sederhana. (Orde 1)
*/

#include <stdio.h>

struct data {
    float voltage;
    float time;
};
 
int main(void) {
    
    struct data variabel[100000];
    float vs,timeconst,vr,vc,i,dv,dt;
    int t;

    timeconst = 100000; //Dalam mili sekon
    vc = 0;
    FILE *fpt; 

    if((fpt = fopen("output.csv", "w+")) == NULL) {             //Skema cek apakah file output ada.
        printf("\nERROR - Cannot open the designated file\n");
    } 
    else {
        i = 5/10000;
        for (t=0; t<1000000; t+=1)
    {
        dv = i * t / 10000;
        vc = vc + dv;
        i = (5 - vc)/10000;
        variabel[t].voltage = vc;
        variabel[t].time = t;
        
        fprintf(fpt,"%f,%f\n", variabel[t].voltage, variabel[t].time); 
        printf("Voltage : %f Volt", variabel[t].voltage);
        printf("|| Time : %.1f s\n", variabel[t].time);  
    }
    return 0;
    }

    
}
