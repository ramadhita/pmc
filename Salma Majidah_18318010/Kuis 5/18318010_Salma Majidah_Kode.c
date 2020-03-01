//Nama: Salma Majidah
//NIM :18318010
//KUIS 5

//Mengurutkan nilai mahasiswa yang diisi dengan angka random antara 50-100 dan menggunakan struct
#include <stdio.h>
#include <string.h>

//Struktur Rekap
//Berisi nama, nilai, dan indeks
struct rekap {
	char nama[100];
	int nim;
	int nilai;	
};

int main(){
	//Inisialisasi
	struct rekap coba[10], tmp;
	int i,j;
	double jumlahnilai = 0;
	FILE *fp;
	fp = fopen("rekapdata.txt", "w+");
	
	//Pengisian Nama tiap orang
	strcpy(coba[0].nama, "Mawar");
	strcpy(coba[1].nama, "Melati");
	strcpy(coba[2].nama, "Budi");
	strcpy(coba[3].nama, "Bambang");
	strcpy(coba[4].nama, "Lili");
	strcpy(coba[5].nama, "Fadia");
	strcpy(coba[6].nama, "Melia");
	strcpy(coba[7].nama, "Yasmin");
	strcpy(coba[8].nama, "Jeihan");
	strcpy(coba[9].nama, "Salma");
	
	//Generate random nilai dan nim dan menghitung jumlah nilai
	//Output pada layar mahasiswa yang belum terurut
	for (i=0; i<10; ++i){
		coba[i].nim = (rand()%100000000)+10000000;
		coba[i].nilai = (rand()%51)+50;
		jumlahnilai+= coba[i].nilai;
		printf("%d %s %d %d\n", i+1, coba[i].nama, coba[i].nim, coba[i].nilai);
	}
	
	//Mengurutkan mahasiswa berdasarkan nilai terbesar ke terkecil
	for(i = 0; i <10; i++){
    	for(j=0; j <9-i; j++){
			if(coba[j].nilai < coba[j+1].nilai){
        		tmp = coba[j];
        		coba[j] = coba[j+1];
        		coba[j+1] = tmp;
			}
		}
	}
	//Output nilai pada file eksternal dan menghitung rata rata
	fprintf(fp, "No	Nama	NIM	Nilai\n");
	for (i=0; i<10; ++i){
		fprintf(fp, "%d	%s	%d	%d\n", i+1, coba[i].nama, coba[i].nim, coba[i].nilai);
	}
	fprintf(fp, "Rata rata nilai: %.1lf", jumlahnilai/10);
	
	//Menutup file
	fclose(fp);
	return 0;
}
