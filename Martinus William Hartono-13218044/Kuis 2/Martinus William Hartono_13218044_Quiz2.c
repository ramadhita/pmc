//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   23 Januari 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 2

/*Program untuk mencari titik potong dua buah fungsi yaitu
y = 2x + 2 dan y = 4x -4 dengan menggunakan matrix*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,j;
    
    //Matrix M merupakan matrix 2x2 yang berisi nilai x dan y dari setiap fungsi
    int M[2][2] = {
        {-2, 1},        //-2x + y = 2
        {-4, 1}         //-4x + y = -4
    };
	
	//Matrix C merupakan martrix 2x1 yang berisi nilai konstanta dari masing-masing fungsi
    int C[2][1] = {
        {2},            //konstanta fungsi pertama
        {-4}            //konstanta fungsi kedua
    };
    
    double det_M = M[1][1] * M[0][0] - (M[0][1] * M[1][0]);				//Rumus mencari determinan matrix M
    
    //Matrix M_invers merupakan matrix yang berisi invers dari matrix M
    double M_invers[2][2] = {
        {M[1][1]/det_M, (-1)*M[0][1]/det_M},
        {-1 * M[1][0] /det_M, M[0][0]/det_M}
    };
    
    //Matrix xy merupakan matrix yang berisi hasil x dan y
    //Secara matematis, nilai (x,y) tersebut merupakan titik potong dari dua fungsi
    double xy[2][1] = {
        {(M_invers[0][0] * C[0][0]) + (M_invers[0][1] * C[1][0])},
        {(M_invers[1][0] * C[0][0]) + (M_invers[1][1] * C[1][0])}
    };
    
    //Output
    printf ("Jadi penyelesaian dari persamaan y = 2x + 2 dan y = 4x - 4 adalah (x, y) = (%f, %f)\n", xy[0][0], xy[1][0]);
    
    return (0);
}
