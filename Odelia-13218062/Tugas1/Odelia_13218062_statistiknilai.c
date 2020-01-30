/*
No  Nama        Nilai   Indeks      Indeks
1   Mawar       67      C           A >= 80
2   Melati      85      A           70 <= B < 80
3   Wisteria    85      A           60 < C < 70
4   Carnation   70      B           50 <= D <= 60
5   Lili        60      D           E < 50
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
struct nilai_mhsw
{
    char *nama;
    double nilai;
    char indeks;

};

void nilai_max (struct nilai_mhsw nmax[5]) //mencari nilai maksimum
{
    int i, max;
    char *namamax;

    max = nmax[0].nilai;
    for (i=1; i<5; i++)
    {
        if (nmax[i].nilai > max) //melakukan pembandingan nilai dan menyimpan nilai yang lebih besar
        {
            max = nmax[i].nilai;
        }
    }    
    printf ("Nilai maksimum: %d\n", max);
    for(i=0; i<5; i++) //looping untuk memastikan setiap yang memiliki nilai max dapat menjadi output
    {
        if(nmax[i].nilai == max)
        {
            printf ("Nama dengan nilai maksimum : %s\n", nmax[i].nama);
        }
    }
}

void nilai_min (struct nilai_mhsw nmin[5])
{
    int i, min;
    min = nmin[0].nilai;
    for (i=0; i<5; i++)
    {
        if (min > nmin[i].nilai) //melakukan pembandingan nilai dan menyimpan nilai yang lebih kecil
        {
            min = nmin[i].nilai;
        }
    }
    printf ("Nilai Minimum: %d\n", min);

    for(i=0; i<5; i++)
    {
        if(nmin[i].nilai == min) //looping untuk memastikan setiap yang memiliki nilai min dapat menjadi output
        {
            printf ("Nama dengan nilai minimum : %s\n", nmin[i].nama);
        }
    }
}

void data_lengkap (struct nilai_mhsw dataa[5])
{
    int i;
    float sum, average;

    for (i=0; i<5; i++) //menentukan indeks sesuai range
    {
        if (dataa[i].nilai >= 80)
        {
            dataa[i].indeks = 'A';
        }
        else if ((70 <= dataa[i].nilai) && (dataa[i].nilai<80))
        {
            dataa[i].indeks = 'B';
        }
        else if ((60 < dataa[i].nilai) && (dataa[i].nilai < 70))
        {
            dataa[i].indeks = 'C';
        }
        else if ((50 <= dataa[i].nilai) && (dataa[i].nilai <= 60))
        {
            dataa[i].indeks = 'D';
        }
        else
        {
            dataa[i].indeks = 'E';
        }
    }

    sum = 0;
    for (i=0; i<5; i++)
    {
        sum = sum + dataa[i].nilai; //menghitung nilai rata-rata
    }
    average = sum/5;

    printf ("Nilai Rata-rata: %f\n", average);
}

int main(){
    struct nilai_mhsw dataa[5];

    dataa[0].nama = "mawar";
    dataa[0].nilai = 67;

    dataa[1].nama = "melati";
    dataa[1].nilai = 85;

    dataa[2].nama = "wisteria";
    dataa[2].nilai = 85;

    dataa[3].nama = "carnation";
    dataa[3].nilai = 70;

    dataa[4].nama = "lili";
    dataa[4].nilai = 60;

    data_lengkap(dataa);
    nilai_min(dataa);
    nilai_max(dataa);
    return 0;
}