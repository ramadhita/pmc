 /* Hari dan Tanggal		: Kamis, 13 Februari 2020
 * Nama(NIM)			: Rahmatul Fajriah(18318008)
 * Deskripsi			: membuat program yang dapat mencetak matriks 10X10 dan menukar dareah matrik*/
 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int matriks[10][10];
	int i,j ;
	int tukar[10][10];
	
	// isi matrik 10*10 dengan angka random -10 sampai 10
	printf("matriks 10 X 10\n");
	for (i=0 ; i<10; i=i+1)
	{
		for (j=0; j<=9; j=j+1)
		{
			matriks[i][j] = ((rand()%21)-10);
			printf("%d ", matriks[i][j]);
		}
		printf("\n");
	}
	printf("matrik hasil tukar\n");
	
	for (i=0 ; i<10; i=i+1)
	{
		for (j=0; j<=9; j=j+1)
		{
			if ((i==j)|(i+j==9))
			{
				tukar[i][j] = matriks[i][j];
			}
			else if (i != j)
			{
				if (i+j<=9)
				{
					tukar[9-i][j] = matriks[i][j];
					tukar[i][j] = matriks[9-i][j];;
				}
				if (i+j>=9)
				{
					tukar [i][9-j]= matriks[i][j];
					tukar[i][j] = matriks[i][9-j] ;
				}
			}
		}
	}
	for (i=0 ; i<10; i=i+1)
	{
		for (j=0; j<10; j=j+1)
		{
			printf("%d ", tukar[i][j]);
		}
		printf("\n");
	}
}
	
					


	
	
