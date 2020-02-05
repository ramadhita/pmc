/* Kuis 3 Selasa, 28 Januari 2020

Nama : Dorothea Claresta P
NIM  : 18318007

Buat struct terdiri atas Nama, Nilai, Indeks
Kemudian cari nilai max dan namanya, min dan namanya, rata-rata

Nama        Nilai   Indeks
Mawar       67      C
Melati      85      A
Wisteria    85      A
Carnation   70      B
Lili        60      D

*/

#include <stdio.h>
#include <string.h>

struct daftar_mahasiswa
{
    char nama[20];
    int nilai;
    char indeks;
};

char penentuan_indeks(int nilai){
    if ((nilai > 80 ) && (nilai <= 100)){
        return 'A';
    }
    else if ((nilai >= 70) && (nilai <= 80 )){
        return 'B';
    }
    else if ((nilai > 60) && (nilai < 70)){
        return 'C';
    }
    else if ((nilai > 50) && (nilai <= 60)){
        return 'D';
    }
    else
    {
        return 'E';
    }
    
}

int main()
{
    int i, max, min = 0;
    float rerata, total = 0;
    struct daftar_mahasiswa mahasiswa[5];

    for (i=0; i<5; i++){
        // memasukan input nama dan nilai mahasiswa
        printf("Nama mahasiswa %d = ", i+1);
        scanf("%s", mahasiswa[i].nama);
        printf("Nilai mahasiswa %d = ", i+1);
        scanf("%d", &mahasiswa[i].nilai);
    
        // menentukan indeks
        mahasiswa[i].indeks = penentuan_indeks(mahasiswa[i].nilai);
        printf("Indeks mahasiswa %d = %c\n", i+1, mahasiswa[i].indeks);

        // mencari nilai maksimum
        if(mahasiswa[max].nilai < mahasiswa[i].nilai)
            max = i;
        
        //mencari nilai minimum
        if(mahasiswa[min].nilai > mahasiswa[i].nilai)
            min = i;

        // mencari total nilai
        total += mahasiswa[i].nilai;
    } 

    // mencari nilai rata-rata
    rerata = total/5;

    // menampilkan nilai tertinggi, nilai terendah, dan rata-rata nilai
    printf("\nNilai tertinggi = %d\n", mahasiswa[max].nilai);
    printf("Mahasiswa yang mendapat nilai tertinggi = %s\n", mahasiswa[max].nama);
    printf("Nilai terendah = %d\n", mahasiswa[min].nilai);
    printf("Mahasiswa yang mendapat nilai terendah = %s\n", mahasiswa[min].nama);
    printf("Rata-rata nilai = %.2f\n", rerata);
    
    return 0;
}
