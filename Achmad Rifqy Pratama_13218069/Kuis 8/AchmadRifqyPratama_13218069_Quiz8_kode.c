/* 
NaMa    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#include <math.h>

int main(void){
    int a[10][10];
    int i, j, temp;

    //Mencetak matriks acak 10x10
    printf("Matriks sebelum ditukar : \n\n");
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            a[i][j] = (rand() % 21) - 10;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    //Algoritma pertukaran elemen matriks
    //Menukar elemen pada setengah kuadran III pertama dengan setengah kuadran I pertama
    for (i=1; i<5; i++){
		for (j=0; j<i; j++){
			temp = a[i][j];
			a[i][j] = a[i][9-j];
			a[i][9-j] = temp;
        }
    }
    //Menukar elemen pada setengah kuadran III kedua dengan setengah kuadran I kedua
	for (i=8; i>4; i--){
		for (j=0; j<9-i; j++){
			temp = a[i][j];
			a[i][j] = a[i][9-j];
			a[i][9-j] = temp;
        }
    }
    //Menukar elemen pada kuadran II dengan kuadran IV
    for (i=0; i<5; i++){
		for (j=i+1; j<9-i; j++){
			temp = a[i][j];
			a[i][j] = a[9-i][j];
			a[9-i][j] = temp;
        }
    }
    //Mencetak matriks hasil pertukaran kuadran I dengan kuadran III, kuadran II dengan kuadran IV
    printf("\nMatriks setelah ditukar : \n\n");
    for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t", a[i][j]);
        }
		printf("\n");
	}        
    return 0;
}