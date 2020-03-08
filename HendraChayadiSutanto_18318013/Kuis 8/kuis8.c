/*  EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 *  Tugas               :8
 *  Hari dan tanggal    :Minggu 08 Maret 2020
 *  Nama/NIM            :Hendra Chayadi Sutanto/18318013
 *  Nama file           :kuis8.c
 */



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    //deklarasi variabel dan array untuk matriks 
    //array yang digunakan untuk membuat matrik 10x10
    int A[10] [10];
    int B[10] [10];
    int x = 0;
    int y = 0;
    srand(time(0));
    printf("\n Matriks sebelum ditukar posisinya : \n");
    // Randomisasi nilai matriks 10x10 
    //nilai berkisar diantara -10 sampai 10
    for(x = 0; x < 10; x++)
    {
        for(y = 0; y < 10; y++)
        {
            A[x][y] = rand() % (10 + 1 + 10) - 10;
            printf("%3d ", A[x][y]);
        }
        printf("\n");
    }
    
    
    printf("\n");
    for(x = 0; x < 10; x++)
    {
        for(y = 0; y < 10; y++)
        {
            if(x <= 3 && y >= x + 1 && y <= 8-x)
            {
                B[9-x][y] = A[x][y];
            }
            else if(x >= 6 && y >= (9-x) + 1 && y <= x-1)
            {
                B[9-x][y] = A[x][y];
            }
            else if(y <= 3 && x >= y + 1 && x <= 8-y)
            {
                B[x][9-y] = A[x][y];
            }
            else if(y >= 6 && x >= (10-y) && x <= y-1)
            {
                B[x][9-y] = A[x][y];
            }
            else
            {
                B[x][y] = A[x][y];
            }
        }
    }
    
    // Menunnjukkan hasil dari fungsi relokasi matriks
    printf("\n Hasil setelah perpindahan posisi pada matriks : \n");
    for(x = 0; x < 10; x++)
    {
        for(y = 0; y < 10; y++)
        {
            printf("%3d ",B[x][y]);
        }
        printf("\n");
    }
}