#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 /*	EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
	Hari dan Tanggal	: 20 Februari 2020
	Nama (NIM)			: Christy Grace Siagian (18317501)
	Nama File			: nilai_siswa.c
	Deskripsi			: Mengurutkan nilai siswa dari terbesar dan terkecil serta menuliskan nilai siswa sebelum dan sesudah terurut ke dalam file eksternal
*/

struct mahasiswa {
	char nama[100];
	char nim[10];
	int nilai;
};

int main(){
	struct mahasiswa data[11];
	int i,j;
	char temp_nama[100];
	char temp_nim[8];
	int temp_nilai;
	int count;
	float mean;
	FILE *file;
	FILE *file1;
	
	count = 0;
	for(i=0;i<10;i++){
		printf("Masukkan nama siswa ke %d\n",i+1);
		scanf("%s",data[i].nama);
		printf("Masukkan nim siswa ke %d\n",i+1);
		scanf("%s",data[i].nim);
		data[i].nilai = (rand()%(51)+50);
		printf("Nilai siswa ke %d : %d\n",i+1,data[i].nilai);
		count = count + data[i].nilai;
		

	}
	file1 = fopen("daftar_nilaiprev.txt","w"); 
	for(i=0;i<10;i++){
		fprintf(file1, "%d\t%s\t%s\t%d\n",i+1,data[i].nama,data[i].nim,data[i].nilai);
	}

	for (i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(data[i].nilai<data[j].nilai){
				//Switch 
				temp_nilai = data[i].nilai;
				strcpy(temp_nama,data[i].nama);
				strcpy(temp_nim,data[i].nim);
				
				data[i].nilai= data[j].nilai;
				strcpy(data[i].nama,data[j].nama);
				strcpy(data[i].nim,data[j].nim);
				
				data[j].nilai = temp_nilai;
				strcpy(data[j].nama,temp_nama);
				strcpy(data[j].nim,temp_nim);
			}
		}
	}
	
	mean = count/10;
	file = fopen("daftar_nilaiafter.txt","w"); 
	
	fprintf(file,"Rata-rata kelas : %.4f\n",mean);
	fprintf(file, "NO.\tNama\tNIM\tnilai\n");
	for(i=0;i<10;i++){
		fprintf(file, "%d\t%s\t%s\t%d\n",i+1,data[i].nama,data[i].nim,data[i].nilai);
	}
	fclose(file);
	fclose(file1);
	
	return 0;
}