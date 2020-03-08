#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int A[11][11];
    int temp;
    int i, j, k, l, m, n;
    
    for (i=1;i<=10;++i)
    {
        for (j=1;j<=10;++j)
        {
            A[i][j] = (rand()%20)-10;
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }
    
    
    for (m=1;m<=10;++m)
    {
        for (n=1;n<=10;++n)
        {
            if (n+m<=10)
            {
                if(n>m)
                {
                    temp = A[m][n];
                    A[m][n] = A[11-m][n];
                    A[11-m][n] = temp;
                }
                if(m>n)
                {
                    temp = A[m][n];
                    A[m][n] = A[m][11-n];
                    A[m][11-n] = temp;
                }
            }
        }
    }    


    for (k=1;k<=10;++k)
    {
        for(l=1;l<=10;++l)
        {
            printf("%d  ", A[k][l]);
        }
        printf("\n");
    }

    return 0;
}
