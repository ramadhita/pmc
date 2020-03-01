#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Mahasiswa { 
   int no; 
   char nim[9]; 
   char nama[20]; 
   int nilai; 
};

void swap(struct Mahasiswa *a, struct Mahasiswa *b) 
{
    struct Mahasiswa temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
	
	// penyusunan inisial data
	
	struct Mahasiswa data[10];
	
	char nim[10][9] = {"13218034", "13218050", "13218055", "13218060", "13218065", "13218070", "13218075", "13218080", "13218085", "13218090"};
	char nama[10][20] = {"Andhi", "Bunga", "Budi", "Akbar", "Johan", "Liam", "Kevin", "Leo", "Abi", "Tanya"};
	
	int akumulasi = 0;
	for (int i = 0; i < 10; i++) {
		data[i].nilai = 50 + rand() % 51;
		strcpy(data[i].nama, nama[i]);
		strcpy(data[i].nim, nim[i]);
		akumulasi += data[i].nilai;
	}
	
	// bubble sort
   int i, j;
   for (i = 0; i < 9; i++)         
       for (j = 0; j < 9-i; j++)  
           if (data[j].nilai < data[j+1].nilai) 
              swap(&data[j], &data[j+1]);  
	
	// tambah nomor
	for (i = 0; i < 10; i++) {
		data[i].no = i+1;
	}
	
	// membuka file
    FILE *fp; 
    fp = fopen("output.csv", "w");

    // print header ke file
    fprintf(fp,"No,NIM,Nama,Nilai");
	
	// print tabel ke file
	for (i = 0; i < 10; i++) {
		fprintf(fp, "\n%d,%s,%s,%d", data[i].no, data[i].nim, data[i].nama, data[i].nilai);
	}
	
	// print rata rata ke file
	fprintf(fp, "\nrata-rata,,,%f", akumulasi / (float) 10);
	
	fclose(fp);
};