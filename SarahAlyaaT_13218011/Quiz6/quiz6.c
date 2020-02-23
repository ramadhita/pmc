#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Fungsi f1(x) = 1/2x-1/2
double f1 (double x){
	if (x > 1 && x < 3)
		return(0.5*(x-1));
	else
		return(0);
}

//Fungsi f2(x) 
double f2(double x){
	if (x<0 && x>-1)
		return(x+1);
	else if (x>=0 && x<1)
		return(1-x);
	else
		return(0);
}

//Main program
int main(void)
{
	double x, res, i, di=0.01; //Inisialisasi Variabel
	FILE *fp;
	fp = fopen("test5.csv", "w");
	for (x=0; x<6; x+=0.01){ //Mengambil data untuk nilai x=[0,6)
		res = 0;
		for (i=0; i<=x; i+=0.01) //Konvolusi pada sumbu i dengan pergeseran sejauh x
		{
			res = res+di*f1(i)*f2(x-i);		
		}
		fprintf(fp, "%lf,%lf\n",x,res); //Input hasil ke file test5.csv
	}	
		fclose(fp);
		return 0;
}