//Nama	: Winnie Chuang
//NIM	: 18318002


#include <stdio.h>
#include <stdlib.h>

int
main ()
{
	int i = 0; //menginisialisasi variabel yang akan dipakai
	int j = 0;
	int matriksA [10][10];
	int x = 0;
	int simpan = 0;
	
	//mengisi nilai dalam matriks
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <10; j++)
		{
			x = rand();
			while (x>20)
			{
				x = rand();
			}
			matriksA [i][j] = x-10;
		}
	}
	
	//mencetak matriks sbeelum diubah
	printf("Matriks sebelum diubah:\n");
	for (i = 0; i<10 ; i++)
	{
		for (j=0; j <10; j++)
		{
			printf ("%4d\t ", matriksA[i][j]) ;
		}
		printf("\n");
	}
	
	
	//cara menukar matriks
	for (j = 0; j <=4 ; j++) //dalam kolom
	{
		for (i = j+1; i <9-j; i++)
		{
			simpan = matriksA[i][j];
			matriksA[i][j] = matriksA[i][9-j];
			matriksA[i][9-j] = simpan;
		}
	}
	
	for (i = 0; i <=4 ; i++) //dalam baris
	{
		for (j = i+1; j <9-i; j++)
		{
			simpan = matriksA[i][j];
			matriksA[i][j] = matriksA[9-i][j];
			matriksA[9-i][j] = simpan;
		}
	}
	
	
	//mencetak matriks
	printf("Matriks setelah diubah:\n"); 
	for (i = 0; i<10 ; i++)
	{
		for (j= 0; j <10; j++)
		{
			printf("%4d\t ", matriksA[i][j]);
		}
		printf ("\n");
	}

	return 0;
}
