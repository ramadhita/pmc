//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   3 Maret 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 8

/*Program untuk melakukan swapping komponen matrix*/

#include <stdio.h>

int matrix[10][10];
int i,j, temp;

void printMatrix(int matrix[10][10]);       //Prosedur untuk menampilkan komponen matrix 10x10 pada command prompt
void randomMatrix(int matrix[10][10]);      //Prosedur untuk mengisi matrix dengan nilai acak
void swapMatrix(int matrix[10][10]);        //Prosedur untuk melakukan swapping komponen matrix

int main (void)
{
    randomMatrix(matrix);
    printf("MATRIX INISIAL\n");
    printMatrix(matrix);

    swapMatrix(matrix);
    printf("\n\nMATRIX FINAL\n");
    printMatrix(matrix);

    return(0);
};

void printMatrix(int matrix[10][10])                //Prosedur mempunyai parameter matrix[10][10] dan menampilkan isi matrix pada command prompt
{
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%3d ", matrix[i][j]);
        };
        printf("\n");
    };
};

void randomMatrix(int matrix[10][10])               //Prosedur untuk mengisi matrix dengan nilai acak, mempunyai parameter matrix[10][10]
{
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            matrix[i][j] = ((rand()%21)-10);
        };
    };
};

void swapMatrix(int matrix[10][10])                 //Prosedur untuk melakukan swapping pada komponen matrix, mempunyai parameter matrix[10][10]
{
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i+j!=9 && i!=j && i+j<9)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[9-i][j];
                matrix[9-i][j] = temp;
            };
        };
    };

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i+j!=9 && i!=j && i+j<9)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][9-j];
                matrix[i][9-j] = temp;
            };
        };
    };
};
