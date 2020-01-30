// Adeline Kartika (13218081)
// Quiz 2
#include <stdio.h>

int main()
{
    float A[2][2];
    float C[1][2];
    float B[1][2];
    float A1[2][2];
    float D;
    
    // Pengisian matriks

    A[0][0] = -2;
    A[0][1] = 1;
    A[1][0] = -4;
    A[1][1] = 1;
    
    B[0][0] = 2;
    B[0][1] = -4;
    
    // Mencari Determinan
    
    D = 1/((A[0][0]*A[1][1])-(A[1][0]*A[0][1]));

    // invers matriks
    
    A1[0][0] = (D*A[1][1]);
    A1[0][1] = (D*A[0][1]*-1);
    A1[1][0] = (D*A[1][0]*-1);
    A1[1][1] = (D*A[0][0]);
    
    // Crammers Rule

    C[0][0] = (A1[0][0]*B[0][0])+(A1[0][1]*B[0][1]);
    C[0][1] = (A1[1][0]*B[0][0])+(A1[1][1]*B[0][1]);
    
    // Hasil 

    printf("X sebesar %1.f\n", C[0][0]);
    printf("Y sebesar %1.f\n", C[0][1]);
}
