// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		: Selasa 03 Maret 2020


//KUIS 8 Menukar isi matriks baris atas menjadi baris bawah
//kolom kiri menjadi kolom kanan dengan diagonal matriks tetap

#include <stdio.h>
#include <time.h>

int matriks[10][10];
int i,j;
int temp;
int matriks2 [10][10];

//mengisi matriks dengan bilangan random antara -10 sampai 10
int main()
{

for (i=0;i<10;i+=1)
{
    for (j=0;j<10;j+=1)
    {
        matriks [i][j] = (-10 + (rand()% 20));
    }
}

//mengeluarkan output matriks awal dan mengisi matriks 2 dengan nilai
//sama dengan matriks awal
printf("MATRIKS AWAL\n\n");
for (i=0;i<10;i+=1)
{
    for (j=0;j<10;j+=1)
    {
        printf("%d\t",matriks [i][j]);
        matriks2 [i][j] = matriks [i][j];
    }
    printf("\n");
}

//mealkukan penukaran baris dan kolom

    for (j=1;j<9;j++)
    {
            matriks2 [9][j] = matriks [0][j];
            matriks2 [0][j] = matriks [9][j];
            matriks2 [j][9] = matriks [j][0];
            matriks2 [j][0] = matriks [j][9];
    }

    for (j=2;j<8;j++)
    {
            matriks2 [8][j] = matriks [1][j];
            matriks2 [1][j] = matriks [8][j];
            matriks2 [j][8] = matriks [j][1];
            matriks2 [j][1] = matriks [j][8];
    }

    for (j=3;j<7;j++)
    {
            matriks2 [7][j] = matriks [2][j];
            matriks2 [2][j] = matriks [7][j];
            matriks2 [j][7] = matriks [j][2];
            matriks2 [j][2] = matriks [j][7];
    }

    for (j=4;j<6;j++)
    {
            matriks2 [6][j] = matriks [3][j];
            matriks2 [3][j] = matriks [6][j];
            matriks2 [j][6] = matriks [j][3];
            matriks2 [j][3] = matriks [j][6];
    }

//menapilkan output matriks yang sudah diubah
printf("\n\n");
printf("MATRIKS SETELAH DITUKAR\n\n");
for (i=0;i<10;i+=1)
{
    for (j=0;j<10;j+=1)
    {
        printf("%d\t",matriks2 [i][j]);
    }
    printf("\n");
}

return 0;
}
