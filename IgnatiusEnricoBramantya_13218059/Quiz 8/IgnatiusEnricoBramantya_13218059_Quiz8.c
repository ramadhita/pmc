//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Quiz 8 - Matrix 10x10 Region Value Swapper
//Date  : Selasa, 3 Maret 2020

#include <stdio.h>	
#include <math.h>
#include <string.h>

int
main(void)
{
   int mat[10][10];
   int i,j;

   //Assigning nilai - nilai matriks dengan fungsi random
    for (i = 0; i<10 ; i++)
    {
        for (j=0;j<10 ; j++)
        mat[i][j] = ((rand()% (-19)) - 10);

    }

    //print matrix awal

    for (i = 0; i<10 ; i++)
    {
        for (j=0;j<10 ; j++){
        printf("%3d ",mat[i][j]);
        }

        printf("\n");
    }
    

    //Proses penukaran nilai antara region Atas dan bawah
    int temp;
    for (i = 0; i<5 ; i++)
    {
        for (j=1;j<9 ; j++){
            if  ((i==j)) {
        }
        else if  ((i+j)==9) {
        
                 
        }
        else
        {
            temp = mat[9-i][j];
                mat[9-i][j] = mat[i][j];
                mat[i][j] = temp;
        }
        
        }
    }

    //Proses penukaran nilai antara region Kiri dan Kanan
    for (i = 1; i<9 ; i++)
    {
        for (j=0;j<4 ; j++){
            if  ((i==j)) {
        }
        else if  ((i+j)==9) {
        }
        else
        {
            temp = mat[i][9-j];
                mat[i][9-j] = mat[i][j];
                mat[i][j] = temp;
        }
        
        }
    }
    //print matriks yang telah ditukar region2nya
    int k,l;
    printf("---------------------- Hasil Pertukaran -------------------- \n");
     for (k = 0; k<10 ; k++)
    {
        for (l=0;l<10 ; l++){
        printf("%3d ",mat[k][l]);
        }
        printf("\n");
    }

    
    return (0);

}

