/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Deklarasi
	int A[10][10];
	int i; int j; int temp;
	
	//Pemberian nilai 10 s/d -10 pada matriks
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			A[i][j] = rand() % (20) - 10 ;
			printf("%d ", A[i][j]);}
			printf("\n");}
			
	//Penukaran angka secara vertikal, untuk bagian matriks yang berada di antara diagonal
	for (i=0; i<5; i++){
		for (j=i+1; j<9-i; j++){
			temp = A[i][j];
			A[i][j] = A[9-i][j];
			A[9-i][j] = temp;}}
	
	//Penukaran angka secara horizontal untuk 5 baris pertama, untuk bagian matriks sebelum dan sesudah diagonal		
	for (i=1;i<5;i++){
		for (j=0;j<i;j++){
			temp = A[i][j];
			A[i][j] = A[i][9-j];
			A[i][9-j] = temp;}}
			
	//Penukaran angka secara horizontal untuk 5 baris terakhir, untuk bagian matriks sebelum dan sesudah diagonal
	for (i=8;i>4;i--){
		for (j=0;j<9-i;j++){
			temp = A[i][j];
			A[i][j] = A[i][9-j];
			A[i][9-j] = temp;}}
	
	printf("\n");
	
	//Pencetakan matriks yang telah diberikan operasi
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d ", A[i][j]);}
			printf("\n");
			}
			
	return(0);
}
			
		
	
