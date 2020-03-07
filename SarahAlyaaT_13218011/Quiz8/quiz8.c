#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int A[10][10], i, j,n,temp;
	printf("Matriks Awal:\n");
	for (i=0; i<10; i+=1)
	{
		for (j=0; j<10; j+=1){
			A[i][j] = rand()%20-10;
			printf("%d\t",A[i][j]);
		}
		printf("\n");	
	}
	n=9; 
	for (i=0; i<5; i+=1){
		for (j=i; j<n+1; j+=1){
			temp = A[i][j];
	 		A[i][j] = A[9-i][j];
			A[9-i][j] = temp;	
		}
		n = n-1;
	}
	n=8;
	for (j=0; j<5; j+=1){
		for (i=j+1; i<n+1; i+=1){
			temp = A[i][j];
	 		A[i][j] = A[i][9-j];
			A[i][9-j] = temp;	
		}
		n = n-1;
	}
	printf("Matriks Akhir: \n");
	for (i=0; i<10; i+=1)
	{
		for (j=0; j<10; j+=1){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}