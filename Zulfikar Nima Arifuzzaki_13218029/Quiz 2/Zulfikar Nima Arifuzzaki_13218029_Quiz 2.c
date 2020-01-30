/* NIM/NAMA		= 13218029/ZULFIKAR NIMA ARIFUZZAKI
 * KUIS 2 PMC
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	/*
	Diberikan dua garis linear
	* y = 2x + 2 <=> 2x - y = -2
	* y = 4x - 4 <=> 4x - y = 4
	* akan dicari titik potong dua garis tersebut dengan menggunakan matrix
	*/
	
	//INISIALISASI
	float A [2][2] = {{2,-1},{4,-1}}; // manampung koefisien variabel
	float B [2] = {-2,4}; // menampung konstanta
	float Ai [2][2]; // A invers
	float det; // determinan
	float detm; // 1/det
	int i, j; 
	float H [2];
	
	//ALGORITMA
	//mencari determinan A
	det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
	detm = 1/det;
		
	//mencari invers A
	Ai[0][0] = A[1][1];
	Ai[1][1] = A[0][0];
	Ai[0][1] = -A[0][1];
	Ai[1][0] = -A[1][0];
	for (i = 0; i <=1; i+=1)
	{
		for (j = 0; j<=1; j+=1)
		{
			Ai[i][j] = detm*Ai[i][j];
			}
		}
		
	//mencari hasil AxB
	H[0] = Ai[0][0]*B[0] + Ai[0][1]*B[1];
	H[1] = Ai[1][0]*B[0] + Ai[1][1]*B[1];
	printf("Titik potong kedua garis terletak pada x = %f dan y = %f", H[0], H[1]);
	}
