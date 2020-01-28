/* Mode of Index (optional), Max & Min of Grade, and Average of Grade */

#include <stdio.h>
#include<string.h>

// Data type mahasiswa: 
struct Mahasiswa {
    char Nama[20];
    int Nilai;
    char Indeks[1];
};

// Main function
int main (){

    // LIBRARY
    struct Mahasiswa list[5];  // list of students
    int max;                   // max grade
    int min;                   // min grade
    float sum;                 // sum of grade
    float avg;                 // avg of grade

    // ALGORITHM

    // assign names and grades manually
    strcpy(list[0].Nama, "Mawar");
    list[0].Nilai = 67;
    strcpy(list[1].Nama, "Melati");
    list[1].Nilai = 85;
    strcpy(list[2].Nama, "Wisteria");
    list[2].Nilai = 85;
    strcpy(list[3].Nama, "Carnation");
    list[3].Nilai = 70;
    strcpy(list[4].Nama, "Lili");
    list[4].Nilai = 60;

    /* assign index using loop by categorizing them to A, B, C, or D
       depending on their grades */
    for(int i = 0; i<=4; i++){
        if (list[i].Nilai >= 85){
            list[i].Indeks[1] = 'A';
        } else if (list[i].Nilai >= 70 && list[i].Nilai < 85){
            list[i].Indeks[1] = 'B';
        } else if (list[i].Nilai > 60 && list[i].Nilai <70){
            list[i].Indeks[1] = 'C';
        } else {
            list[i].Indeks[1] = 'D';
        }
    }

    // look for max and min and their respective indices
    max = list[0].Nilai;
    min = list[0].Nilai;
    sum = list[0].Nilai;

    for(int i = 1; i <= 4; i++){
        sum = sum + list[i].Nilai;
        if(list[i].Nilai > max){
            max = list[i].Nilai;
        } else if (list[i].Nilai < min){
            min = list[i].Nilai;
        }
    }

    // count average
    avg = sum/5;

    // print max
    for (int i = 0; i <= 4; i++){
        if (list[i].Nilai == max){
            printf("Nilai maksimum: %d - %s\n\n", list[i].Nilai, list[i].Nama);
        } else if (list[i].Nilai == min){
            printf("Nilai minimum: %d - %s\n\n", list[i].Nilai, list[i].Nama);
        }
    }

    // print avg
    printf("Rata-rata nilai: %.1f\n", avg);

    return 0;
}

