/* NIM: 13218021
Nama: Alzana Armaniar Farhani
Keterangan: Tugas 1*/

#include <stdio.h>

struct mahasiswa{
    char *nama;
    int nilai;
    char indeks;
};
void cekIndeks(struct mahasiswa m[5]);
void printModus(struct mahasiswa m[5]);
void printMax(struct mahasiswa m[5]);
void printMin(struct mahasiswa m[5]);
double findMean(struct mahasiswa m[5]);

int main(){
    struct mahasiswa M[5];
    double mean;
    M[0].nama = "Mawar";
    M[0].nilai = 67;
    M[1].nama = "Melati";
    M[1].nilai = 85;
    M[2].nama = "Wisteria";
    M[2].nilai = 85;
    M[3].nama = "Carnation";
    M[3].nilai = 70;
    M[4].nama = "Lili";
    M[4].nilai = 60;
    cekIndeks(M);
    printModus(M);
    printMin(M);
    printMax(M);
    mean= findMean(M);
    printf("\nRata-rata nilai adalah %.2lf", mean);
    return(0);
}

void cekIndeks(struct mahasiswa m[5]){
    int k;
    for (k=0;k<5;k+=1)
{
    if (m[k].nilai >= 85)
            m[k].indeks = 'A';
    else if (m[k].nilai >= 70)
            m[k].indeks = 'B';
    else if (m[k].nilai >= 65)
            m[k].indeks = 'C';
    else if (m[k].nilai >= 60)
            m[k].indeks = 'D';
    else
            m[k].indeks = 'E'; 
}
}

void printModus(struct mahasiswa m[5]){
    char modus;
    int j,k;
    int jumlah[5] = {0,0,0,0,0};
    int maks = 0;
    int i_modus = 0;
    for (k=0;k<5;k+=1){
        if (m[k].indeks == 'A') jumlah[0] += 1;         //jumlah indeks A
        else if (m[k].indeks == 'B') jumlah[1] += 1;    //jumlah indeks B
        else if (m[k].indeks == 'C') jumlah[2] += 1;    //jumlah indeks C
        else if (m[k].indeks == 'D') jumlah[3] += 1;    //jumlah indeks D
        else if (m[k].indeks == 'E') jumlah[4] += 1;    //jumlah indeks E
    }
    for (j=0;j<5;j+=1){
        if (jumlah[j] >= maks){
            maks = jumlah[j];
            i_modus = j;
         }
    }
    if (i_modus == 0) modus = 'A';
    else if (i_modus == 1) modus = 'B';
    else if (i_modus == 2) modus = 'C';
    else if (i_modus == 3) modus = 'D';
    else if (i_modus == 4) modus = 'E';
    printf("Modus dari indeks adalah %c", modus);
}

void printMax(struct mahasiswa m[5]){
    int max = m[0].nilai;
    int k,n;
    int x=0;
    char nama[10];
    for (k=0;k<5;k+=1){
        if (m[k].nilai >= max) {
            max = m[k].nilai;
            x = k;
        }
    }
    printf("\nMahasiswa dengan nilai maksimum adalah %s", m[x].nama);
    printf("(%d)", m[x].nilai);
}
void printMin(struct mahasiswa m[5]){
    int min = m[0].nilai;
    int k,n;
    int x=0;
    char nama[10];
    for (k=0;k<5;k+=1){
        if (m[k].nilai <= min) {
            min = m[k].nilai;
            x = k;
        }
    }
    printf("\nMahasiswa dengan nilai minimum adalah %s", m[x].nama);
    printf("(%d)", m[x].nilai);
}
double findMean(struct mahasiswa m[5]){
    double sum;
    int j;
    for (j=0; j<5; j+=1){
        sum = sum + m[j].nilai;
    }
    return sum/5;
}
