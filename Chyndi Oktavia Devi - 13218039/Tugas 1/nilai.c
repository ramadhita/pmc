//Nama, nilai, indeks cari modus indeks, max, min, rata2 trus print nama yg dapet max sama min

//char Nama[5]={Mawar, Melati, Wisteria, Carnation, Lili};
//int Nilai[5]={67, 85, 85, 70, 60};
// char Indeks[5]={C, A, A, B, D};


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

struct Mahasiswa
{
      char Nama[5];
      int Nilai;
      char indeks;
};

char indeksA (int Nilai)

{
    char indeks;
    int i, maks;
    maks=5;
    for (i=0;i<=maks;i++)
    {
        if (Nilai>= 80)
            indeks = 'A';
        else if (Nilai >= 70)
            indeks = 'B';
        else if (Nilai >= 65)
            indeks = 'C';
        else if (Nilai >= 60)
            indeks = 'D';
        else
            indeks = 'E';
    }
    return indeks;
}


int nilai_max(struct Mahasiswa M[])
{

    int i, max, maks;
    max=-99;
    maks=5;
    for (i=0;i<maks;i++)
    {
        if(M[i].Nilai > max)
            max=M[i].Nilai;
    }
    return max;
}

int nilai_min(struct Mahasiswa M[])
{
    int i, min, maks;
    min=999;
    maks=5;
    for (i = 0; i<maks;i++)
    {

       if(M[i].Nilai < min)
            min=M[i].Nilai;
    }
    return min;
}



int main (void)
{
    int nilai_maks, nilai_minim;
    float Rata;
    int i;
    char indeks(int);
    struct Mahasiswa M[5];
    strcpy (M[0].Nama, "Mawar");
    M[0].Nilai = 67;

    strcpy (M[1].Nama, "Melati");
    M[1].Nilai = 85;

    strcpy (M[2].Nama, "Wisteria");
    M[2].Nilai = 85;

    strcpy (M[3].Nama, "Carnation");
    M[3].Nilai = 70;

    strcpy (M[4].Nama, "Lili");
    M[4].Nilai = 60;


    M[0].indeks=indeksA(M[0].Nilai);
    M[1].indeks=indeksA(M[1].Nilai);
    M[2].indeks=indeksA(M[2].Nilai);
    M[3].indeks=indeksA(M[3].Nilai);
    M[4].indeks=indeksA(M[4].Nilai);

    Rata=(M[0].Nilai + M[1].Nilai+ M[2].Nilai+ M[3].Nilai+ M[4].Nilai)/5;
    nilai_maks=nilai_max(M);
    nilai_minim=nilai_min(M);
    printf("Nilai maksimum adalah : %d \n ", nilai_maks);
    printf("Mahasiswa yg dapat nilai maks bernama \n ");
    for (i=0;i<5;i++)
    {
        if (nilai_maks==M[i].Nilai)
        {
            printf(" %s \n", M[i].Nama);
        }
    }
    printf("Nilai minimum adalah : %d \n", nilai_minim);
    printf("Mahasiswa yg dapat nilai minimum bernama\n ");
    for (i=0;i<5;i++)
    {
        if (nilai_minim==M[i].Nilai)
        {
            printf(" %s \n", M[i].Nama);
        }
    }
    printf("Nilai rata-rata Mahasiswa : %f \n", Rata);
    return 0;

};
