#include <stdio.h>

int main(void)
{
    // definisi
    int i,j;
    int a,b,c;
    int matrix[2][3];

    // input f 1
    scanf ("%d %d %d",&a,&b,&c);
    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[0][2] = c;

    // input f 2
    scanf ("%d %d %d",&a,&b,&c);
    matrix[1][0] = a;
    matrix[1][1] = b;
    matrix[1][2] = c;

    // cari
    int e,f,g;
        // det 1
        g = matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
        // det 2
        e = matrix[0][2] * matrix[1][1] - matrix[1][2] * matrix[0][1];
        // det 3
        f = matrix[0][0] * matrix[1][2] - matrix[1][0] * matrix[0][2];

    matrix[0][2] = e/g;
    matrix[1][2] = f/g;

    // tampilkan
    for (i = 0; i<2; i++){     
        printf("%d ", matrix[i][2]);
    }

    return 0;
}
