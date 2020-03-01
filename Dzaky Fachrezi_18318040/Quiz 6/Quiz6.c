// Quiz 6
// Dzaky Fachrezi 18318040

#include <stdio.h>

int main(){
    double x[501];
    double h[501];
    double y[501];
    int i,j;
    FILE *fp;
    char *filename = "konvolusi.txt";

    // x(t)
    for (i=0;i<301;i++)
	{
        if (i<=100)
		{
            x[i] = 0;
        }
        else
		{
            x[i] = 0.01 * (i-1) / 2; //dt = 0.01
        }
    }
    // h(t)
    for (i=0;i<201;i++)
	{
        if (i<= 100)
		{
            h[i] = 0.01 * i; //dt = 0.01
        }
        else
		{
            h[i] = 0.01 * (200-i);
		}
    }
	
	//x(t) dan h(t) nol untuk yang tidak memiliki nilai fungsi
    for (i=302;i<501;i++)
	{
        x[i] = 0;
    }
    for (j=202;j<501;j++)
	{
        h[j] = 0;
    }

    // Integral Konvolusi
    for(i=0;i<501;i++)
	{
        y[i] = 0;
        for (j=0;j<=i;j++)
		{
            y[i] = y[i] +0.01 * (x[j]*h[i-j]);
        }
    }

    fp = fopen(filename, "w");
	//Mengisi file
    for (i=0;i<501;i++)
	{
        printf("%lf \n",y[i]);
        fprintf(fp, "%lf\n",(0.01*i));
    }
    for (i=0;i<501;i++)
	{
        fprintf(fp, "%lf\n",y[i]);
    }

    fclose(fp);

    return 0;
}

