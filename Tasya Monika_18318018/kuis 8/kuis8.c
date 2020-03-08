//Kuis 7 - Tasya Monika Saphira (18318018)

/*Program yang menukar posisi elemen - elemen pada array
diagonal tetap
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	static int a[10][10]; //a[row][col]
	
	int i,j, m, n, temp;

	//initialize matriks a

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == j) || (i == (9-j)))
			{
				a[i][j] = 0; //diagonal - diagonal dibuat 0 semua
			}
			else
			{
				a[i][j] = (rand() % (10 - (-10) + 1) + (-10));
			}
		}
	}
	
	//cetak matriks awal
	printf("Matriks awal :\n");
	
	for(i = 0; i < 10; ++i)
	{
		for(j = 0; j < 10 ; ++j) 
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	//tukeran
	
	for (n = 0; n < 3; n++)
	{
		for (m = 1; m < 5; m++)
		{
			if (m > n)
			{
				//b ke d
				temp = a[n][m];
				a[n][m] = a[9-n][m];
				a[9-n][m] = temp;
				
				//a ke c
				temp = a[m][n];
				a[m][n] = a[m][9-n];
				a[m][9-n] = temp;
			}
		}
		
		for (m = 5; m < 9;  m++)
		{
			if ((9-m) > n)
			{
				//b ke d
				temp = a[n][m];
				a[n][m] = a[9-n][m];
				a[9-n][m] = temp;
				
				//a ke c
				temp = a[m][n];
				a[m][n] = a[m][9-n];
				a[m][9-n] = temp;
			}
		}
	}
	
	//cetak matriks a yg baru
	
	printf("Matriks setelah ditukar: \n");
	
	for(i = 0; i < 10; ++i)
	{
		for(j = 0; j < 10 ; ++j) 
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}