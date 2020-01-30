#include <stdio.h>
#define NMax 2

int main(void)
{
    //f1: y1 = 2x+2
    //f2: y2 = 4x-4
    int A[NMax][NMax] = {-2, 1, -4, 1}, B[NMax] = {2, -4}, R[NMax] = {0,0}, AT[NMax][NMax], detA, i, j;
    
    //determinan
    detA = A[1][1]*A[0][0]-A[1][0]*A[0][1];
    
    //Transpose & Minor
    //AT[0][0] = A[1][1];
    //AT[1][1] = A[0][0];
    //AT[1][0] = -A[1][0];
    //AT[0][1] = -A[0][1];

    for ( i = 0; i < NMax; i++)
    {
        for ( j = 0; j < NMax; j++)
        {
            if (i == j)
            {
                if (i == NMax-1)
                {
                    AT[i][j] = A[0][0];
                }
                else
                {
                    AT[i][j] = A[NMax-1][NMax-1];
                }
                
            }
            else
            {
                AT[i][j] = -A[i][j];
            }
            
        }
        
    }
    
    //[x,y] = A-1 * B 
    for ( i = 0; i < NMax; i++)
    {
        for ( j = 0; j < NMax; j++)
        {
            R[i] = R[i]+ (AT[i][j]*B[j]/detA);
        }
    }
    
    printf("Nilai x yang memenuhi: %d.\n", R[0]);
    printf("Nilai y yang memenuhi: %d.\n", R[1]);


    return(0);
}