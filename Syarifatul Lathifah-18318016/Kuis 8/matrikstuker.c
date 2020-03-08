#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, temp, A[10][10];                      //inisialisasi variabel

	printf("Matriks awal : \n");
    for (x=0; x<=9; x++)                            //iterate baris
    {
        for (y=0; y<=9 ; y++)                       //iterate kolom
        {
            A[x][y] = (rand()%(21)-10);             //matriks A berisi nilai random dari -10 hingga 10

            printf("%d\t", A[x][y]);                //print matriks awal

            if (y == 9)                             //ketika kolom sudah mencapai indeks 9
            {
                printf("\n");                       //maka enter
            }

        }
    }

    for (x=0; x<=4; x++)                            //iterate baris 1-5
    {
        for (y=x+1; y<=(8-x); y++)                  //iterate kolom
        {
            temp = A[x][y];                         //temp untuk menyimpan nilai sementara dari matriks
            A[x][y] = A[9-x][y];                    //tukar nilai atas dengan bawah
            A[9-x][y] = temp;
        }
    }

    for (x=0; x<=4; x++)                            //iterate baris 1-5
    {
        for (y=x+1; y<=(8-x); y++)                  //iterate kolom
        {
            temp = A[y][x];                         //temp untuk menyimpan nilai sementara dari matriks
            A[y][x] = A[y][9-x];                    //tukar nilai kiri dengan kanan
            A[y][9-x] = temp;
        }
    }

    printf("\nMatriks telah diswap :\n");

    for (x=0; x<=9; x++)                            //iterate baris 1-9
    {
        for (y=0; y<=9 ; y++)                       //iterate kolom 1-9
        {
            printf("%d\t", A[x][y]);                //print matriks yang berhasil diswap
        }

        printf("\n");
    }
}
