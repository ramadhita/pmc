// Athaya Syaqra - 18318021

#include <stdio.h>
#include <stdlib.h>

int A[10][10]; // deklarasi matriks A dengan ukuran 10 x 10
int i, j, a; // deklarasi variabel


int main()
{
    for(i=0; i<10; i++) // baris matriks
    {
        for(j=0; j<10; j++) // kolom matriks
        {
            A[i][j] = (rand() % 21) - 10; // pengisian matriks dengan fungsi angka random
        }
    }
    
    printf("Matriks awal\n");
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf(" %d ", A[i][j]); // output matriks awal berdasarkan angka random
        }
        printf("\n");
    }

    for(i=0; i<5; i++)
    {
        for(j=i; j<(9-i); j++) 
        {
            if(j!=i) // kondisi ketika j tidak sama dengan i
            {
                a = A[9-i][j]; 
                A[9-i][j] = A[i][j]; // swap baris matriks dengan matriks awal
                A[i][j] = a;
            }
        }
    }

    for(j=0; j<5; j++)
    {
        for(i=j; i<(9-j); i++)
        {
            if (i!=j) // kondisi ketika i tidak sama dengan j
            {
                a = A[i][9-j];
                A[i][9-j] = A[i][j]; // swap kolom matriks dengan matriks awal
                A[i][j] = a;
            }
        }
    }

    printf("Matriks akhir\n");
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf(" %d ", A[i][j]); // output matriks akhir
        }
        printf("\n");

    }
}