#ifndef MAHAS_H
#define MAHAS_H

typedef struct{
	char Nama[100];
	float Nilai;
	char Indeks;
}mahas;


void constructor(mahas *_a, char Nama[100], float Nilai, char Indeks); // memasukkan Nama, Nilai dan Indeks ke dalam variable mahas

char findModusIndeks(mahas a[], int total); // mencari modus

int findNumModusIndeks(mahas a[], int total);// mencari jumlah modus

int findMax(mahas a[], int total); //mencari indeks mahasisswa yang memiliki nilai Max

int findMin(mahas a[], int total); // mencari indeks mahasiswa yang memiliki nilai Min

float findAvg(mahas a[], int total);// mencari nilai rerata


#endif