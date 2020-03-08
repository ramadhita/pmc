//Nadhira Anindita K
//18318033

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[10][10]; //menyiapkan array berisi int 10x10
    int temp1,temp2; //variabel untuk membantu proses pertukaran
    for (int i = 0; i < 10; i++) //menyatakan baris
    {
        for (int j = 0; j < 10; j++) //menyatakan kolom
        {
            A[i][j]= rand()%20-10; //looping pengisian tiap elemen matriks secara random dengan skala -10 s.d. 10
        }
    }

    for (int i = 0; i < 10; i++) //menyatakan baris
    {
        for (int j = 0; j < 10; j++) //menyatakan kolom
        {
            printf("%d ",A[i][j]); //melakukan cetak isi elemen matriks
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) //menyatakan baris, hingga 5 karena pertukaran terjadi dari ujung hingga tengah saja
    {
        for (int j = i; j < 9-i; j++) //menyatakan kolom, pertukaran dari ujung lainnya hingga ke tengah
        {
            if ((i!=j)&&(i!=j-9)){//pengecualian untuk diagonal kiri-kanan dan sebaliknya
                temp1 = A[i][j]; //untuk menukar kanan-kiri
                A[i][j] = A[9-i][j];
                A[9-i][j] = temp1;

                temp2 = A[j][i]; //untuk menukar atas-bawah
                A[j][i] = A[j][9-i];
                A[j][9-i] = temp2;
            }
        }
        
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ",A[i][j]); //melakukan cetak untuk matriks yang telah ditukar
        }
        printf("\n");
    }

    return(0);
}