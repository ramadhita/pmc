#include <stdio.h>

/*  y=2x+2
    y=4x-4
    Carilah titik potongnya
*/

int main (void)
{
    int A [4];
    int B [2];
    int Dx [4];
    int Dy [4];
    int hasil [2];
    
/*  Diselesaikan dengan aturan crammer
Dimana Dx adalah matriks untuk mencari nilai x dan Dy adalah matriks untuk mencari nilai y
    Matriks A = |2   -1 |
                |4   -1 |

    Matriks B = |-2|    
                | 4|
*/        
    A[0] = 2;
    A[1] = -1;
    A[2] = 4;
    A[3] = -1;

    B[0] = -2;
    B[1] = 4;

    Dx[0] = B[0];
    Dx[1] = A[1];
    Dx[2] = B[1];
    Dx[3] = A[3];

    Dy[0] = A[0];
    Dy[1] = B[0];
    Dy[2] = A[2];
    Dy[3] = B[1];

/*  hasil adalah determinan matriks Dx atau Dy dibagi dengan determinan matriks A
*/


    hasil[0] = ((Dx[0]*Dx[3])-(Dx[1]*Dx[2]))/((A[0]*A[3])-(A[1]*A[2]));
    hasil[1] = ((Dy[0]*Dy[3])-(Dy[1]*Dy[2]))/((A[0]*A[3])-(A[1]*A[2]));

    printf("Hasil dari persamaan adalah %d %d", hasil[0], hasil[1]);

    

}