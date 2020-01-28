#include <stdio.h>
#include <string.h>
struct Data
{
	char Nama[10];
	int Nilai;
	char Indeks;
};
char TentuIndeks (int cok)
{
	char indeks;
	if (cok>=80)
	{
		indeks = 'A';
	}
	else if (cok<80 && cok>=70)
	{
		indeks = 'B';
	}
	else if (cok<70 && cok>=65)
	{
		indeks = 'C';
	}
	else if (cok<65 && cok>=50)
	{
		indeks = 'D';
	}
	else
	{
		indeks = 'E';
	}
	return indeks;	
}

int main()
{
	struct Data mahasiswa[5];
	int i, kecil, besar, sem;
	float avg;
	i=0;
	strcpy(mahasiswa[0].Nama, "Mawar");
	strcpy(mahasiswa[1].Nama, "Melati");
	strcpy(mahasiswa[2].Nama, "Wisteria");
	strcpy(mahasiswa[3].Nama, "Carnation");
	strcpy(mahasiswa[4].Nama, "Lili");
	mahasiswa[0].Nilai = 67;
	mahasiswa[1].Nilai = 85;
	mahasiswa[2].Nilai = 85;
	mahasiswa[3].Nilai = 70;
	mahasiswa[4].Nilai = 60;
	sem = mahasiswa[0].Nilai;
	i = 0;
	besar = 0;
	while (i<=3)
	{
		if (mahasiswa[i].Nilai<=mahasiswa[i+1].Nilai)
		{
			besar = i+1;
			sem = mahasiswa[i+1].Nilai;
		}
		i+=1;
	}
	i = 0;
	while (i<=4)
	{
		if (mahasiswa[i].Nilai>mahasiswa[i+1].Nilai)
		{
			kecil = i+1;
			sem = mahasiswa[i+1].Nilai;
		}
		i+= 1;
	}
	i=0;
	while (i<=4)
	{
		mahasiswa[i].Indeks = TentuIndeks(mahasiswa[i].Nilai);
		i += 1;
	}
	printf("Nilai terbesar adalah %d ada pada %s\n",mahasiswa[besar].Nilai, mahasiswa[besar].Nama);
	printf("Nilai terkecil adalah %d ada pada %s\n",mahasiswa[kecil].Nilai, mahasiswa[kecil].Nama);
	avg = 0;
	i = 0;
	while (i<=4)
	{
		avg += mahasiswa[i].Nilai;
		i+=1;
	}
	avg /= 5;
	printf("Rata rata nilai adalah %.2f\n", avg);
	return(0);
}