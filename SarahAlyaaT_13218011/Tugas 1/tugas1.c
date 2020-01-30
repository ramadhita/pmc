#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Membut data tipe stud
struct stud 
{
	char *nama, indeks;
	int nilai;
};

void modus(struct stud s[5])
{
	int n, maks;
	int n_ind[5] = {0,0,0,0,0};
	for (n = 0; n<5; n+=1)
	{
		if (s[n].indeks=='A')
			n_ind[0] += 1;
		else if (s[n].indeks=='B')
			n_ind[1] += 1;
		else if (s[n].indeks=='C')
			n_ind[2] += 1;
		else if (s[n].indeks=='D')
			n_ind[3] += 1;
		else if (s[n].indeks=='E')
			n_ind[4] += 1;
	}
	maks = n_ind[0];
	for (n = 0; n<5; n+=1)
	{
		if (n_ind[n] > maks)
			maks = n_ind[n];
	}

	if (maks == n_ind[0])
		printf("Modus Indeks: A\n");
	else if (maks == n_ind[1])
		printf("Modus Indeks: B\n");
 	else if (maks == n_ind[2])
		printf("Modus Indeks: C\n");
	else if (maks == n_ind[3])
		printf("Modus Indeks: D\n");
	else if (maks == n_ind[4])
		printf("Modus Indeks: E\n");
}

void max(struct stud s[5])
{
	int i, maks, who;
	maks = s[0].nilai; //menyimpan nilai max
	who = 0; //menyimpan index data nilai max
	for (i = 0; i<5; i+=1)
	{
		if (s[i].nilai > maks)
			{
				maks = s[i].nilai;
				who = i;
			}
	}
	printf("Nilai Maksimum: %d (%s, %c)\n", maks,s[who].nama,s[who].indeks);

}

void min(struct stud s[5])
{
	int i, min, who;
	min = s[0].nilai; //menyimpan nilai min
	who = 0; //menyimpan index data nilai min
	for (i = 0; i<5; i+=1)
	{
		if (s[i].nilai < min)
			{
				min = s[i].nilai;
				who = i;
			}
	}
	printf("Nilai Minimum: %d (%s, %c)\n", min,s[who].nama,s[who].indeks);
}

void mean(struct stud s[5])
{
	int i;
	double mean;
	mean = 0;
	for (i = 0; i<5; i+=1)
	{
		mean = mean + s[i].nilai;
	}
	mean = mean / i; 
	printf("Rata-rata nilai: %.2lf \n", mean);
}


int main()
{
	int i;
	struct stud s[5];
	s[0].nama = "Mawar";
	s[1].nama = "Melati";
	s[2].nama = "Wisteria";
	s[3].nama = "Carnation";
	s[4].nama = "Lili";
	s[0].nilai = 67;
	s[1].nilai = 85;
	s[2].nilai = 85;
	s[3].nilai = 70;
	s[4].nilai = 60;
	for (i = 0; i<5; i+=1)
	{
		if (s[i].nilai >= 80)
			s[i].indeks = 'A';
		else if (s[i].nilai < 80 && s[i].nilai >= 70)
			s[i].indeks = 'B';
		else if (s[i].nilai < 70 && s[i].nilai >= 60)
			s[i].indeks = 'C';
		else if (s[i].nilai < 60 && s[i].nilai >= 50)
			s[i].indeks = 'D';
		else if (s[i].nilai < 50)
			s[i].indeks = 'E';	
	}
	modus(s);
	max(s);
	min(s);
	mean(s);

}

