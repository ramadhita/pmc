// Nama           : Ian Azarya Aryanto
// NIM            : 13218055
// Kelas          : K02 EL2008

#include <stdio.h>

double function1 (double x);
double function2 (double x);

int main () {
	double array[100000]= {0};
	double dt = 0.01;
	int i = 0;
	double sum = 0;
	double length = 2;
	FILE *filebaca;
	printf("Fungsi yang digunakan adalah : \n");
	printf("f1(x) = 0.5(x-1) , x>=1, x<=3\n");
	printf("f2(x) = (x+1, x>=-1, x<=0) & (-x+1, x>=0, x<=1)\n");
	for (double n=-10; n<=10; n+=dt){
		for (double k=-1; k<=1+length; k+=dt){
			sum = sum + (function2(n-k)*function1(k)*dt);
			}
			array[i]= sum;
			sum = 0;
			i+=1;
		} 
	filebaca = fopen("IanAzaryaAryanto_13218055_Quiz06_CSV.csv","w");
	fprintf(filebaca, "x,y \n");
	i = 0;
	for (double x=-10; x<=10; x+=dt){
		fprintf(filebaca, "%lf,%lf\n", x, array[i]);
		i += 1;
		}
	fclose(filebaca);
	printf("\nFungsi f1 dan f2 telah berhasil dikonvolusi!\n");
	printf("Data hasil konvolusi telah dimasukkan ke dalam file :\n");
	printf("IanAzaryaAryanto_13218055_Quiz06_CSV.csv");
	
	return (0);
}

double function1 (double x) {
	double y =0;
	if ((x<=3) && (x>=1)){
		y = 0.5*(x-1);
		}
	return(y);
}

double function2 (double x) {
	double y =0;
	if ((x<0) && (x>=-1)){
		y = x+1;
		}
	else {
		if ((x<=1)&&(x>=0)) {
			y = (-1*x)+1;
			}
		}
	return(y);
}
