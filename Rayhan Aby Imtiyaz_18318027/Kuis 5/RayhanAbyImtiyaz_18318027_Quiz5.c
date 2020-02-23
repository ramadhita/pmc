#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//Deklarasi struct kelas
typedef struct kelas {
    char nama[99];
    int
    no,
    nilai,
    nim;
} kelas;

int main() {
    //Deklarasi variabel
    struct kelas biomed[99];
    float sum;

    //Iterasi pengisian data dengan input nama oleh user, dan nilai yang digenerate secara random serta nim yang digenerate secara incremental
    for(int i=0; i <= 9; i++) {
        biomed[i].no = i + 1;
        gets(biomed[i].nama);
        //men-generate nilai random dengan seed yang bergantung tiap waktu, jadi nilai yang dikeluarkan berubah tiap kali program dijalankan
        srand(time(0));
        biomed[i].nilai = (rand() % (50 + 1)) + 50; // Nilai random yang dikeluarkan akan memiliki range 50-100
        biomed[i].nim = 18318001 + i ;
    }

    //Insialisasi file eksternal
    FILE *fp_kelas;
    fp_kelas = fopen("Data Kelas.txt","w+");

    //Iterasi menuliskan data (sebelum di sort) ke file eksternal
    for(int i=0; i <= 9; i++) {
        fprintf(fp_kelas,"%d,%s,%d,%d\n",biomed[i].no,biomed[i].nama,biomed[i].nim,biomed[i].nilai);
        sum = sum + biomed[i].nilai;
    }
    float avg = sum/10;
    
    fprintf(fp_kelas,"Rata-Rata = %f\n", avg    );

    //Iterasi menuliskan data (sesudah di sort) ke file eksternal
    for(int i = 0; i <= 9 ; i++) {
        for(int j = 0; j <= 9 ; j++) {
            //Proses sorting
            if (biomed[j].nilai < biomed[j+1].nilai) {
                kelas temp;
                temp = biomed[j];
                biomed[j] = biomed[j+1];
                biomed[j+1] = temp;
            }
        }
    }
    fprintf(fp_kelas,"\nSetelah proses sorting\n");
    for(int i=0; i <= 9; i++) {
        fprintf(fp_kelas,"%d,%s,%d,%d\n",i+1,biomed[i].nama,biomed[i].nim,biomed[i].nilai);
    }

    fclose(fp_kelas); 
}