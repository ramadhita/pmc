#include <stdio.h>
/*NAMA : Rahmatul Fajriah */
/*NIM : 18318008 */

// Ada 2 persamaan garis dan cari titik potong 2 garis tersebut
// persamaan 1 => y = 2x + 2 => 2x -y = -2
// persamaan 2 => y = 4x - 4 => 2x -y = 4
// menggunakan persamaan A.(x,y) = B
// maka (x,y)= A(invers).B

int main()
{
	int A[2][2] ={{2,-1},{4,-1}};   // mendefenisikan matriks A berupa array berisikan integer
	int B[2][1] ={{-2},{4}};		// mendefenisikan matriks B berupa array berisikan integer
	float invers_A[2][2];			// mendefenisikan matiks invers matriks A 
	float det ;						// mendefenisikan matiks det matriks A
	/* menitung determinan matriks A*/
	det = ((A[0][0]*A[1][1])-(A[0][1]*A[1][0])); 
	/* menitung matriks A invers*/
	invers_A[0][0] = (1/det)*(A[1][1]);
	invers_A[0][1] = (1/det)*(-(A[0][1]));
	invers_A[1][0] = (1/det)*(-(A[1][0]));
	invers_A[1][1] = (1/det)*(A[0][0]);
	/* menitung X,Y(titik potong)*/
	float X,Y;
	X = (invers_A[0][0]*B[0][0])+(invers_A[0][1]*B[1][0]);
	Y = (invers_A[1][0]*B[0][0])+(invers_A[1][1]*B[1][0]);
	/* menmpilkan titik potong kelayar dengan 1 angka dari float*/
	printf("titik potong di X : %1.f\n",X);
	printf("titik potong di Y : %1.f",Y);
	
	return 0;
}
	
	 
	
