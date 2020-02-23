/* EL2208 Praktikum Pemecahan Masalah dengan C
*Modul       :
*Percobaan   : 
*Hari/Tanggal: Saturday/22-02-2020
*Nama/NIM    : Oktavianus Irvan Sitanggang/13218071
*Asisten/NIM : 
*Nama File   : main.c
*Deskripsi   : 
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include "function.h"
#include "rieman.h"

FILE *filefunc1;
FILE *filefunc2;
FILE *out;

double funAns(double x, double t){
    return func1(x)*func2(t-x);
}

int main(){
    filefunc1 = fopen("func1.txt", "w");
    filefunc2 = fopen("func2.txt", "w");
    out = fopen("out.txt", "w");

    printFuncToFile(func1 ,filefunc1, 0.01);
    printFuncToFile(func2 ,filefunc2, 0.01);
    float i;
    double ans;

    for (i = -5; i <= 5; i+=0.01){
        ans = int_rie(-5 , i,funAns);
        fprintf(out, "%f,%f \n", i, ans);
    }

    fclose(filefunc1);
    fclose(filefunc2);
    fclose(out);
        
    return 0;
}