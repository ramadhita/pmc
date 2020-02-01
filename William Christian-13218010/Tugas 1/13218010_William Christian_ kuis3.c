#include <stdio.h>
#include <stdlib.h>
// Global Variable
struct student {
        int no;
        char nama[15];
        int nilai;
        char indeks;
    };

struct student data[5];

int imax;
int imin;
float mean;
char ind_mod;

// Determining Mean, Max, Min function
void minmaxmean(struct student data[])
{
        // inisialisasi
        int i;
        int min;
        int max;
        min = data[0].nilai;
        max = data[0].nilai;
        for (i = 0; i < 5; i++){
            if (data[i].nilai >= max){
                max = data[i].nilai;
                imax = i;
                }
            if (data[i].nilai <= min){
                min = data[i].nilai;
                imin = i;}
            mean = mean + data[i].nilai;}
}

// Determining Index Modus Function
void modus(struct student data[]){

    // initialization
    int i ;
    int count_A, count_B, count_C, count_D, count_E;
    count_A = 0;
    count_B = 0;
    count_C = 0;
    count_D = 0;
    count_E = 0;
    for (i = 0; i < 5; i++){
            if (data[i].indeks == 'A'){
                count_A += 1;}
            if (data[i].indeks == 'B'){
                count_B += 1;}
            if (data[i].indeks == 'C'){
                count_C += 1;}
            if (data[i].indeks == 'D'){
                count_D += 1;}
            if (data[i].indeks == 'E'){
                count_E += 1;}
        }
    if ((count_A > count_B) && (count_A > count_C) && (count_A> count_D) && (count_A > count_E)) {
        ind_mod = 'A';
    }
    if ((count_B > count_A) && (count_B> count_C) && (count_B> count_D) && (count_B > count_E)) {
        ind_mod = 'B';
    }
    if ((count_C > count_B) && (count_C> count_A) && (count_C> count_D) && (count_C > count_E)) {
        ind_mod = 'C';
    }
    if ((count_D > count_B) && (count_D> count_C) && (count_D> count_A) && (count_D > count_E)) {
        ind_mod = 'D';
    }
    if ((count_E > count_B) && (count_E> count_C) && (count_E> count_D) && (count_E > count_A)) {
        ind_mod = 'E';
    }

}

// Main Program
void main (){
// Mengisi nomor
int nomor = 1;
for (nomor = 1; nomor < 6; nomor ++){
    data[nomor-1].no = nomor;}
// Mengisi Nama
strcpy(data[0].nama, "Mawar");
strcpy(data[1].nama, "Melati");
strcpy(data[2].nama, "Wisteria");
strcpy(data[3].nama, "Carnation");
strcpy(data[4].nama, "Lili");

// Mengisi Nilai
data[0].nilai = 67;
data[1].nilai = 85;
data[2].nilai = 85;
data[3].nilai = 70;
data[4].nilai = 60;
// Mengisi Index
data[0].indeks = 'C';
data[1].indeks = 'A';
data[2].indeks = 'A';
data[3].indeks = 'B';
data[4].indeks = 'D';
// calling minmaxmean function
minmaxmean(data);
// output
int j;
printf("Max :\n");
for (j = 0; j < 5; j++){
        if (data[j].nilai == data[imax].nilai){
            printf("%s %d\n", data[j].nama, data[j].nilai);
        }
}
printf("Min:\n%s %d\n", data[imin].nama, data[imin].nilai);
printf("Mean : %f\n", mean / 5);
// calling modus function
modus(data);
// output
printf("Modus Index : %c", ind_mod);
}


