/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

struct mahasiswa {
    char nama[10];
    int nilai;
    char indeks;
};

void cariIndeks( int nilai, char *indeks );
int cariMax( struct mahasiswa dataMahasiswa[5] );
int cariMin( struct mahasiswa dataMahasiswa[5] );
double cariRata( struct mahasiswa dataMahasiswa[5] );
char cariModus( struct mahasiswa dataMahasiswa[5] );

int main(void)
{
    struct mahasiswa dataMahasiswa[5];

    strcpy(dataMahasiswa[0].nama , "Mawar");
    dataMahasiswa[0].nilai = 67;
    strcpy(dataMahasiswa[1].nama , "Melati");
    dataMahasiswa[1].nilai = 85;
    strcpy(dataMahasiswa[2].nama , "Wisteria");
    dataMahasiswa[2].nilai = 85;
    strcpy(dataMahasiswa[3].nama , "Carnation");
    dataMahasiswa[3].nilai = 70;
    strcpy(dataMahasiswa[4].nama , "Lili");
    dataMahasiswa[4].nilai = 60;

    for (int i=0; i<5; i++) {
        cariIndeks( dataMahasiswa[i].nilai , &dataMahasiswa[i].indeks );
    }

    printf("\n  NO. \tNAMA    \tNILAI \tINDEKS\n");
    for (int i=0; i<5; i++) {
        printf("    %d \t%s    \t%d \t%c\n", i+1, dataMahasiswa[i].nama, dataMahasiswa[i].nilai, dataMahasiswa[i].indeks);
    }

    printf("\nNilai tertinggi mahasiswa adalah %d \n", cariMax(dataMahasiswa));
    printf("Nilai terendah mahasiswa adalah %d \n", cariMin(dataMahasiswa));
    printf("Nilai rata-rata mahasiswa adalah %.3f \n", cariRata(dataMahasiswa));
    printf("Indeks nilai paling banyak adalah %c\n", cariModus(dataMahasiswa));

    return 0;
}

// Mencari indeks mahasiswa dari kriteria rentang nilai
void cariIndeks( int nilai, char *indeks )
{
    if (nilai >= 80) {
        *indeks = 'A';
    }
    else if (nilai < 80 && nilai >= 70) {
        *indeks = 'B';
    }
    else if (nilai < 70 && nilai > 60) {
        *indeks = 'C';
    }
    else {
        *indeks = 'D';
    }
}

// Mencari nilai tertinggi yang diraih oleh sekelompok mahasiswa
int cariMax(struct mahasiswa dataMahasiswa[5] )
{
    int maxNilai = dataMahasiswa[0].nilai;
    for (int i=0; i<5; i++) {
        if (dataMahasiswa[i].nilai > maxNilai) {
            maxNilai = dataMahasiswa[i].nilai;
        }
    }
    return maxNilai;
}

//Mencari nilai terendah yang diraih oleh sekelompok mahasiswa
int cariMin(struct mahasiswa dataMahasiswa[5] )
{
    int minNilai = dataMahasiswa[0].nilai;
    for (int i=0; i<5; i++) {
        if (dataMahasiswa[i].nilai < minNilai) {
            minNilai = dataMahasiswa[i].nilai;
        }
    }
    return minNilai;
}

// Mencari nilai rata-rata sekelompok mahasiswa
double cariRata( struct mahasiswa dataMahasiswa[5] )
{
    int count = 0;
    int sum = 0;
    for (int i=0; i<5; i++) {
        sum = sum + dataMahasiswa[i].nilai;
        count++;
    }
    return (sum/count);
}

// Mencari indeks nilai terbanyak yang diraih oleh sekelompok mahasiswa 
char cariModus( struct mahasiswa dataMahasiswa[5] )
{
    struct {
        char idx;
        int count;
    } arrIndeks[4];

    arrIndeks[0].idx = 'A';
    arrIndeks[1].idx = 'B';
    arrIndeks[2].idx = 'C';
    arrIndeks[3].idx = 'D';
    arrIndeks[0].count = 0;
    arrIndeks[1].count = 0;
    arrIndeks[2].count = 0;
    arrIndeks[3].count = 0;

    for (int i=0; i<5; i++) {
        for (int j=0; j<4; j++) {
            if (dataMahasiswa[i].indeks = dataMahasiswa[i+1].indeks) {
                arrIndeks[j].count = arrIndeks[j].count + 1;
            }
        }
    }
    
    int modus = 0;
    int idxArr;
    for (int j=0; j<4; j++) {
        if (arrIndeks[j].count > modus) {
            idxArr = j;
            modus = arrIndeks[j].count;
        }
    }
    
    return arrIndeks[idxArr].idx;
}