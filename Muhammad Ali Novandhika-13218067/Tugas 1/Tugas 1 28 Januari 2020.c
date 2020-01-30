/* Nama     :   Muhammad Ali Novandhika
*  NIM      :   13218067
*  Tanggal  :   28 Januari 2020
*  Tugas 1

Mencari nilai rata-rata, nilai maksimum, dan nilai minimum dari data yang diberikan
--------------------------------------------
|  No  |   Nama    |   Nilai   |   Indeks  |
--------------------------------------------
|   1  |   Mawar   |     67    |      C    |
|   2  |   Melati  |     85    |      A    |
|   3  |  Wisteria |     85    |      A    |
|   4  | Carnation |     70    |      B    |
|   5  |    Lili   |     60    |      D    |
--------------------------------------------
*/

#include <stdio.h>
#include <math.h>
#include <string.h>



struct DataMahasiswa{

    char Nama[9];
    int Nilai;
    char Indeks;
};

char indeksnilai (int nilai);
float rata2 (struct DataMahasiswa dd[4]);
float rata2 (struct DataMahasiswa dd[4])
{
    float rata,sum;
    sum=0;
    for (int i=0;i<5;i++){
        sum+=dd[i].Nilai;
    }
    rata=sum/5;
    return rata;
}

char indeksnilai (int nilai)
{
    char indeks;
    if (nilai>=80){indeks = 'A';}
    else
    {
        if (nilai>=70){indeks = 'B';}
        else
        {
            if (nilai>60){indeks = 'C';}
            else {indeks='D';}
        }
    }
    return indeks;
}
int main( ) {

    struct DataMahasiswa data[5];
    int minimum,maksimum,l,k;
    double rata_rata;
    strcpy( data[0].Nama, "Mawar");
    data[0].Nilai = 67;
    data[0].Indeks = indeksnilai(data[0].Nilai);

    strcpy( data[1].Nama, "Melati");
    data[1].Nilai = 85;
    data[1].Indeks = indeksnilai(data[1].Nilai);

    strcpy( data[2].Nama, "Wisteria");
    data[2].Nilai = 85;
    data[2].Indeks = indeksnilai(data[2].Nilai);

    strcpy( data[3].Nama, "Carnation");
    data[3].Nilai = 70;
    data[3].Indeks = indeksnilai(data[3].Nilai);

    strcpy( data[4].Nama, "Lili");
    data[4].Nilai = 60;
    data[4].Indeks = indeksnilai(data[4].Nilai);

    minimum=data[0].Nilai;
    maksimum=data[0].Nilai;
    l=0;
    k=0;
    for (int i=1;i<5;i++)
    {
        if(minimum>data[i].Nilai){minimum=data[i].Nilai;l=i;}
        if(maksimum<data[i].Nilai){maksimum=data[i].Nilai;k=i;}
    }
    rata_rata=rata2(data);
    printf("Pemegang nilai tertinggi di kelas adalah %s dengan nilai %d\n",data[k].Nama,maksimum);
    printf("Pemegang nilai terendah di kelas adalah %s dengan nilai %d\n",data[l].Nama,minimum);
    printf("Rata-rata nilai adalah %f",rata_rata);
    return 0;
}



