/******************************************************************************

Quiz 8
Soal :
- matriks a 10x10 berisi random integer dalam range [-10, 10]

K. Clement Teja
13218079

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{   int A[10][10];
    int temp;
    int mincol = 0, maxcol = 4, minrow = 1, maxrow = 9;
    int i = 0, j = 0;

/* Proses dan Display */
    srand(time(0));

    // Proses pengisian data pada matriks A dan display
    for (i = 0; i < 10; ++i)
    {
        for (j = 0; j < 10; ++j)
        {
            A[i][j] = rand() % 21 - 10; 
            printf("%d  ", A[i][j]); 
        }
        printf("\n");
    }
 
    // Proses penukaran data kiri dan kanan pada matriks A    
    for (j = mincol; j < maxcol; ++j)
    {   
        for (i = minrow; i < maxrow; ++i)
        {
            temp = A[i][j];
            A[i][j] = A[i][9-j];
            A[i][9-j] = temp;
        }
        minrow += 1;
        maxrow -= 1;
    }

    // Proses penukaran data atas dan bawah pada matriks A    
    minrow = 0;
    maxrow = 4;
    mincol = 1;
    maxcol = 9;

    for (i = minrow; i < maxrow; ++i)
    {
        for (j = mincol; j < maxcol; ++j)
        {
            temp = A[i][j];
            A[i][j] = A[9-i][j];
            A[9-i][j] = temp;
        }
        mincol += 1;
        maxcol -= 1;
    }   

    // Display matriks A yang baru
    for (i = 0; i < 10; ++i)
    {
        for (j = 0; j < 10; ++j)
        {
            printf("%d  ", A[i][j]); 
        }
        printf("\n");
    }
}