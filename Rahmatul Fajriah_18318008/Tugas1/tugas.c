#include <stdio.h>
#include <stdlib.h>

struct mahasiswa 
{
	char* nama;
	int nilai;
	char indeks;
};

int main()
{
	struct mahasiswa data[5];
	data[0].nama = "Mawar";
	data[0].nilai = 67;
	data[1].nama = "Melati";
	data[1].nilai = 85;
	data[2].nama = "Wisteria";
	data[2].nilai = 85;
	data[3].nama = "Carnation";
	data[3].nilai = 70;
	data[4].nama = "Lili";
	data[4].nilai = 60;
	
	proses(data);
}

char tentukanindeks (struct mahasiswa n)
{
	char ind;
	if (n.nilai<=50) 
	{
		ind = 'E';
	}
	else if (n.nilai>50 && n.nilai <=60)
	{
		ind = 'D';
	}
	else if (n.nilai >60 && n.nilai <70)
	{
		ind = 'C';
	}
	else if (n.nilai >=70 && n.nilai <80)
	{
		ind = 'B';
	}
	else if (n.nilai >= 80)
	{
		ind = 'A';
	}
	return ind;
}

int proses (struct mahasiswa cari[5])
{
	
	int minimum,maksimum;
	float rata2;
	int i=0;
	int j=5;
	int jumlah =0;
	
	for (i=0;i<j;i++)
	{
		if(i==0)
		{
			minimum = cari[i].nilai;
			maksimum = cari[i].nilai;
		}
		else if (maksimum <= cari[i].nilai)
		{
			maksimum = cari[i].nilai;
		}
		else if (minimum >= cari[i].nilai)
		{
			minimum = cari[i].nilai;	
		}
		jumlah = jumlah + cari[i].nilai;
	}
	rata2 = jumlah/5;
	printf ("nilai maksimum : %d\n ",maksimum);
	printf ("nilai maksimum : %d\n ",minimum);
	printf ("Rata-rata nilai mahasiswa : %f\n",rata2);
	return rata2;
}

	
	
	
	
