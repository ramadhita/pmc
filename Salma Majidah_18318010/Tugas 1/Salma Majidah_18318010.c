//Nama: Salma Majidah
//NIM: 18318010

#include <stdio.h>
#include <string.h>

//Struktur Rekap
//Berisi nama, nilai, dan indeks
struct rekap {
	char nama[10];
	int nilai;
	char indeks;	
};

//Fungsi ind
//Menghasilkan indeks berdasarkan masukan nilai
char ind (int nilai){
	if (nilai <=60 ){
		return 'D'; 
	}
	else if (nilai < 70){
		return 'C';
	}
	else if (nilai < 80){
		return 'B';
	}
	else{
		return 'A';
	}
}

//Program Utama
int main (){
	//inisialisasi array coba
	struct rekap coba[5];
	
	// Masukkan Nama
	strcpy(coba[0].nama, "Mawar");
	strcpy(coba[1].nama, "Melati");
	strcpy(coba[2].nama, "Wisteria");
	strcpy(coba[3].nama, "Carnation");
	strcpy(coba[4].nama, "Lili");
	
	//Masukkan nilai
	coba[0].nilai = 67;
	coba[1].nilai = 85;
	coba[2].nilai = 85;
	coba[3].nilai = 70;
	coba[4].nilai = 60;


	//Menghitung indeks tiap mahasiswa
	int i;
	char x;
	for ( i = 0; i<= 4; ++i){
		coba[i].indeks = ind(coba[i].nilai);
	}
		
	//Mencari nilai maksimum, minimum, dan rata-rata
	int max = coba[0].nilai;
	int min = coba[0].nilai;
	double jumlah;
	int nama_max, nama_min;
	for (i=0; i<= 4; ++i){
		if (max <= coba[i].nilai){
			max = coba[i].nilai;
		}
		if (min >= coba[i].nilai){
			min = coba[i].nilai;
		}
		jumlah += coba[i].nilai; 
	}
	
	//Mengeluarkan nama mahasiswa yang memiliki nilai maksimum
	printf("Nilai maksimum : \n ");
	for (i=0; i<=4; ++i){
		if (coba[i].nilai == max){
			printf("Nama: %s \n Nilai: %d \n", coba[i].nama, max);
		}
	}
	
	//Mengeluarkan nama mahasiswa yang memiliki nilai minimum
	printf("\n Nilai minimum : \n ");
	for (i=0; i<=4; ++i){
		if (coba[i].nilai == min){
			printf("Nama: %s \n Nilai: %d \n", coba[i].nama, min);
		}
	}
	
	//Mengeluarkan nilai rata-rata
	printf("\n Nilai rata-rata : %f \n", jumlah/(i));

	return 0;
}




