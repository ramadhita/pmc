// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		: 28 Januari 2020


// TUGAS 1
// Mencari indeks maksimum, minimum, dan mencari rata-rata nilai mahasiswa


#include <stdio.h>
#include <string.h>

int imaks,inmin;
float rata;

typedef struct datamhs
{
	char nama[100];
	int nilai;
	char indeks[100];
} mhs[5];


int maksimum(mhs a)
{
	int i=0;
	int inmaks = 0;
	int nilaimaks = a[0].nilai;
	for (i=0; i< 5; i++)
	{
		if (a[i].nilai > nilaimaks)
		{
			inmaks = i;
			nilaimaks = a[i].nilai;
		}
		
	return inmaks;
	}
}

int minimum(mhs a)
{
	int i=0;
	int inmin = 0;
	int nilaimin = a[0].nilai;
	for (i=0; i< 5; i++)
	{
		if (a[i].nilai < nilaimin)
		{
			inmin = i;
			nilaimin = a[i].nilai;
		}
		
	return inmin;
	printf("%d",inmin);
	}
}

float ratarata(mhs x)
{
	int jumlahmhs = 0;
	int nilaitotal = 0;
	int i=0;
	for (i=0; i<= 4; i++)
	{
	nilaitotal += x[i].nilai;
	jumlahmhs += 1;
		}
	rata = nilaitotal/jumlahmhs;
	return rata;
	}
	


int main()
{
	struct datamhs mhs[5];
	
	strcpy (mhs[0].nama ,"mawar");
	mhs[0].nilai = 67 ;
	strcpy (mhs[0].indeks ,"C");

	strcpy (mhs[1].nama ,"melati");
	mhs[1].nilai = 85 ;
	strcpy (mhs[1].indeks ,"A");

	strcpy (mhs[2].nama ,"wisteria");
	mhs[2].nilai = 85 ;
	strcpy (mhs[2].indeks ,"A");

	strcpy (mhs[3].nama ,"carnation");
	mhs[3].nilai = 70 ;
	strcpy (mhs[3].indeks ,"B");

	strcpy (mhs[4].nama ,"lili");
	mhs[4].nilai = 60 ;
	strcpy (mhs[4].indeks ,"D");
	
	printf("Nilai rata-rata mahasiswa : ");
	printf("%.1f\n", ratarata(mhs));
	
	printf("Mahasiswa yang memiliki indeks maksimum : ");
	int i=0 , inmaks =0;
	int nilaimaks = 0;
	for (i=0; i< 5; i++)
	{
		if (mhs[i].nilai > nilaimaks)
		{
			inmaks = i;
			nilaimaks = mhs[i].nilai;
		}
	}
	printf("%s ", mhs[inmaks].nama );
	printf("%d ", mhs[inmaks].nilai );
	printf("%s \n", mhs[inmaks].indeks );
	
	printf("Mahasiswa yang memiliki indeks minimum : ");	
	int inmin =0;
	int nilaimin = 0;
	for (i=0; i< 5; i++)
	{
		if (mhs[i].nilai < nilaimaks)
		{
			inmin = i;
			nilaimin = mhs[i].nilai;
		}
	}
	printf("%s ", mhs[inmin].nama );
	printf("%d ", mhs[inmin].nilai );
	printf("%s ", mhs[inmin].indeks);
	
	/*
	printf("%s ", mhs[maksimum(mhs)].nama );
	printf("%d ", mhs[maksimum(mhs)].nilai );
	printf("%s ", mhs[maksimum(mhs)].indeks);
	
	printf("%s ", mhs[minimum(mhs)].nama );
	printf("%d ", mhs[minimum(mhs)].nilai );
	printf("%s ", mhs[minimum(mhs)].indeks);
	*/
	
}



