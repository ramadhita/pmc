// Nama           : Ian Azarya Aryanto
// NIM            : 13218055
// Kelas          : K02 EL2008

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	int Mat [10][10];
	int temp;
	int nilai_max = 10;
	int nilai_low = -10;
	int i = 0;
	int j = 0;
	for (i = 0; i<10; i++){
		for (j = 0; j<10; j++){
			Mat[i][j] = (rand() % (nilai_max - nilai_low + 1)) + nilai_low;
			}
		}
	printf("Awal \n");
	for (i = 0; i<10; i++){
		for (j = 0; j<10; j++){
			if (j<9){
				printf("%3d ",Mat[i][j]);
				}
			else {
				printf("%3d \n",Mat[i][j]);
				}
			}
		}
		
	for (i = 0; i<10; i++){
		for (j = 0; j<10; j++){
			if ( (i+j !=9) && (i!=j) && (i+j<9)) {
					temp = Mat[i][j];
					Mat[i][j] = Mat[9-i][j];
					Mat[9-i][j] = temp;
				}
			}
		}
	for (i = 0; i<10; i++){
		for (j = 0; j<10; j++){
			if ( (i+j !=9) && (i!=j) && (i+j<9)) {
					temp = Mat[i][j];
					Mat[i][j] = Mat[i][9-j];
					Mat[i][9-j] = temp;
				}
			}
		}
	printf("\nAkhir\n");
	
	for (i = 0; i<10; i++){
		for (j = 0; j<10; j++){
			if (j<9){
				printf("%3d ",Mat[i][j]);
				}
			else {
				printf("%3d \n",Mat[i][j]);
				}
			}
		}
	return(0);
	
}
