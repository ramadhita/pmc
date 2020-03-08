#include <stdio.h>
#include <stdlib.h>

int A[10][10];      //mendeklarasikan matriks
int i,j, urut1, urut2; //urut1 dan urut2 merupakan memory sementara untuk matriks saat penukaran

int main()
{
    printf("Matriks A sebelum ditukar \n");
    for (i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            A[i][j]=rand()%20-10;           //mengisi matriks dengan angka acak
            printf("%d  ", A[i][j]);        //Print matriks sebelum ditukar
        }
        printf("\n");
    }

    printf("Matriks A setelah ditukar \n");
    for(i=0; i<4; i++)
    {
        for(j=1+i; j<9-i; j++)      // Proses menukar matriks
        {
        
            A[i][j]=A[9-i][j];      
            urut1=A[9-i][j];
            
        
            A[j][i]= A[j][9-i];
            urut2 = A[j][9-i];
            
            
        }
        
    }

    for(i=0; i<=9; i++)         //Print matriks setelah ditukar
    {
        for(j=0; j<=9; j++)
        {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }
    
}

