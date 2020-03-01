#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Athaya Syaqra 18318021


float f1x (float x) // inisiasi fungsi f1x dengan parameter x
{
    if((x>=1)&&(x<=3)) // jika berada pada 1<=x<=3 
    {
        return ((x-1)/2); // fungsi bernilai x-1
    }
    else 
    {
        return 0; // else fungsi bernilai 0
    }
}

float f2x (float x) // inisiasi fungsi f2x dengan parameter x
{
    if((x>=-1)&&(x<=1)) // jika berada pada -1<=x<=1
    {
        if((x>=0)&&(x<=1)) // jika berada pada 0<=x<=1
        {
            return (1-x); // fungsi bernilai 1-x
        }
        else
        {
            return (1+x); // else fungsi bernilai 1+x
        }
    }
    else
    {
        return 0; // otherwise fungsi bernilai 0
    }
}

int main(){
	float f3, i, t, a, b, dt;
	FILE *fp;

	dt = 0.01;
	a = 0; // batas bawah dengan t minimum dari f1 + t minimum f2
	b = 3+1; // batas atas dengan t maksimum dari f1 + t maksimum f2
	t = a;
	fp = fopen("konvolusi.txt","w"); // membuat file "konvolusi.txt" dalam mode Write
	fprintf(fp,"t  f3\n");
	while(t<=b)
    {
		f3 = 0;
		for(i=1;i<=3;i=i+dt)
        {
			f3 += ((f1x(i))*(f2x(t-i))*(dt)); // proses konvolusi
		}
		fprintf(fp,"%.2f  %.2f\n",t,f3); // output nilai t dan hasil konvolusi
		t = t + dt; // increment t dengan dt
	}
	fclose(fp); // menutup file
}