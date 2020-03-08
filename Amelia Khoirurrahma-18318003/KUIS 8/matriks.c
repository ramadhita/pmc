/* PROGRAM MENUKAR NILAI MATRIKS
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 3 Maret 2020 */

/*
Ubah matriks
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main ()
{
	//matriks 10x10
	int m[10][10];
	int i, j, temp;
	
	//Menentukan elemen matriks secara random dengan -10 <= e <= 10
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			m[i][j] = (rand()%21)-10;
		}
	}

	//Print elemen matriks
	printf("Matriks awal:\n");
	for(i=0; i<10; i++)
	{
      for(j=0;j<10;j++)
      {
         printf("%d\t ", m[i][j]);
         if(j==9)
         {
            printf("\n");
         }
      }
   }

	//Menukar tempat antara angka di atas dan di bawah
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<(9-i); j++)
		{
			temp=m[i][j];
			m[i][j]=m[9-i][j];
			m[9-i][j]= temp;
		}
	}
	
	//Menukar tempat antara angka di kanan dan di kiri
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<(9-i); j++)
		{
			temp=m[j][i];
			m[j][i]=m[j][9-i];
			m[j][9-i]= temp;
		}
	}
	
	//Mencetak hasil matriks yang telah ditukar tempatnya
	printf("\nMatriks setelah dibalik:\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}
