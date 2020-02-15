/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 */

#include <stdio.h>
#include <math.h>

int main(void)
{ 
	//Inisialisasi
	FILE *fp = fopen("C:/Users/user/Documents/output.txt", "w+");
	double Vcbaru, t;
	double Vc = 0;
	double dt = 0.001;
	double Vi = 5.0;
	double R = 10000;
	double C = 0.000001;

	//Looping untuk mencari nilai Vc per waktu
	for (t = 0; t<=0.2; t+= dt){
		Vcbaru = ((Vi*dt - Vc*dt)/(R*C))+ Vc;
		//Output
		printf("%f\n", Vc);
		fprintf(fp, "%f\n", Vc);
		//Mengganti nilai Vc dengan Vc baru
		Vc = Vcbaru;
	}
	fclose(fp);
	return(0);
}
	
