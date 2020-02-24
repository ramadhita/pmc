#include <stdio.h>
#include <stdlib.h>

// membuat program perhitungan konvolusi

int main()
{
	double x[500],h[500],y[500];
	double p;
	int i,j;
	FILE*fp;
	fp = fopen("convol.txt","w");
	int dt =0.01 ;// misalkan dt = 0,01
	// untuk x[i]
	for (i=0; i<=500 ; i=i+1);
	{
		if(i>100 && i<=300)
		{
			x[i]=((i-1)/2)*dt;
		}
		else // i<=100 and i > 300 and i<500
		{
			x[i]= 0;
		}
	}
	// untuk h[i]
	for (i=0; i<=500 ; i=i+1);
	{
		if (i<=100)
		{
			h[i] = i*dt;
		}
		else if(i>100 && i<=200)
		{
			h[i]=(200-i)*dt;
		}
		else if (i>200 && i<=500)
		{
			h[i]=0;
		}
	}
	// y(t) = y[i] = sigma x[i] x h[i-j]
	for (i=0; i<= 500; i=i+1)
	{
		y[i] = 0;
		for (j=0; j<=i; j=j+1)
		{
			y[i] = y[i]+(x[j]*h[i-j]);
		}
	}
	p = i*dt;
	for (i=0; i<=500; i=i+1)
	{
		fprintf(fp,"%lf\n",p);
		fprintf(fp,"%lf\n",y[i]);
	}
	fclose(fp);
	return 0;
}		
		
