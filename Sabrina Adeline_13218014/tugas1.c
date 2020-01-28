/* Sabrina Adeline Lukita 13218014
Tugas 3*/

#include <stdio.h>
#include <string.h>

//membuat struct
typedef struct {
    char *Nama[10];
    int Nilai;
    char *Indeks;
} data;

typedef struct {
    data d[5];
}ArrayData;

//fungsi getIndeks untuk mencari indeks berdasarkan nilai setiap anak
char getIndeks (int nilai){
    char hasil;
    if (nilai >= 80){
        hasil = 'A';
    }else if ((nilai >= 70) && (nilai < 80)){
        hasil = 'B';
    }else if ((nilai >= 65) && (nilai < 70)){
        hasil = 'C';
    }else{
        hasil = 'D';}
    return hasil;
}

//fungsi getMax mencari nilai maksimum dari ArrayData nilai
int getMax (ArrayData nilai){
    int i, Nmax;
    Nmax = 0;
    for (i = 0; i < 5; i++){
        if (nilai.d[i].Nilai > Nmax){
            Nmax = nilai.d[i].Nilai;}
    }
    return Nmax;
}

//fungsi getMin mencari nilai minimum dari ArrayData nilai
int getMin (ArrayData nilai){
    int i, Nmin;
    Nmin = 100;
    for (i = 0; i < 5; i++){
        if (nilai.d[i].Nilai < Nmin){
            Nmin = nilai.d[i].Nilai;}
    }
    return Nmin;
}

//fungsi getMean mencari rata-rata nilai siswa
float getMean (ArrayData nilai){
    int i;
    float jumlah;
    float rata;
    jumlah = 0;
    for (i = 0; i < 5; i++){
        jumlah = jumlah + nilai.d[i].Nilai;
    }
    rata = jumlah / 5 ;
    return rata;
}

int main()
{
    ArrayData tab;
    int maks;
    int minn;
    int i,j;
    float mean;
    char modus;
    int count;

    //memeasukkan nama, nilai ke dalam data
    strcpy(tab.d[0].Nama, "Mawar");
    strcpy(tab.d[1].Nama, "Melati");
    strcpy(tab.d[2].Nama, "Wisteria");
    strcpy(tab.d[3].Nama, "Cornation");
    strcpy(tab.d[4].Nama, "Lili");

    tab.d[0].Nilai = 67;
    tab.d[1].Nilai = 85;
    tab.d[2].Nilai = 85;
    tab.d[3].Nilai = 70;
    tab.d[4].Nilai = 60;

    tab.d[0].Indeks = getIndeks(tab.d[0].Nilai);
    printf("Nama 1 = %s\n", tab.d[0].Nama);
    printf("Nilai 1 = %d\n", tab.d[0].Nilai);
    printf("Indeks 1 = %c\n", tab.d[0].Indeks);

    tab.d[1].Indeks = getIndeks(tab.d[1].Nilai);
    printf("Nama 2 = %s\n", tab.d[1].Nama);
    printf("Nilai 2 = %d\n", tab.d[1].Nilai);
    printf("Indeks 2 = %c\n", tab.d[1].Indeks);

    tab.d[2].Indeks = getIndeks(tab.d[2].Nilai);
    printf("Nama 3 = %s\n", tab.d[2].Nama);
    printf("Nilai 3 = %d\n", tab.d[2].Nilai);
    printf("Indeks 3 = %c\n", tab.d[2].Indeks);

    tab.d[3].Indeks = getIndeks(tab.d[3].Nilai);
    printf("Nama 4 = %s\n", tab.d[3].Nama);
    printf("Nilai 4 = %d\n", tab.d[3].Nilai);
    printf("Indeks 4 = %c\n", tab.d[3].Indeks);

    tab.d[4].Indeks = getIndeks(tab.d[4].Nilai);
    printf("Nama 5 = %s\n", tab.d[4].Nama);
    printf("Nilai 5 = %d\n", tab.d[4].Nilai);
    printf("Indeks 5 = %c\n", tab.d[4].Indeks);

    //print nilai maksimum dan nama siswa
    maks = getMax(tab);
    printf("nilai maksimum = %d\n", maks);
    for (i = 0; i < 5; i++){
        if (tab.d[i].Nilai == maks){
            printf("%s\n", tab.d[i].Nama);
        }
    }

    //print nilai minimum dan nama siswa
    minn = getMin(tab);
    printf("nilai minimum = %d\n", minn);
    for (i = 0; i < 5; i++){
        if (tab.d[i].Nilai == minn){
            printf("%s\n", tab.d[i].Nama);
        }
    }

    //print rata-rata
    mean = getMean(tab);
    printf("rata-rata nilai adalah %.3f\n", mean);

    //modus
    count = 0;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (tab.d[j].Indeks == tab.d[j+1].Indeks){
            j = j + 1;
            count = count + 1;
            }
        }
        if (count > 1){
            modus = tab.d[i].Indeks;
        }
    }

    printf("modus adalah %c\n", modus);
    // hasil modus masih salah

    return 0;
}
