#include <stdio.h>
#include <stdlib.h>

//Muhammad Heronan Hyanda 13218073 Quiz 8
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    //Membuat matriks
    int a[10][10];
    int i,j ;
    //memasukkan nilai
    for (i = 0; i < 10; i += 1)
    {
        for (j = 0; j < 10; j += 1)
        {
            a[i][j] = rand()% 21 + (-10);
            printf("%d ", a[i][j]);
            if (j == 9)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    //proses tukar
    for (i = 0; i < 4; i += 1)
    {
        for (j = i+1; j < 9-i; j += 1)
        {
            swap(&a[i][j], &a[9-i][j]);
        }
    }
    for (j= 0; j < 4; j += 1)
    {
        for (i = j+1; i < 9-j; i += 1)
        {
            swap(&a[i][j], &a[i][9-j]);
        }
    }
    //printing
    for (i = 0; i < 10; i += 1)
    {
        for (j = 0; j < 10; j += 1)
        {
            printf("%d ", a[i][j]);
            if (j == 9)
            {
                printf("\n");
            }
        }
    }
}
