#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main ()
{
	//matriks 10x10
	int m[10][10],i, j, temp;
	srand((signed) time(0));
	
	//Menentukan elemen matriks 1 secara random dengan rentang nilai -10<a<10
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			m[i][j] = (rand()%20)-10;
		}
	}

	//mencetak nilai matriks awal
	printf("Matriks awal sebelum perubahan:\n");
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

	//Menukar tempat nilai elemen di bagian atas dengan di bawah
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<(9-i); j++)
		{
			temp=m[i][j];
			m[i][j]=m[9-i][j];
			m[9-i][j]= temp;
		}
	}
	
	//Menukar nilai elemen matriks di bagian kanan dengan di bagian kiri
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<(9-i); j++)
		{
			temp=m[j][i];
			m[j][i]=m[j][9-i];
			m[j][9-i]= temp;
		}
	}
	
	//Mencetak hasil matriks yang telah diubah nilai emelennya
	printf("\nMatriks setelah dilakukan perubahan \n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
return (0);}
