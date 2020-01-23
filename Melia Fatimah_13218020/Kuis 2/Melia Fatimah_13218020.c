#include<stdio.h>   
#include<math.h>

int main(void)
{
    int A[2][2];
    int X[2];
    int i,j;
    //int Y[2][2];
    int detA;
    int detX;
    int detY;

    printf("f1 : y = 2x + 2\n");
    printf("f2 : y = 4x - 4\n");

    printf("Masukkan matriks variabel untuk f1 dan f2: \n");
    for (i=0; i < 2; i++)
    {
        for (j=0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
            printf("\n");
        }
    }

    printf("Masukkan matriks hasil untuk f1 dan f2: \n");
    for (i=0; i < 2; i++)
    {
        scanf("%d", &X[i]);
        printf("\n");
    }

    detA = (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);

    detX = (X[0]*A[1][1])-(X[1]*A[0][1]);
    
    detY = (A[0][0]*X[1])-(X[0]*A[1][0]);

    printf("x yang berpotongan : %d\n", detX/detA);
    printf("y yang berpotongan : %d", detY/detA);

return 0;
}
