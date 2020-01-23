//Hendra Chayadi Sutanto, 18318013
//Kuis2
//Materi array
//21-01-2020
//Mencari titik potong dari dua persamaan garis (y = 2x + 2) dan (y = 4x-4)
//Menggunakan metode cramer

#include <stdio.h>

int main () {

    int detx, dety, det;

    int x[2][2] = {{2,-1}, {4,-1}};
    int y[2] = {-2,4};

    det = ( ( x[0][0] * x[1][1] ) - ( x[0][1] * x[1][0] ) );
    detx = ( ( y[0] * x[1][1] ) - ( y[1] * x[0][1] ) ) / det;
    dety = ( ( x[0][0] * y[1] ) - ( x[1][0] * y[0] ) ) / det;
    

   
    printf("Nilai dari x menjadi = %d \n", detx);
    printf("Nilai dari y menjadi = %d", dety);

    return (0); 
}

    