#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

int main()
{
    struct Siswa Daftar_Nilai[5];
    /*Isi Daftar Nilai*/
    strcpy(Daftar_Nilai[0].nama, "Mawar");
    Daftar_Nilai[0].nilai = 67;
    strcpy(Daftar_Nilai[1].nama, "Melati");
    Daftar_Nilai[1].nilai = 85;
    strcpy(Daftar_Nilai[2].nama, "Wisteria");
    Daftar_Nilai[2].nilai = 85;
    strcpy(Daftar_Nilai[3].nama, "Carnation");
    Daftar_Nilai[3].nilai = 70;
    strcpy(Daftar_Nilai[4].nama, "Lili");
    Daftar_Nilai[4].nilai = 60;
    for (int i=0;i<=4;i++)
    {    /*Isi Array*/

        if (Daftar_Nilai[i].nilai>=80)
        {
            Daftar_Nilai[i].indeks='A';
        }
        else if ((Daftar_Nilai[i].nilai>=75) && (Daftar_Nilai[i].nilai<80))
        {
            Daftar_Nilai[i].indeks='AB';
        }
         else if ((Daftar_Nilai[i].nilai>=70) && (Daftar_Nilai[i].nilai<75))
        {
            Daftar_Nilai[i].indeks='B';
        }
         else if ((Daftar_Nilai[i].nilai>=65) && (Daftar_Nilai[i].nilai<70))
        {
            Daftar_Nilai[i].indeks='BC';
        }
         else if ((Daftar_Nilai[i].nilai>=61 && Daftar_Nilai[i].nilai<65))
        {
            Daftar_Nilai[i].indeks='C';
        }
         else if ((Daftar_Nilai[i].nilai>=55 && Daftar_Nilai[i].nilai<61))
        {
            Daftar_Nilai[i].indeks='D';
        }
        else
        {
             Daftar_Nilai[i].indeks='E';
        }
    }
    /*Diproses*/
    float max;
    max = 0;
    float min;
    min = 101;
    float Jumlah;
    Jumlah = 0;
    float Rata2;

    for (int i=0;i<=4;i++)
    {
        if (Daftar_Nilai[i].nilai>max)
        {
            max=Daftar_Nilai[i].nilai;

        }
        if (Daftar_Nilai[i].nilai<min)
        {
            min=Daftar_Nilai[i].nilai;

        }
        Jumlah = Daftar_Nilai[i].nilai + Jumlah;

    }
    printf("Indeks modus adalah: %c \n",indeks_modus(Daftar_Nilai));
    printf("\n");
    /*max*/
    printf("Nilai max: %.0f \n",max);
    for (int i=1;i<=4;i++)
    {
        if (Daftar_Nilai[i].nilai == max)
        {
            printf("%s  \n",Daftar_Nilai[i].nama);
        }
    }
    printf("\n");
    /*min*/
    printf("Nilai min: %.0f \n",min);
    for (int i=1;i<=4;i++)
    {
        if (Daftar_Nilai[i].nilai == min)
        {
            printf("%s  \n",Daftar_Nilai[i].nama);
        }
    }
    printf("\n");
    /*Rata*/
    Rata2 = Jumlah/5;
    printf("Rata rata: %.2f",Rata2);
    return 0;
}
