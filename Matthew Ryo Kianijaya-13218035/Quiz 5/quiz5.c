/*  SOAL 1

    Buatlah struct dengan nilai random dan nama berbeda,
    sort dari nilai tertinggi ke terendah dan hitung rata-ratanya
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct Data {
    int n;          // nomor
    int nim;        // NIM
    char nama[255]; // nama
    int nilai;      // nilai
} Data;

void swap (Data *one, Data *two);

void main (){

    // Library
    Data arr[10]; // array of Data (10 numbers)
    double sum; // sum of grades
    double avg; // average
    FILE *f1;
    FILE *f2;

    // Algorithm

    // open files
    f1 = fopen("before.txt", "w");
    f2 = fopen("after.txt", "w");

    srand(time(NULL));

    fprintf(f1, "| No | NIM      | Nama    | Nilai |\n");
    fprintf(f1, "|---------------------------------|\n");
    fprintf(f2, "| No | NIM      | Nama    | Nilai |\n");
    fprintf(f2, "|---------------------------------|\n");

    // make data
    for (int i = 0; i < 10; i++){
        // insert numbering for Data
        arr[i].n = i + 1;
        // insert NIM with the last 3 numbers in random
        arr[i].nim = 13218000 + (rand() % (100 + 1 - 0) + 0);
        // insert name, concatenated with random number
        snprintf(arr[i].nama, sizeof(arr[i].nama), "Baba %2d", (rand() % (99 + 1 - 1) + 1));
        // insert random grade, ranging from 50-100
        arr[i].nilai = rand() % (100 + 1 - 50) + 50;

        // print to file
        fprintf(f1, "| %2d | %d | %s |  %3d  |\n", arr[i].n, arr[i].nim, arr[i].nama, arr[i].nilai);
    }

    // sort
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < (9-i); j++){
            if(arr[j].nilai < arr[j+1].nilai){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    // print to new file (after.txt)
    for(int i = 0; i < 10; i++){
        sum = sum + arr[i].nilai;
        fprintf(f2, "| %2d | %d | %s |  %3d  |\n", arr[i].n, arr[i].nim, arr[i].nama, arr[i].nilai);
    }

    // count grade average
    avg = sum/10;

    // print avg to after.txt
    fprintf(f2, "\nNilai rata-rata = %.2lf", avg);

    // close files
    fclose(f1);
    fclose(f2);
}

void swap (Data *one, Data *two){
        Data temp = *one;
        *one = *two;
        *two = temp;
}