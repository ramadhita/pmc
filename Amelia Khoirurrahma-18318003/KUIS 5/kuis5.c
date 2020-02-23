/* PROGRAM MENCARI RATA-RATA DAN SORTING NILAI
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 20 Februari 2020 */

/*
Buat daftar 5 orang yang berisi No, Nama, dan NIM. Nilainya random rentang 50-100
Cari nilai rata-rata dan sorting dari tinggi ke rendah
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DataSiswa { //Struktur data mahasiswa
	char nama[50];
	int no, nim, nilai;
};

int main ()
{
	int rata2, i, j, k, jumlah_nilai;
	struct DataSiswa mahasiswa[10], urut;
	strcpy(mahasiswa[0].nama,"Dodo");
	strcpy(mahasiswa[1].nama, "Tina");
	strcpy(mahasiswa[2].nama, "Lisa");
	strcpy(mahasiswa[3].nama, "Raka");
	strcpy(mahasiswa[4].nama, "Bella");
	strcpy(mahasiswa[5].nama, "Zain");
	strcpy(mahasiswa[6].nama, "Lani");
	strcpy(mahasiswa[7].nama, "Romi");
	strcpy(mahasiswa[8].nama, "Randi");
	strcpy(mahasiswa[9].nama, "Hadyan");
	
	jumlah_nilai = 0;
	for (i=0; i<=9; ++i){
		mahasiswa[i].nim = (rand()%100000000)+15500000;
		mahasiswa[i].nilai = (rand()%51)+50;
		mahasiswa[i].no = i+1;
		jumlah_nilai = jumlah_nilai + mahasiswa[i].nilai;
	}
	
	rata2 = (jumlah_nilai)/10; //Mencetak nilai rata-rata
	printf("\nNilai rata-rata mahasiswa: %d\n", rata2);

	//File Awal
	FILE *data1;
	data1 = fopen("DATA AWAL.csv","w");
	
	for (i=0; i<=9; i++)
	{
		fprintf(data1, "%d; %d; %s; %d\n", mahasiswa[i].no, mahasiswa[i].nim, mahasiswa[i].nama, mahasiswa[i].nilai);	
	}
	fclose(data1);	//menutup file
	
	//Sorting nilai
	for (j = 0; j <= 9; j++)
    {
        for (k = 0; k < (9 - j); k++)
        {
            if (mahasiswa[k].nilai < mahasiswa[k + 1].nilai)
            {
                urut = mahasiswa[k];
                mahasiswa[k] = mahasiswa[k + 1];
                mahasiswa[k + 1] = urut;
            }
        }
    }

	//File akhir
	FILE *data2;
	data2 = fopen("DATA AKHIR.csv","w");
	
	for (i=0; i<=9; i++)
	{
		fprintf(data2, "%d; %d; %s; %d\n", mahasiswa[i].no, mahasiswa[i].nim, mahasiswa[i].nama, mahasiswa[i].nilai);	
	}
	fclose(data2);	//menutup file	
}
