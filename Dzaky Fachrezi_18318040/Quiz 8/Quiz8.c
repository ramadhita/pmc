// Dzaky Fachrezi - 18318040
// Quiz 8
/* Deskripsi : Membuat matriks 10x10 dengan fungsi random, membentuk segmen 4 buah
			   dengan membentuk dua buah diagonal saling bersilangan, lalu mencetak
			   matriks 10x10 yang elemennya telah diswap silang (atas-bawah, kiri-kanan)
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int A[10][10]; // Deklarasi matriks
	int i,j; // Deklarasi variabel indeks
	int x; // Deklarasi variabel untuk menyimpan nilai sementara pada proses swap
	
	printf("Matriks 10x10 sebelum swap silang\n");
	
	// Mengisi matriks A 10x10 dengan fungsi random
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			A[i][j] = (rand()%21) + (-10);
			printf("%d	", A[i][j]);
		}
		printf("\n");
	}
	
	// Proses swapping
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (j > i)
			{
				// Menukar segmen atas dengan bawah
				if (i + j < 9)
				{
					x = A[9-i][j];
					A[9-i][j] = A[i][j];
					A[i][j] = x;
				}
				// Menukar segmen kanan dengan kiri
				else if (i + j > 9)
				{
					x = A[i][9-j];
					A[i][9-j] = A[i][j];
					A[i][j] = x;
				}
			}
		}
	}
	
	printf("\n");
	printf("Matriks 10x10 setelah swap silang\n");
	
	// Mencetak matriks A 10x10 yang telah diswap
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			printf("%d	", A[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}