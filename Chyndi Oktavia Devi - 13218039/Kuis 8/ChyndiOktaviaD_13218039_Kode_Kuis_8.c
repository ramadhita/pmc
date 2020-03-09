#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int i, A[10][10], j, k, temp;


    for(int j=0;j<10;j++){
        for(k=0;k<10;k++){
            A[j][k]=(rand()%(21)-10);//ini itu ngambilnya 20 angka trus mundurin sampe -10
            printf("%d\t", A[j][k]);
            if(k==9)
            {
                printf("\n");//untuk menyetak nilai matriks random 10x10
            }
        }
    }

    //Menukar matriks atas dan bawah
    for (j=0;j<5;j++)
    {
        for(k=j+1;k<(9-j);k++)
        {
            temp=A[j][k];
            A[j][k]=A[9-j][k];
            A[9-j][k]=temp;
        }
    }

    //Menukar matriks kanan dan kiri
    for (j=0;j<5;j++)
    {
        for(k=j+1;k<(9-j);k++)
        {
            temp=A[j][k];
            A[j][k]=A[k][9-j];
            A[k][9-j]=temp;
        }
    }


    printf("Matriks hasil setelah diubah\n");
    for(j=0;j<10;j++)
    {
        for(k=0;k<10;k++)
        {
            printf("%d\t", A[j][k]);
        }
        printf("\n");
    }
}
