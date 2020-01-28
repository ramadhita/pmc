//DZAKY FACHREZI
//18318040
//PROGRAM MENENTUKAN NILAI MAKSIMUM, MINIMUM, DAN RATA-RATA DARI TRANSKRIP NILAI 5 SISWA

#include <stdio.h>
#include <string.h>

struct transkrip
{
	char* nama;
	int nilai;
	char* indeks;
};

void max (struct transkrip m[5]);

void max (struct transkrip m[5])
{
	int i, imax, nmax = 0;
	for (i = 0; i < 5; ++i)
	{
		if (nmax < m[i].nilai)
		{
			nmax = m[i].nilai;
			imax = i;
		}
	}
	printf ("Nilai tertinggi ialah %d oleh %s\n", nmax, m[imax].nama);		
};

void min (struct transkrip m[5]);

void min (struct transkrip m[5])
{
	int i, imin, nmin = 100;
	for (i = 0; i < 5; ++i)
	{
		if (nmin > m[i].nilai)
		{
			nmin = m[i].nilai;
			imin = i;
		}
	}
	printf ("Nilai terendah ialah %d oleh %s\n", nmin, m[imin].nama);		
};

void mean (struct transkrip m[5]);

void mean (struct transkrip m[5])
{
	double mean = ((m[0].nilai+m[1].nilai+m[2].nilai+m[3].nilai+m[4].nilai)/5);
	printf("Nilai rata-rata adalah %lf\n", mean);
};

int main (void)
{
	struct transkrip m[5];
	
	m[0].nama = "Mawar";
	m[0].nilai = 67;
	m[0].indeks = "C";
	m[1].nama = "Melati";
	m[1].nilai = 85;
	m[1].indeks = "A";
	m[2].nama = "Wisteria";
	m[2].nilai = 85;
	m[2].indeks = "A";
	m[3].nama = "Carnation";
	m[3].nilai = 70;
	m[3].indeks = "B";
	m[4].nama = "Lili";
	m[4].nilai = 60;
	m[4].indeks = "D";
	
	max (m);
	min (m);
	mean (m);
	return(0);
}