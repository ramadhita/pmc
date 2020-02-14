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
#define Cap 0.000001
#define T_S 0.00001
#define Vs 5
#define Res 10000
#include <stdio.h>
#include <math.h>


FILE *out;
int main(){
    out = fopen("out.txt", "w");
    double curr;
    double delV;
    double Vc = 0;
    curr = 5/Res;// current awal

    int i = 0;// inisialisasi pada i

    for (; i < TMAX; i++){

        delV = curr*T_S/Cap;// mencari nilai perubahan V
        Vc += delV;//ditambahkan
        curr = (Vs - Vc)/ Res;//current yang digunakan pada iterasi selanjutnya
        
        fprintf(out,"%f,%f\n", i*T_S,Vc);//output pada file out
    }

    fclose(out);
    return 0;
}