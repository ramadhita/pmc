//Nama  : Winnie Chuang
//NIM	: 18318002


#include <stdio.h>
#include <math.h>
#define vmasuk 1000 //dalam cm kubik

int
main ()
{
	float volumekeluar; //mendefinisikan variabel yang akan dipakai
	float volumetangki;
	float vkeluar;
	int waktu = 0;
	float volumemasuk;
	float tinggi = 0;
	FILE* filecsv; 
	filecsv = fopen ("filetangkibocor.csv", "w+"); //membuka file
	
	while (volumetangki <1000000) //jika volume tangki masih kurang dari 1.000.000 (semua satuan saya ganti dalam cm)
	{
		volumemasuk = 1000*waktu; //volume masuk adalah kecepatan masuk (1000 cm^3/s) dikali dengan waktu
		vkeluar = sqrt(2*980*tinggi); //kecepatan keluar adalah akar (2*g*h)
		volumekeluar = vkeluar*waktu*(3.14*2.5*2.5); //maka volume keluar adalah kevepatan keluar dikali waktu dikali luas penampangnya
		volumetangki = (volumemasuk - volumekeluar); //volume tangki adalah perbedaan dari kedua volume tersebut
		tinggi = tinggi + volumetangki/10000; //tingginya adalah tinggi ditambah volume tangki dibagi dengan luas penampang tangki 
		fprintf (filecsv, "%d, %f\n", waktu, tinggi); //mengeprint ke file
		waktu++; //waktu bertambah
	}
	printf("volume air maks saat detik ke-%d" , (waktu-3)); //karena data pada detik ke 86, 87, dan 88 aneh
	fclose (filecsv);
	return 0;
}
	
	
	
	
	
