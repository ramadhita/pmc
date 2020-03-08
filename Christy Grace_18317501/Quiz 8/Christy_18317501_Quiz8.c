#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int matriks[10][10];
	int matriks_change[10][10];
	int i,j,isi;
	
	//Filling the matrix
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			matriks[i][j] = (rand()%(21)-10);
		}
	}
	
	//Printing the matrix
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t",matriks[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	//Changing the upper and lower elements of matrix
	for(i=0;i<10;i++){
		for(j=i;j<10-i;j++){
			matriks_change[10-i-1][j]=matriks[i][j];
			matriks_change[i][j]=matriks[10-i-1][j];
		}
	}
	
	//Changing the left and right elements of matrix
	for(j=0;j<5;j++){
		for(i=j+1;i<10-j-1;i++){
			matriks_change[i][j]=matriks[i][10-1-j];
			matriks_change[i][10-1-j]=matriks[i][j];
			
		}
	}
	
	//Printing the matrix
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t",matriks_change[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}