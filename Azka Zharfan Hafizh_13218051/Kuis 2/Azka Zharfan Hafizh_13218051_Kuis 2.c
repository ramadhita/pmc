// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		: 23 Januari 2019


// QUIZ 2
// Mencari titik potong antara dua buah garis

#include <stdio.h>

int main()

{
float det;
int x,y,temp;
int i,j;
int matriks1 [2][2], matriks2 [2], hasil [2] ;
 
matriks1 [0][0] = -2 ;			//persamaan garis diubah kedalam bentuk matriks
matriks1 [0][1] = 1 ;
matriks1 [1][0] = -4 ; 
matriks1 [1][1] = 1 ; 	

matriks2 [0] = 2;
matriks2 [1] = -4;

matriks1 [0][1] = - matriks1 [0][1];
matriks1 [1][0] = - matriks1 [1][0]; 

//mencari determinan dari matriks	
det = (matriks1[0][0]*matriks1[1][1])-(matriks1[0][1]*matriks1[1][0]);	
			
//mencari adjoin dari matriks
temp = matriks1[0][0];
matriks1 [0][0] = matriks1 [1][1];
matriks1[1][1] = temp;

printf ("TITIK POTONG : ");

//mengkalikan 2 buah matriks
for (i=0; i<2; i++)
{
	hasil[i] = (float)(1.0/det)*((matriks1[i][0]* matriks2[0])+(matriks1[i][1]* matriks2[1]));
	printf ("%d  ", hasil [i]);
	}
}



