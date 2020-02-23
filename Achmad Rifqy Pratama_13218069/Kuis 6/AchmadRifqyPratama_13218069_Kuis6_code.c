/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>

//Prototype fungsi
float f(double t);
float g(double t);

int main()
{
    //Deklarasi variabel pointer file fp
	FILE *fp;
	//Deklarasi dan Inisialisasi variabel lokal
	float y,t,hasil;
	float delt = 0.001;
	float len_hasil = 5;

    //Open file, jika file belum ada, file dibuat
    fp = fopen("dataKuis5-2.txt", "w+");

    //Proses konvolusi, checking pada detik ke-0 hingga detik ke-len_hasil
	for (t=0; t<=len_hasil; t+=delt){
	  	hasil = 0;
		for (y=0; y<=t; y+=delt){
			hasil += g(y)*f(t-y)*delt;
		}
        //Cetak data hasil tiap waktu t pada increment delt
		fprintf(fp, "%f\t%f \n", t, hasil);
	}
    //Close file
	fclose(fp);
	return 0;
}

//Pendefinisian fungsi
float f(double t){
	if((t<1)||(t>3)){
		return 0;
	}
	else{
		return((t-1)/2);
	}
}

float g(double t){
	if((t>=-1)&&(t<=0)){
		return (t+1);
	}
	else if((t>0)&&(t<=1)){
		return (1-t);
	}
	else{
		return (0);
	}
}