//matriks 10x10, dipartisi jadi 4, lalu ditukar (A ke C), (B ke D)

#include <stdio.h> 
#include <stdlib.h> 

//Alexandra Handayani 18318026

int main () { 
	int i,j; 
	int matrix[10][10]; 
	//mencetak matriks original
	for (i = 0; i < 10; i++) { 
		for (j = 0; j < 10; j++) { 
			matrix[i][j] = rand()%20 - 10; 
			printf("%d ", matrix[i][j]); 
		}
		printf("\n");
	}
	
	//i adalah baris dan j adalah kolom
	//fungsi di bawah ini untuk mengganti matriks atas dan bawah diagonal
	for (i=0; i<5; i++) { //pergerakan baris, maksimal 5 kali sebelum diagonal
		for (j=i+1; j<9-i; j++) { //pergerakan kolom, maksimal 1 kolom sebelum diagonal
			int temp = matrix[i][j]; 
			matrix[i][j]=matrix[9-i][j]; 
			matrix[9-i][j]= temp; 
		}
	}
	
	//fungsi ini untuk mengganti matriks samping kiri dan kanan diagonal
	for (j=0; j<5; j++) { //pergerakan kolom, maksimal 5 kali sebelum diagonal
		for (i=j+1; i<9-j; i++) { //pergerakan baris, maksimal 1 baris sebelum diagonal
			int temp = matrix[i][j]; 
			matrix[i][j]=matrix[i][9-j]; 
			matrix[i][9-j]= temp; 
		}
	}
	
	printf("\n");
	for (i = 0; i < 10; i++) { 
		for (j = 0; j < 10; j++) {  
			printf("%d ", matrix[i][j]); 
		}
		printf("\n");
	}

return 0; 
	
}
