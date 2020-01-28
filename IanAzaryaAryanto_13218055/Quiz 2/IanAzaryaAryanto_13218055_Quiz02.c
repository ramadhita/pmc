// Nama         : Ian Azarya Aryanto
// NIM          : 13218055
// Kelas        : K02 EL2008

#include <stdio.h>

int main () {
	int i,j;
	int Matrix [2][2] = {
		{0,0},
		{0,0}};
	int konst [2] = {0,0};
	double sum1=0;
	double sum2=0;
	
	printf("Silahkan masukkan nilai a, b, dan c untuk ay1 = bx1 + c : \n");
	scanf("%d %d %d", &Matrix[0][0], &Matrix[0][1], &konst[0]);
	printf("Silahkan masukkan nilai a, b, dan c untuk ay2 = bx2 + c : \n");
	scanf("%d %d %d", &Matrix[1][0], &Matrix[1][1], &konst[1]);
	
	int A[2][2]= { //Matrix setelah dilakukan pemindahan ruas variabel x
		{Matrix[0][0], (-1*Matrix[0][1])},
		{Matrix[1][0], (-1*Matrix[1][1])}
		};
		
	int invers [2][2] = { //Matrix invers A
		{A[1][1],(-1*A[0][1])},
		{(-1*A[1][0]),A[0][0]}
		};
	
	double det = (A[0][0]*A[1][1])-(A[1][0]*A[0][1]);
	// Nilai determinan dari matrix
	
	for (i=0; i<=1; i++){
		for (j=0; j<=1; j++){
			if (i < 1) {
				sum1 = sum1 + invers[i][j]*konst[j];}
			else {
				sum2 = sum2 +  invers[i][j]*konst[j];}
		}
	}
	//Nested loop digunakan untuk menghasilkan perkalian dari 2 buah matrix
	
	printf ("Titik perpotongan antara kedua persamaan garis adalah : (%.2f,%.2f) ", sum2/det, sum1/det); 
	//Output titik potong kedua persamaan garis
	return (0);
}
