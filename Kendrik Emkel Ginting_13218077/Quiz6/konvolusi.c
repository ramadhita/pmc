// Konvolusi

#include <stdio.h>
#define NMax 21

float Fungsi1(float x) //fx1
{
    if ((x >= 1) && (x <= 3))
    {
        return ((x-1)/2);
    }
    else
    {
        return 0;
    }   
}

float Fungsi2(float x) //fx2
{
    if((x >= -1) && (x < 0))
    {
        return (x+1);
    }
    else if ((x >= 0) && (x < 1))
    {
        return (1-x);
    }
    else
    {
        return 0;
    }
    
    
}

int main()
{
    float i, j;
    float sum;
    FILE *outfile;

    outfile = fopen("konvolusi.csv", "w");

    printf("Time, y(t)\n");
    fprintf(outfile, "Time, y(t)\n");
    for ( i = 0; i < 5001; i++)
    {
        sum = 0;
        for ( j = -10000; j < 10000; j++)
        {
            sum = sum+Fungsi1(j/1000)*Fungsi2((i-j)/1000);
        }
         printf("%5.2f, %.2f\n", i/1000, sum/1000);
         fprintf(outfile, "%5.2f, %.2f\n", i/1000, sum/1000);
    }

    fclose(outfile);
    
    return (0);
}