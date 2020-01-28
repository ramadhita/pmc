//  NAMA    : AGUNG DWI LAKSANA
//  NIM     : 13218034
//  PROGRAM : Menyelesaikan SPLDV dengan Matriks
//  Tanggal : 23 Januari 2020

#include <stdio.h>

/* Program mencari penyelesaian :
        y1 = 2x + 2
        y2 = 4x - 4
    */
int main (){
    double A[2][2], xy[2][1], invA[2][2], hasil[2][1];
    double detA;
    int i,j;

    // Deklarasi matriks A
    A[0][0] = 2;
    A[0][1] = -1;
    A[1][0] = 4;
    A[1][1] = -1;

    // Deklarasi matriks xy
    xy[0][0] = -2;
    xy[1][0] = 4;

    // Deklarasi matriks hasil
    hasil[0][0] = 0;
    hasil[1][0] = 0;

    // Hitung determinan
    for (i=0;i<2;i=i+1){
        for (j=0;j<2;j=j+1){
            for (int k=0;k<2;k=k+1){
                    if ((j!=0)&&(k!=i)){
                        if (i%2==0){
                            detA = detA + A[0][i]*A[j][k];
                        } else {
                            detA = detA - A[0][i]*A[j][k];
                        }
                    }
                }
        }
    }

    // Hitung invers dari matriks A
    invA[0][0] = A[1][1]/detA;
    invA[0][1] = ((-1)*A[0][1])/detA;
    invA[1][0] = ((-1)*A[1][0])/detA;
    invA[1][1] = A[0][0]/detA;

    // Menghitung x dan y
    for (i=0;i<2;i=i+1){
        for (j=0;j<2;j=j+1){
            hasil[i][0] = hasil[i][0] + xy[j][0]*invA[i][j];
        }
    }

        printf("Hasil titik potong adalah ( %.1f, %.1f ) .\n", hasil[0][0], hasil[1][0]);

    return 0;
};
