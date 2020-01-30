// Adeline Kartika (13218081)
// Tugas 1

#include <stdio.h>
#include <string.h>

#define Nilai(d) d.nilai
#define Nama(d) d.nama
#define Indeks(d) d.indeks

/* Cari modus, max, min, rata-rata */

typedef struct{
    char nama[10];
    float nilai;
    char indeks;
}data;

typedef struct{
    data d[5];
}ArrData;

// function mengubah nilai menjadi indeks
char converter(float A){
    char result;
    if (A >= 85){
        result = 'A';
    }
    else if (A >= 70 && A <= 84){
        result = 'B';
    }
    else if (A >= 65 && A <= 69){
        result = 'C';
    }
    else {
        result = 'D';
    }
    return result;
}

// function mencari nilai maksimum array of data
int Max(ArrData tab){
    int maksimal = 0;
    int i;
    for (i = 0; i<5; i++){
        if (Nilai(tab.d[i]) > maksimal){
            maksimal = Nilai(tab.d[i]);
        }
    }
    return maksimal;
}

// function mencari nilai minimum array of data
int Min(ArrData tab){
    int minimum = 100;
    int i;
    for (i = 0; i<5; i++){
        if (Nilai(tab.d[i]) < minimum){
            minimum = Nilai(tab.d[i]);
        }
    }
    return minimum;
}

// function mencari nilai rata-rata array of data
float Rata2(ArrData tab){
    float rata = 0;
    int i;
    for (i = 0; i<5; i++){
        rata = rata + (Nilai(tab.d[i]));
    }
    rata = rata/5;
    return rata;
}
/*
int MaxModus(int tab){
    int maksimal = 0;
    int nilai = 0;
    int i;
    for (i = 0; i<5; i++){
        if (tab[i] > maksimal){
            maksimal = tab[i];
            nilai = i;
        }
    }
    return nilai;
}
*/
int main(){
    int i; 
    int max; // variabel nilai maksimum
    int min; // variabel nilai minimum
    float rata; // variabel nilai rata-rata
    ArrData tab; // Array of Data
    int hitung[4]; // Array untuk menyimpan jumlah masing-masing indeks A, B, C, D
    int modus_angka; // 

    // Memasukkan data yang diberikan ke dalam array of data
    strcpy(Nama(tab.d[0]), "Mawar");
    Nilai(tab.d[0]) = 67;
    strcpy(Nama(tab.d[1]), "Melati");
    Nilai(tab.d[1]) = 85;
    strcpy(Nama(tab.d[2]), "Wisteria");
    Nilai(tab.d[2]) = 85;
    strcpy(Nama(tab.d[3]), "Carnation");
    Nilai(tab.d[3]) = 70;
    strcpy(Nama(tab.d[4]), "Lili");
    Nilai(tab.d[4]) = 60;

    // Menentukan indeks dan memasukkannya kedalam array of data
    for (i = 0; i<5; i++){
        Indeks(tab.d[i]) = converter(Nilai(tab.d[i]));
    }
    
    // Modus Indeks
    //membuat semua isi array of hitung bernilai 0
    for (i = 0; i<4; i++){ 
        hitung[i] = 0;
    }

    // Menghitung jumlah masing-masing indeks A, B, C, D dan dimasukkan kedalam array of hitung
    for (i = 0; i<5; i++){
        if (Indeks(tab.d[i]) == 'A'){
            hitung[0] = hitung[0] + 1;
        }
        else if (Indeks(tab.d[i]) == 'B'){
            hitung[1] = hitung[1] + 1;
        }
        else if (Indeks(tab.d[i]) == 'C'){
            hitung[2] = hitung[2] + 1;
        }
        else if (Indeks(tab.d[i]) == 'D'){
            hitung[3] = hitung[3] + 1;
        }
    }

    // Menghitung nilai maksimum data modus
    int maxmodus = 0; // nilai maksimum modus
    int nilaimodus = 0; // mencatat i modus
    for(i = 0; i<4; i++){
        if (hitung[i] > maxmodus){
            maxmodus = hitung[i];
            nilaimodus = i;
        }
    }

    // Menentukan indeks modus dari i yang diperoleh
    char akhirmodus;
    if (nilaimodus == 0){
        akhirmodus = 'A';
    }
    else if (nilaimodus == 1){
        akhirmodus = 'B';
    }
    else if (nilaimodus == 2){
        akhirmodus = 'C';
    }
    else if (nilaimodus == 3){
        akhirmodus = 'D';
    }
    printf("===== Nilai Modus Indeks =====\n");
    printf("Indeks termodus adalah indeks %c\n", akhirmodus);

    // Max
    printf("\n");
    printf("===== Nilai Maksimum =====\n");
    max = Max(tab);
    for (i = 0; i<5; i++){
        if (Nilai(tab.d[i]) == max){
            printf("Nilai maksimal sebesar %d diraih oleh %s\n", max, tab.d[i].nama);
        }
    }
    
    // Min
    printf("\n");
    printf("===== Nilai Minimum =====\n");
    min = Min(tab);
    for (i = 0; i<5; i++){
        if (Nilai(tab.d[i]) == min){
            printf("Nilai minimum sebesar %d diraih oleh %s\n", min, tab.d[i].nama);
        }
    } 

    // Rata-Rata
    printf("\n");
    printf("===== Nilai Rata-Rata =====\n");
    rata = Rata2(tab);
    printf("Nilai rata-rata sebesar %.1f\n", rata);

    return 0;
}