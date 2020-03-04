//Nama: Salma Majidah
//NIM : 18318010

//KUIS 7
//BAK BOCOR
//Menghitung waktu hingga bak mencapai ketinggian maksimum atau ketika perubahan ketinggian = 0
//Diketahui luas bak = 1mx1mx1m dan debit keran yag mengisi bak 1 L/s
//Terdapat lubang pada dasar kolam dengan d = 5 cm
//anggap g = 10 m/s^2

#include <stdio.h>
#include <math.h>

//RUMUS UMUM : 
//Perubahan h bak = perubahan seharusnya yang diisi - perubahan h karena air bocor
//anggap dt = 1ms yaitu waktu pendekatan perubahan h yang dilakukan
//dalam 1ms seharusnya bak dapat mencapai ketinggian 1dm3/1m2/100 = 0.001 cm 
//perubahan h karena air bocor dihitung dengan h = (debit bocor)/(alas bak)
//debit bocor = (luas penampang lubang)*(kecepatan air)
//kecepatan air (v) = sqrt(2gh) (dengan h adalah ketinggian air dari dasar bak ke permukaan air di bak)
//luas penampang lubang = 1/4*diameter^2*pi cm^2
//sehingga dh = 0.0001 - (luas*kecepatan/alas)

int main (){
	double h = 0, hawal=0, dh, dt = 0.001;
	double t,g=0.001;							//g = 0.001 cm/ms2
	FILE*fp;
	double luas=22*25/28;							//luas dalam satuan cm2
	fp = fopen("bak bocor.txt", "w");
	
	//Perhitungan dh untuk 1 ms awal
	dh = 0.0001 - (luas*sqrt(2*g*(h))/10000);
	h += dh;
	
	//Pengulangan perhitungan ketinggian hingga nilai maksimum (1m) tercapai atau perubahan tinggi = 0
	for (t=0.001; ((hawal-h)<0 && h < 100); t+=dt){
		printf("%.3lf	%.3lf\n", t, h);
		fprintf(fp, "%.3lf	%.3lf\n", t, h);
		dh = 0.0001 - (luas*sqrt(2*g*(h))/10000);
		hawal = h;
		h += dh;
	}
	printf("waktu akhir: %.3lf detik", t-dt);
	fprintf(fp,"waktu akhir: %.3lf detik", t-dt);
	fclose(fp);
	return 0;
}
