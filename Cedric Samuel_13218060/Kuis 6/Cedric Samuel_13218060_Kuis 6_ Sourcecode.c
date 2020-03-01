//Soal 2 Konvolusi
//Cedric Samuel/13218060

#include <stdio.h>
#include <string.h>
#include <math.h>

//Fungsi 1
double f1 (double t)
	{ 
	if(t>=1 && t<=3)
		{return((t-1)/2);}
	else
		return(0);
	};

//Fungsi 2
double f2 (double t)
	{
	if(t>=-1 && t<=0)
		{return(t+1);}
	else if (t>0 && t<=1)
		{return(1-t);}
	else
		return(0);
	};
		
int main(void)
{
//Deklarasi dan Inisiasi
double f3[300]; //f3 merupakan fungsi hasil konvolusi f1 dan f2
double dt=0.05;
double i,j;
int k;
int m=3; //karena kurva f1 mulai dari t=1 sampai t=3 ada 3 data 
int n=3; //karena kurva f2 mulai dari t=-1 sampai t=1, ada 3 data
FILE *fp1;

//Proses
k=0;
for(i=0; i<=(m+n-1); i+=dt)
	{
	for(j=-1; j<=3; j+=dt)
		{
		f3[k]=f3[k]+((f1(j)*f2(i-j)*dt));	
		};
	k = k + 1;
	};

//External file
fp1=fopen("kurvahasil.csv", "w+");
for(k=0;k<=299;k++)
	{fprintf(fp1,"%.8f\n", f3[k]);};
fclose(fp1);

return(0);
}
