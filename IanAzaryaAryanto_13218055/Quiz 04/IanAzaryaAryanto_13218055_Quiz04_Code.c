// Nama         : Ian Azarya Aryanto
// NIM          : 13218055
// Kelas        : K02 EL2008
// Deskripsi	: Plotting Nilai Output dari Rangkaian Low Pass 
#include <stdio.h>

int main () {
	double Vs = 5;
	double R  = 10000;
	double C = 0.000001;
	double T = R*C;
	//Asumsi nilai besaran pada komponen sudah diketahui 
	double t = 0;
	double dt; 
	//Partisi dari perhitungan yang akan dilakukan
	double Vo = 0;
	int i=0;
	int j=0;
	double array[1000]; 
	FILE *myfile;
	//Array penampung nilai Tegangan Output
	
	printf("Masukkan partisi waktu (dt) : ");
	scanf("%lf",&dt);
	// Input nilai partisi yang diinginkan 
	//(semakin mendekati 0 maka akan semakin presisi perhitungan)
	while ((Vo < Vs) && (i<1000))  {
		array[i] = Vo;
		Vo = (Vs+(Vo*T/dt))/(1+(T/dt));
		i += 1;
		}
	
	myfile = fopen ("IanAzaryaAryanto_13218055_Quiz04_DataCSV.csv","w");
	//Membuka file eksternal IanAzaryaAryanto_13218055_Quiz04_DataCSV.csv untuk diakses
	//"w" untuk menulis pada file tersebut

	for (j=0; j<1000; j++){
		if ((array[j]>0)&&(j<=i)){
			fprintf(myfile, "%.5f,%.5f\n",t,array[j]);
			t = t + dt;
				}
		} 
	//For loop untuk menuliskan nilai Tegangan Output (Vo) dalam array
	//Ke file eksternal IanAzaryaAryanto_13218055_Quiz04_DataCSV.csv
	printf("\nNilai Vo dengan partisi waktu %lf s \n",dt);
	printf("telah berhasil diwrite ke dalam file lowpass.csv...");
	fclose(myfile);
	//Menutup file eksternal IanAzaryaAryanto_13218055_Quiz04_DataCSV.csv setelah selesai digunakan
	
	return 0;
}
