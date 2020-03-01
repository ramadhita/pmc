// Nama : Adeline Kartika Tiku Putri
// NIM  : 13218081
// Quiz 5
// Membuat nilai data mahasiswa dan mencari nilai rata-rata dan mensorting data dengan nilai terbesar ke terkecil

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Untuk membuat kodingan lebih stabil
#define No(d) d.number
#define Nilai(d) d.nilai
#define Nama(d) d.nama
#define Nim(d) d.nim

// membuat tipe data baru bernama data berisi nomor, nim, nama, dan nilai mahasiswa
typedef struct {
    int number;
    int nim;
    char nama[30];
    int nilai;
} data;

// membuat tipe data baru bernama ArrData berisi array data sebanyak 10
typedef struct {
    data d[10];
} ArrData;

// membuat fungsi untuk mencari nilai rata-rata
float rata(ArrData tab){
    int i;
    float hasil = 0;

    // menjumlahkan semua nilai data mahasiwa
    for (i = 0; i < 10; i++){
        hasil += Nilai(tab.d[i]);
    }
    // membagi nilai data mahasiswa agar menghasilkan rata-rata
    hasil = hasil/10;
    
    return hasil;
}

int main(){
    int i, j;
    float rata2;
    ArrData tab;
    data tmp; // untuk menerima perpindahan data saat sorting

    // untuk mengisi nilai mahasiswa
    for (i = 0; i < 10; i++){
        Nilai(tab.d[i]) = rand() % 51 + 50; // membuat batas nilai dari 50 - 100 secara random
    }

    // untuk mengisi no. mahasiswa
    for (i = 0; i < 10; i++){
        No(tab.d[i]) = i + 1;
    }

    // untuk mengisi nim mahasiswa
    for (i = 0; i < 10; i++){
        Nim(tab.d[i]) = 13218001 + i;
    }
    
    // untuk mengisi nama mahasiswa
    strcpy(Nama(tab.d[0]), "Andrew"); 
    strcpy(Nama(tab.d[1]), "Bonny");
    strcpy(Nama(tab.d[2]), "Charles");
    strcpy(Nama(tab.d[3]), "Devina");
    strcpy(Nama(tab.d[4]), "Eduardo");
    strcpy(Nama(tab.d[5]), "Felicia");
    strcpy(Nama(tab.d[6]), "Gloria");
    strcpy(Nama(tab.d[7]), "Husky");
    strcpy(Nama(tab.d[8]), "Ignasius");
    strcpy(Nama(tab.d[9]), "Joker");
    
    // mengeprint nilai rata-rata mahasiswa
    rata2 = rata(tab);
    printf("Nilai rata-rata mahasiswa sebesar %.2f\n", rata2);

    // mendeklarasi file dan membuka file data mahasiswa
    FILE *fp1;
    fp1 = fopen("DataMahasiswa.csv", "w");

    FILE *fp2;
    fp2 = fopen("DataMahasiswaSort.csv", "w");

    // mengeprint ke file external
    fprintf(fp1, "Nilai rata-rata mahasiswa sebesar %.2f\n", rata2); // nilai rata-rata
    fprintf(fp1, "No.;NIM;Nama;Nilai\n");
    fprintf(fp2, "Nilai rata-rata mahasiswa sebesar %.2f\n", rata2); // nilai rata-rata
    fprintf(fp2, "No.;NIM;Nama;Nilai\n");

    // mengeprint data mahasiswa yang belom disorting ke file fp1
    printf("No.;NIM;Nama;Nilai\n");
    for (i = 0; i < 10; i++){
        printf("%d; %d; %s; %d\n", No(tab.d[i]), Nim(tab.d[i]), Nama(tab.d[i]), Nilai(tab.d[i])); // display hasil 
        fprintf(fp1, "%d; %d; %s; %d\n", No(tab.d[i]), Nim(tab.d[i]), Nama(tab.d[i]), Nilai(tab.d[i])); // memasukkan ke file external
    }

    printf("\n");

    // melakukan sorting data
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (Nilai(tab.d[i]) >= Nilai(tab.d[j])){ // ketika data lebih besar maka akan dilakukan perpindahan
                strcpy(tmp.nama,Nama(tab.d[i]));
                strcpy(Nama(tab.d[i]),Nama(tab.d[j]));
                strcpy(Nama(tab.d[j]),tmp.nama);

                tmp.nilai = Nilai(tab.d[i]);
                Nilai(tab.d[i]) = Nilai(tab.d[j]);
                Nilai(tab.d[j]) = tmp.nilai;

                tmp.nim = Nim(tab.d[i]);
                Nim(tab.d[i]) = Nim(tab.d[j]);
                Nim(tab.d[j]) = tmp.nim;
            }
        }
    }

    // mengeprint file data mahasiswa yang telah disorting ke file fp2
    printf("No.;NIM;Nama;Nilai\n");
    for (i = 0; i < 10; i++){
        printf("%d; %d; %s; %d\n", No(tab.d[i]), Nim(tab.d[i]), Nama(tab.d[i]), Nilai(tab.d[i])); // display hasil
        fprintf(fp2, "%d; %d; %s; %d\n", No(tab.d[i]), Nim(tab.d[i]), Nama(tab.d[i]), Nilai(tab.d[i])); // display hasil
    }

    // menutup file fp1 dan fp2
    fclose(fp1);
    fclose(fp2);

    return 0;
}
