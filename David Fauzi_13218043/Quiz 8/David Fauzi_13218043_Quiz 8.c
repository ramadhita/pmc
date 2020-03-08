// David Fauzi
// Quiz 8
// 13218043 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void displaymatriks(int mat[10][10]);
int main() {
    int temp;
    int matriks[10][10];
    time_t t;
    srand((unsigned) time(&t));
    // Input nilai Matriks 
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           matriks[i][j]=(rand()%20)-10;
        }
    }
    //Display nilai sebelum proses
    displaymatriks(matriks);
    // Tukar atas-bawah
        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if((i!=j)&&(i+j<9)&&(j>i))
            {
            temp=matriks[i][j];
            matriks[i][j]=matriks[9-i][j];
            matriks[9-i][j]=temp;
            }

        }
    }
    // Tukar kanan-kiri
        for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if((i!=j)&&(i+j<9)&&(i>j))
            {
            temp=matriks[i][j];
            matriks[i][j]=matriks[i][9-j];
            matriks[i][9-j]=temp;
            }

        }
    }
    printf("\n");
    // Display Matriks final
    displaymatriks(matriks);
    return 0;
}

void displaymatriks(int mat[10][10])
{
        for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ",mat[i][j]);

        }
        printf("\n");
    }
}
