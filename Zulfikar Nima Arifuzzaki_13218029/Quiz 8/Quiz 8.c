#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int A[10][10];
	int i, j;
	int temp;
	
	// MENGISI ARRAY
	for (i = 0; i< 10; ++i)
	{
		for (j = 0; j<10; ++j)
		{
			A[i][j] = (rand() % (10 + 10 + 1)) - 10;
			
			}
		}
	
	// MENCETAK ARRAY (YANG BELUM DITUKAR)
	printf("ARRAY YANG BELUK DITUKAR POSISINYA: \n");
	for (i = 0; i<10; ++i)
	{
		for (j = 0; j<10; ++j)
		{
			printf("%3.1d ", A[i][j]);
			if (j == 9)
			{
				printf("\n");
				}
			}
		}
		
	// MENUKAR POSISI ANGGOTA MATRIKS A DENGAN C
	for (i = 0; i<10; ++i)
	{
		j = 0;
		while ((j < i) && (j < 9-i))
		{
			temp = A[i][j];
			A[i][j] = A[i][9 - j];
			A[i][9-j] = temp;
			j += 1;
			}
		}
	
	// MENUKAR POSISI ANGGOTA MATRIKS B DENGAN D
	for (j = 0; j<10; ++j)
	{
		i = 0;
		while ((i < j) && (i < 9-j))
		{
			temp = A[i][j];
			A[i][j] = A[9 - i][j];
			A[9 - i][j] = temp;
			i += 1;
			}
		}  
	
	// MENCETAK ARRAY (YANG BELUM DITUKAR)
	printf("ARRAY YANG SUDAH DITUKAR POSISINYA: \n");
	for (i = 0; i<10; ++i)
	{
		for (j = 0; j<10; ++j)
		{
			printf("%3.1d ", A[i][j]);
			if (j == 9)
			{
				printf("\n");
				}
			}
		}
			
	}
