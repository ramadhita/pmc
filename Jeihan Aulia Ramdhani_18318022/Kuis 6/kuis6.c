//Jeihan Aulia Ramdhani 18318022
//Kuis 6

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double f1 (double x){ //fungsi menghitung f1
	if (x>1 && x<3)
		return (0.5*(x-1));
	
	else
		return (0);
		}

double f2(double x){ //fungsi menghitung f2
	if (x>-1 && x<0)
		return (x+1);
	
	else if (x>=0 && x<1)
		return (-x+1);
	
	else
		return (0);	
}

int main(){
	double i, x,hasilkonv,dx=0.01; //inisiasi variabel yang digunakan
	FILE *file1=fopen("hasilkuis6.csv","w"); //menulis pada file eksternal
	fprintf(file1,"x;f3(x)\n");//menulis judul
	for (x=0;x<5;x+=0.01){ //loop untuk menghitung hasil konvolusi
		hasilkonv=0;
		for (i=0;i<=x;i+=0.01){
			hasilkonv+= dx*(f1(x)*f1(x-i));
		}
		fprintf(file1,"%lf;%lf\n",x,hasilkonv);//menulis hasil konvolusi pada file eksternal
	}
	fclose(file1);//menutup file
	return(0);
}
