#include <stdio.h>
#include <stdlib.h>

int A[10][10];
int i; //Row
int j; //Column
int Temp;

int main (){
	//FILL A
	for (i = 0; i < 10; i = i + 1){
		for (j = 0; j < 10; j = j + 1){
			A[i][j] = (rand () % 21) - 10;
			printf ("%d  ", A[i][j]);
		}
		printf ("\n");
	}
	
	//Swap Left and Right
	for (i = 1; i < 9; i = i + 1){
		for (j = 0; j < i; j = j + 1){
			Temp = A[i][j];
			A[i][j] = A[i][9 - j];
			A[i][9 - j] = Temp;
		}
	}
	
	//Swap Top and Bottom
	for (j = 1; j < 9; j = j + 1){
		for (i = 0; i < j; i = i + 1){
			Temp = A[i][j];
			A[i][j] = A[9 - i][j];
			A[9 - i][j] = Temp;
		}
	}
	
	printf ("\n\n");
	
	for (i = 0; i < 10; i = i + 1){
		for (j = 0; j < 10; j = j + 1){
			printf ("%d  ", A[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
