//Muhammad Heronan Hyanda
//Quiz 2 (23 Januari 2020)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deklarasi variabel yang akan digunakan pada program
    int A[2][2] = {{2,-1},{4,-1}};
    float inverse_A [2][2], adj_A [2][2];
    double det_A;
    float x, y;

    //determinant
    det_A = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    //adjoint
    for (int i = 0; i < 2; i = i+1)
    {
        for (int j=0; j < 2; j=j+1)
        {
            if (i+j == 1)
            {
                adj_A [i][j] = -1 * A [i][j];
            }
            else
            {
                if (i+j == 0)
                {
                    adj_A [i][j] = A [i+1][j+1];
                }
                else
                {
                    adj_A [i][j] = A [i-1][j-1];
                }
            }
        }
    }
    //Menentukan matriks inverse
    for (int p= 0; p < 2; p=p+1)
    {
        for (int q=0; q < 2; q=q+1)
        {
            inverse_A [p][q] = (1/det_A)* adj_A [p][q];
        }
    }
    //Menentukan solusi SPLDV
    x = (inverse_A[0][0]* -2) + (inverse_A[0][1]* 4);
    y = (inverse_A[1][0]* -2) + (inverse_A[1][1]* 4);
    //Menampilkan solusi sistem persamaan linier dua variabel
    printf("Solusi pada sistem persamaan linier tersebut adalah (%.3f , %.3f)", x, y);
}
