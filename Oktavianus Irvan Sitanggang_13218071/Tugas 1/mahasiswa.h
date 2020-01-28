#ifndef MAHAS_H
#define MAHAS_H

typedef struct{
	char Nama[100];
	float Nilai;
	char Indeks;
}mahas;


void constructor(mahas *_a, char Nama[100], float Nilai, char Indeks);

char findModusIndeks(mahas a[], int total);

int findMax(mahas a[], int total);

int findMin(mahas a[], int total);

float findAvg(mahas a[], int total);


#endif