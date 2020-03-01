#include <stdio.h>

double f1 (double t)
{
    double y;
    if ((t >= 1) && (t <= 3))
	{
        y = (t-1)*(0.5);
    }
    else
	{
        y = 0;
    }

    return y;
}

double f2 (double t)
{
    double y;
    if ((t >= -1) && (t <= 0))
	{
        y = t+1;
    }
    else if ((t > 0) && (t <= 1))
	{
        y = 1-t;
    }
    else
	{
        y = 0;
    }

    return y;
}

int main ()
{
	FILE* fp;
	fp = fopen("/tmp/konvolusi.txt", "w+"); 
	
	double xt, ht, konv, i, j;
	double dt = 0.01;
	
	printf("t; y(t)\n");
    fprintf(fp, "t; y(t)\n");
	
	for (i = 0; i < 5; i += dt)
	{
		konv = 0;
		for (j = 0; j <= i; j += dt)
		{
			xt = f1(j);
			ht = f2(i-j);
			konv = konv + (xt*ht);
		}
		printf("%.3f, %.3f\n", i, konv);
		fprintf(fp, "%.3f, %.3f\n", i, konv);
	}
	
	fclose (fp);
	
	return 0;
}

