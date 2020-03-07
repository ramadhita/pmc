/* NIM: 13218021
Nama: Alzana Armaniar Farhani
Keterangan: Quiz 8*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[10][10];
    int i, j, temp;
    for(i=0;i<10;i+=1){
        for(j=0;j<10;j+=1){
            A[i][j] = (rand() % 21) - 10;
            printf("%d\t", A[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    for(i=0;i<5;i+=1){
        for(j=i+1;j<10-(i+1);j+=1){
            temp= A[i][j];
            A[i][j]= A[9-i][j];
            A[9-i][j]= temp;
        }
    }
    for(i=0;i<5;i+=1){
        for(j=i+1;j<10-(i+1);j+=1){
            temp= A[j][i];
            A[j][i] = A[j][9-i];
            A[j][9-i]= temp;
        }
    }

    for(i=0;i<10;i+=1){
        for(j=0;j<10;j+=1){
            printf("%d\t", A[i][j]);
        }
    printf("\n");
    }
}
