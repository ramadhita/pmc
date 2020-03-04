// Nama     : Agung Dwi Laksana
// NIM      : 13218034
// Program  : Menukar posisi elemen matriks berdasarkan kuadran

#include <stdio.h>

// Prototype fungsi yang digunakan
int getRand(void);
void cetak (int *a);
void tukar (int *a);

int main (void)
{
    // Deklarasi Variabel
    int a[10][10];
    int i, j;
    int temp;

    // Input nilai pada matriks
    for (i = 0; i < 10; i++) // baris
    {
        for (j = 0; j < 10; j++) // kolom
        {
            a[i][j] = getRand();
        }
    }

    // Cetak Matriks Mula-mula
    printf("Bentuk matriks Mula-mula :\n");
    cetak (a);
    printf("\n");

    // Tukar
    tukar(a);

    //Mencetak matriks yang sudah ditukar
    printf("Hasil matriks setelah elemen ditukar : \n");
    cetak (a);

    return 0;
}

// Fungsi Random [10, -10]
int getRand(void)
{
    // Variabel Local
    int  randValue; // dibatasi sampai 20

    // Logika
    randValue = rand()%21;
    randValue = randValue - 10;

    return randValue;
}

// Prosedur mencetak matriks
void cetak (int *a)
{
    // Variabel local
    int i, j;

    // Algoritma
    for (i = 0; i < 10; i++) // baris
    {
        for (j = 0; j < 10; j++) // kolom
        {
            if ((*((a + 10*i)+j)<0) && (*((a + 10*i) + j) != -10))
            {
                printf("  %d", *((a + 10*i)+j));
            } else if (*((a + 10*i) + j) == -10)
            {
                printf(" %d", *((a + 10*i)+j));
            } else if (*((a + 10*i) + j) == 10)
            {
                printf("  %d", *((a + 10*i)+j));
            } else
            {
                printf("   %d", *((a + 10*i)+j));
            }
        }
        printf("\n");
    }
}

// Prosedur Menukar Elemen Matriks
void tukar (int *a)
{
    // Variable Local
    int i, j, temp;

    // Algoritma
    for (i = 0; i < 10; i++) // baris
    {
        for (j = 0; j <= (8 - i); j++) // kolom
        {
            if ((i < 5)&&(j>i)) // kasus di daerah B
            {
                temp                = *((a + 10*i)+j);
                *((a + 10*i)+j)     = *((a + 10*(9-i))+j);
                *((a + 10*(9-i))+j) = temp;
            }

            if (j < i) // kasus di daerah A
            {
                temp                = *((a + 10*i)+j);
                *((a + 10*i)+j)     = *((a + 10*i)+ (9-j));
                *((a + 10*i)+(9-j)) = temp;
            }
        }
    }
}
