/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * Hari dan Tanggal	: Kamis, 20 Februari 2020
 * Nama (NIM)		: Zulfikar Nima Arifuzzaki (13218029)
 * Nama File		: Quiz 5.c
 * Deskripsi		: Membuat database yang memuat daftar siswa, dan mengolah data tersebut berdasarkan nilainya
 */
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// STRUCT UNTUK MENAMPUNG IDENTITAS SISWA
struct siswa
{
	int no;
	int NIM;
	char name[20];
	int nilai;
	};

int main()
{
	FILE *fptr1;
	FILE *fptr2;	
	struct siswa daftar_siswa[10], siswax;
	int i, j;
	
		
	fptr1 = fopen("daftar_nilai1.txt", "w");
	fptr2 = fopen("daftar_nilai2.txt", "w");
	
	//PROSES MENGISI DAFTAR SISWA
	daftar_siswa[0].no = 0;
	strcpy(daftar_siswa[0].name, "Ronan");
	daftar_siswa[0].NIM = 13218209;
	
	daftar_siswa[1].no = 1;
	strcpy(daftar_siswa[1].name, "Jul");
	daftar_siswa[1].NIM = 13218009;
	
	daftar_siswa[2].no = 2;
	strcpy(daftar_siswa[2].name, "Rhesa");
	daftar_siswa[2].NIM = 13218109;
	
	daftar_siswa[3].no = 3;
	strcpy(daftar_siswa[3].name, "Chyndi");
	daftar_siswa[3].NIM = 13218099;
	
	daftar_siswa[4].no = 4;
	strcpy(daftar_siswa[4].name, "Ifa");
	daftar_siswa[4].NIM = 13218719;
	
	daftar_siswa[5].no = 5;
	strcpy(daftar_siswa[5].name, "Aku");
	daftar_siswa[5].NIM = 13218209;
	
	daftar_siswa[6].no = 6;
	strcpy(daftar_siswa[6].name, "Rara");
	daftar_siswa[6].NIM = 13218019;
	
	daftar_siswa[7].no = 7;
	strcpy(daftar_siswa[7].name, "Cuk");
	daftar_siswa[7].NIM = 13218029;
	
	daftar_siswa[8].no = 8;
	strcpy(daftar_siswa[8].name, "CD");
	daftar_siswa[8].NIM = 13218079;
	
	daftar_siswa[9].no = 9;
	strcpy(daftar_siswa[9].name, "Okta");
	daftar_siswa[9].NIM = 13218079;
	
	// MENGISI NILAI MASING-MASING SISWA SECARA RANDOM DENGAN RENTAR 50-100
	for (i = 0; i< 10; i+=1)
	{
		daftar_siswa[i].nilai = (rand() % (100 -50 + 1)) + 50;
		fprintf(fptr1, "%d,%d,%s,%d\n", daftar_siswa[i].no, daftar_siswa[i].NIM, daftar_siswa[i].name, daftar_siswa[i].nilai);
		};
	
	// MENGURUTKAN SISWA BERDASARKAN NILAINYA (MENGGUNAKAN METODE BUBBLE SORT)
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < (10 - i - 1); ++j)
		{
			if (daftar_siswa[j].nilai < daftar_siswa[j + 1].nilai)
			{
				siswax = daftar_siswa[j];
				daftar_siswa[j]	= daftar_siswa[j + 1];
				daftar_siswa[j + 1] = siswax;
				}
		}
	}
	
	// MENCETAK DATA SISWA YANG TELAH DIURUTKAN
	for (i = 0; i< 10; i+=1)
	{
		fprintf(fptr2, "%d,%d,%s,%d\n", daftar_siswa[i].no, daftar_siswa[i].NIM, daftar_siswa[i].name, daftar_siswa[i].nilai);
		};
		
	fclose(fptr1);
	fclose(fptr2);
	return(0);
	}
