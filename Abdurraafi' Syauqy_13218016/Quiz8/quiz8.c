#include<stdio.h>
#include <stdlib.h>

int A [10][10];
int i,j,temp;

int main (){

    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            A[i][j] = (rand() % (10 - -10 +1)) + -10;
        }
    }
    printf("Matriks sebelum ditukar : \n\n");
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            if((i!=j)&&((i+j)!=9)) {
                if ((A[i][j]>=0) && (A[i][j]<10)){
                    printf("   %d ", A[i][j]);
                } else if ((A[i][j]<0) && (A[i][j]>-10)){
                    printf("  %d ", A[i][j]);
                } else if (A[i][j]==10) {
                    printf("  %d ", A[i][j]);
                } else {
                    printf(" %d ", A[i][j]);
                } 
            } else if ((i==j) | (i+j==9)) {
                if ((A[i][j]>=0) && (A[i][j]<10)){
                    printf("  (%d)", A[i][j]);
                } else if ((A[i][j]<0) && (A[i][j]>-10)){
                    printf(" (%d)", A[i][j]);
                } else if (A[i][j]==10) {
                    printf(" (%d)", A[i][j]);
                } else {
                    printf("(%d)", A[i][j]);
                }
            }
        }
        printf("\n");
    }
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            if((i!=j)&&((i+j)<9)){
				if(j<i){
                    temp = A[i][j];
					A[i][j] = A[i][9-j];
					A[i][9-j] = temp;
				}
				else{
                    temp = A[i][j];
					A[i][j] = A[9-i][j];
					A[9-i][j] = temp;
				};
			};
        }
    }
    printf("\n\n Matriks setelah ditukar : \n\n");
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
             if((i!=j)&&((i+j)!=9)) {
                if ((A[i][j]>=0) && (A[i][j]<10)){
                    printf("   %d ", A[i][j]);
                } else if ((A[i][j]<0) && (A[i][j]>-10)){
                    printf("  %d ", A[i][j]);
                } else if (A[i][j]==10) {
                    printf("  %d ", A[i][j]);
                } else {
                    printf(" %d ", A[i][j]);
                } 
            } else if ((i==j) | (i+j==9)){
                if ((A[i][j]>=0) && (A[i][j]<10)){
                    printf("  (%d)", A[i][j]);
                } else if ((A[i][j]<0) && (A[i][j]>-10)){
                    printf(" (%d)", A[i][j]);
                } else if (A[i][j]==10) {
                    printf(" (%d)", A[i][j]);
                } else {
                    printf("(%d)", A[i][j]);
                }
            }
        }
        printf("\n");
    }
}

