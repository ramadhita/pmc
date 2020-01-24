#include <stdio.h>
#include <math.h>

int main ()
{
    double a[2][2], b[2], c[2][2], r[2], determinant;
    int x,i;

    a[0][0] = 2;
    a[0][1] = (-1);
    a[1][0] = 4;
    a[1][1] = -1;

    b[0] = -2;
    b[1] = (4);
    
    //determinant
    determinant = (float)1/((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
    
    //adjoint
    c[0][0]=a[1][1];
    c[1][1]=a[0][0];
    c[0][1]=-a[0][1];
    c[1][0]=-a[1][0];

    //inverse
    for ( i = 0; i <=1; i++)
    {
        for ( x = 0; x <=1; x++)
        {
            c[x][i]= (float)determinant*c[x][i];
        }    
    }

    //Result
        r[0]= (float)((c[0][0] * b[0]) + (c[0][1] * b[1]));
        r[1]= (float)((c[1][0] * b[0]) + (c[1][1] * b[1]));
    //Output
    for (i = 0; i <=1; i++)
    {
        printf("%lf \n", r[i]);
    }
    return 0;
}