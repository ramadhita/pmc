#include <stdio.h>
#include <stdlib.h>

// line 5 merupakan deklarasi alokasi memori array a sebesar 10 X 10
int a[10][10];

// Pada line 7-8 merupakan deklarasi yang digunakan dalam proses switch secara diagonal
int temp_swap_row = 0, temp_swap_col = 0;
int up_bound = 8, low_bound = 1;

int main ()
{
    /*
        Pada line 19 - 35 merupakan proses pemanggilan 
        nilai bilangan bulat random untuk disimpan pada 
        setiap alokasi memori array serta mencetak nilai
        dari setiap elemen array dalam bentuk matriks 10 X 10
    */
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = ((rand() % 20) - 10);
            
            if (a[i][j] >= 0)
            {
                printf(" %d ", a[i][j]);
            }
            else
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    //---------------------------------------------------------------------------------

    /*
        Pada line 43 - 63 merupakan proses swapping 
        secara bersamaan untuk value swap baris dan kolom
    */
    for (int k = 0; k <= 4 ; k++)
    {
        for (int l = low_bound; l <= up_bound; l++)
        {
            temp_swap_row = a[k][l];
            a[k][l] = a[10-(k + 1)][l];
            a[10-(k + 1)][l] = temp_swap_row;

            temp_swap_col = a[l][k];
            a[l][k] = a[l][10-(k + 1)];
            a[l][10-(k + 1)] = temp_swap_col;

            if (a[i][j] >= 0)
            {
                printf(" %d ", a[i][j]);
            }
            else
            {
                printf("%d ", a[i][j]);
            }
        }

        up_bound -= 1;
        low_bound += 1;
        printf("\n");
    }
    
    printf("\n\n");

    /*
        pada line 78 - 92 merupakan proses cetak nilai 
        array a yang telah terswap dalam bentuk 
        matriks 10 X 10
    */
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i][j] >= 0)
            {
                printf(" %d ", a[i][j]);
            }
            else
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}