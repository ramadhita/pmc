/* EL2208 Praktikum Pemecahan Masalah dengan C
*Modul       :
*Percobaan   : 
*Hari/Tanggal: 
*Nama/NIM    : Oktavianus Irvan Sitanggang/13218071
*Asisten/NIM : 
*Nama File   : main.c
*Deskripsi   : 
*/

#define TMAX 10000
#include <stdio.h>
#include <math.h>


FILE *out;
int main(){
    out = fopen("out.txt", "w");
    double curr;
    double delV;
    double Vc = 0;
    curr = 5/10000;
    int i = 0;
    for (; i < TMAX; i++){
        delV = curr*0.00001/0.000001;
        Vc += delV;
        curr = (5 - Vc)/ 10000;
        fprintf(out,"%f,%f\n", i*0.01,Vc);
    }

    fclose(out);
    return 0;
}