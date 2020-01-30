/* PROGRAM MENCARI MAX, MIN, RATA-RATA
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 28 Januari 2020 */

/*
Buat daftar 5 orang yang berisi nama, nilai, indeks.
Cari nilai max, min, rata-rata (namanya siapa)
*/

#include <stdio.h>
#include <string.h>

struct DataSiswa { //Struktur data mahasiswa
	char nama[50];
	int nilai;
};

	char indeks_mhs (int nilai_mhs) //Fungsi menentukan indeks nilai
	{	
		if (nilai_mhs >= 80) {
		return 'A';
		}
		else if (nilai_mhs >= 70 && nilai_mhs < 80) {
		return 'B';
		}
		else if (nilai_mhs >= 65 && nilai_mhs < 70) {
		return 'C';
		}
		else {
		return 'D';
		}

}

int main()
{	
	struct DataSiswa mahasiswa[5];
	
	//Data mahasiswa 1
	strcpy(mahasiswa[0].nama,"Mawar");
	mahasiswa[0].nilai = 67;
	
	//Data mahasiswa 2
	strcpy(mahasiswa[1].nama, "Melati");
	mahasiswa[1].nilai = 85;
	
	//Data mahasiswa 3
	strcpy(mahasiswa[2].nama, "Wisteria");
	mahasiswa[2].nilai = 85;
	
	//Data mahasiswa 4
	strcpy(mahasiswa[3].nama, "Carnation");
	mahasiswa[3].nilai = 70;
	
	//Data mahasiswa 5
	strcpy(mahasiswa[4].nama, "Lili");
	mahasiswa[4].nilai = 60;
	
	
	int maks, min, i;
	float rata2;

	maks=mahasiswa[0].nilai;
	min=mahasiswa[0].nilai;
	
	for (i=0; i<5; i++) { //Mencari nilai maksimum dan minimum
		if (maks < mahasiswa[i].nilai){
			maks = mahasiswa[i].nilai;
		}
		if (min > mahasiswa[i].nilai){
			min = mahasiswa[i].nilai;
		}
		
	
	}
	printf("\nNilai maksimum mahasiwa: %d\n", maks); //Mencetak nama dan nilai maksimum
	printf("Nama mahasiswa: \n");
	for (i=0; i<5; i++) {
		if (maks == mahasiswa[i].nilai) {
			printf("%s \n", mahasiswa[i].nama, maks);
		}
	}
	
	printf("\nNilai minimum mahasiwa: %d\n", min); //Mencetak nama dan nilai minimum
	printf("Nama mahasiswa: \n");
	for (i=0; i<5; i++) {
		if (min == mahasiswa[i].nilai) {
			printf("%s \n", mahasiswa[i].nama, min);
		}
	}
	
	rata2 = (67+85+85+70+60)/5; //Mencetak nama dan nilai rata-rata
	printf("\nNilai rata-rata mahasiswa: %f\n", rata2);
}
