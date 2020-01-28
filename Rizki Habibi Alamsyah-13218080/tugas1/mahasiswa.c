/*  Nama    : Rizki Habibi Alamsyah
    NIM     : 13218080  */

#include<stdio.h>
#include"max.h"
#include"min.h"
#include"rataan.h"
#include"indeks.h"
#include"modus.h"

main()
{   /*Data Mahasiswa*/
    char nama_mahasiswa[5][10]={"Mawar","Melati","Wisteria","Carnation","Lili"};
    int nilai_mahasiswa[5]={67,85,85,70,60};
    char indeks_mahasiswa[5];

    /*Deklarasi Variabel*/
    int max,idxmax,min,idxmin;
    double rataan;
    char modus;

    /*Pemanggilan Fungsi*/
    nilai_max(nilai_mahasiswa,&max,&idxmax);
    nilai_min(nilai_mahasiswa,&min,&idxmin);
    rataan=nilai_rataan(nilai_mahasiswa);
    modus=modus_indeks(indeks_mahasiswa);

    /*Display Hasil*/
    printf("Nilai Maksimum = %d\n",max);
    printf("Nama Mahaiswa : %s\n\n",nama_mahasiswa[idxmax]);
    printf("Nilai Minimum = %d\n",min);
    printf("Nama Mahaiswa : %s\n\n",nama_mahasiswa[idxmin]);
    printf("Nilai Rata-Rata = %f\n\n",rataan);
    printf("Modus Indeks : %c\n",modus);
}
