#include <stdio.h>
#include "quiz8.h"


int main(){
	int mat[10][10], x,y;
	
	// input bilangan random untuk matriks 10*10, dengan rentang -10 sampai 10	
	printf("Matriks 10*10 sebelum ditukar : \n");
	for (y=0 ; y<10 ; y++){
		for (x=0 ; x<10 ; x++){
			mat[y][x] = (rand()%(20)-10);
			printf(" %d\t" , mat[y][x]);
		}
		printf("\n");
	}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	printf("\n"); printf("\n"); printf("\n");		// Beri jarak
	
	printf("Matriks 10*10 setelah ditukar : \n");
	for (y=0 ; y<10 ; y++){
		for (x=0 ; x<10 ; x++){
			if ((y<5) && ((x!=y) && (x+y<9)) && (x>y) ){ 			// Tukar atas dengan bawah, kecuali bagian diagonal
				tukar(&mat[y][x] , &mat[9-y][x]);
				printf(" %d\t" , mat[y][x]);
			}
			else if ((x<5) && ((x!=y) && (x+y<9)) && (x<y) ){		// Tukar kiri dengan kanan, kecuali bagian diagonal
				tukar(&mat[y][x] , &mat[y][9-x]);
				printf(" %d\t" , mat[y][x]);
			}
			else{													// untuk diagonal tidak ditukar
				printf(" %d\t" , mat[y][x]);
			}
		}
		printf("\n");
	}
	
	return 0;
}

