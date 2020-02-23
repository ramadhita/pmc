//progressive directive
#include <stdio.h>
#include "fxconv.h"

// tipe data
double i, j, y, x, h, dx, temp;
int leny;

// program utama
int main (){
    dx = 0.025; // mengatur ketelitian nilai
    leny = 5; // panjang hasil konvolusi
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("f3(x).txt", "w+"); // file yang menyimpan nilai f3(x)
    fp2 = fopen("x.txt", "w+"); // file yang menyimpan nilai x
    for (i=0;i<leny;i=i+dx){
        temp=0;
        for (j=-1;j<=3;j=j+dx){
            x = f1(j);
            h = f2(i-j);
            y = temp + (x*h); // menghitung konvolusi x dengan h
            temp = y;
        }
        fprintf(fp1, "%.2f \n", y); // menyimpan nilai f3(x) ke dalam file f3(x).txt
        fprintf(fp2, "%.2f \n", i); // menyimpan nilai x ke dalam file x.txt
    }
    // menutup file
    fclose(fp1); 
    fclose(fp2);
}