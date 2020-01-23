// Nama : Yasmin Sekar Arum
// NIM  : 13218063
// kuis 2 "mencari titik potong dari dua persamaan garis"

#include<stdio.h>
#include<math.h>


int main(void){

    float C[2][2], d;
    float A[2][2] ;//= {{2, -1}, {4, -1}};
    float B[2] ;//= {-2,4};
    int n, x, y,i;
    float D[2];
    
    /* persamaan yang digunakan untuk kuis :
     Y = 2X +2
     Y = 4X - 4
     */
    
    printf ("Menghitung titik potong antara dua garis");
    for (i=0;i<2;i++){
        printf ("persamaan %i:Ay = Bx + C\n", i+1);
        printf ("masukkan elemen A\n"); scanf("%f", &(A[i][1]));
        printf("masukkan elemen B\n"); scanf ("%f", &(A[i][0]));
        printf ("masukkan elemen C\n"); scanf("%f", &(B[i]));
        A[i][1] = -1*A[i][1];
        B[i] = -1*B[i];
    }
    
    d = (1/((A[0][0]* A[1][1])- (A[0][1]*A[1][0])));

    C[0][0] = A[1][1]*d;
    C[1][0] = -1*A[1][0]*d;
    C[0][1] = -1*A[0][1]*d;
    C[1][1] = A[0][0]*d;
 
    n = 0;
    while (n<2){
        D[n] =((C[n][0]*B[0]) + (C[n][1]*B[1]));
        n = n+1;
    }
   
    printf("hasil matriksnya ialah :\n");
    printf("x =  %f \n", D[0]);
    printf("y =  %f \n", D[1]);

      
return 0;

}
//Saya menggunakan compiler online di https://www.onlinegdb.com/online_c_compiler
