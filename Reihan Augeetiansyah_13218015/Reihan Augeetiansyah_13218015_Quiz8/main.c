#include <stdio.h>
#include <math.h>

// Fungsi Random
int random(int lower, int upper)
                             
{ 
    int num = (rand() %  (upper - lower + 1)) + lower; 
    
    return(num); 
} 


int main()
{
    int A[10][10];
    int i,j,temp1,temp2;
    FILE*fp = fopen("matriks.txt", "w+");

    for (i = 0; i < 10; i++)
    {
        for (j=0; j<10; j++)
        {
            A[i][j]=random(-10,10);
        }
    }

    // Print matriks
    for (i = 0; i < 10; i++)
    {
        for (j=0; j<10; j++)
        {
            printf("%d, ", A[i][j]);
            fprintf(fp,"%d, ", A[i][j]);  
        }
        printf("\n");
        fprintf(fp,"\n");
    }

    // Proses penukaran
    for (i = 0; i < 4; i++)
    {
        for (j=1+i; j<10-i-1; j++)
        {
            // Atas Bawah
            temp1 = A[i][j];
            A[i][j] = A[9-i][j];
            A[9-i][j] = temp1;

            // Kiri Kanan
            temp2= A[j][i];
            A[j][i] = A[j][9-i];
            A[j][9-i] = temp2;

        }
    }

    

    printf("\n");
    fprintf(fp,"\n");

    // Print matriks yang sudah ditukar
    for (i = 0; i < 10; i++)
    {
        for (j=0; j<10; j++)
        {
            printf("%d, ", A[i][j]);
            fprintf(fp,"%d, ", A[i][j]);
        }
        printf("\n");
        fprintf(fp,"\n");
    }

    fclose(fp);
}