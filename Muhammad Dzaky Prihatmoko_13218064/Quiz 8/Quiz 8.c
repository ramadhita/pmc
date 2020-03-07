#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10][10];
    int A[8];
    int temp;
    int B[8];
    int C[8];
    int D[8];
    int i,j;
    //Isi nilai awal pada matriks
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            arr[i][j]=rand() % 20 - 10;
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
        printf("\n");
    }
    //Tukar atas dan bawah
    for (j=1;j<=8;j++)
    {
        i=0;
        while (i!=j && (i+j!=9))
        {
            temp=arr[i][j];
            arr[i][j]=arr[9-i][j];
            arr[9-i][j]=temp;
            i=i+1;
        }
    }
    //Tukar kanan dan kiri
    for (i=1;i<=8;i++)
    {
        j=0;
        while (i!=j && (i+j!=9))
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][9-j];
            arr[i][9-j]=temp;
            j=j+1;
        }
    }
    //matriks setelah posisinya ditukar
    printf("\n");
    printf("setelah ditukar posisinya: \n");
     for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}
