#include <stdio.h>
#include <string.h>

struct Mahasiswa
{
	char Nama[5];
	int Nilai; 
	char Indeks;
};

int main(void)
{
	int i,n,min,max;
	float avg;
	char indeks(int);
	struct Mahasiswa mhs[5];
 
	strcpy(mhs[0].Nama, "Mawar");
	mhs[0].Nilai = 67;
	
	strcpy(mhs[1].Nama, "Melati");
	mhs[1].Nilai = 85;
	
	strcpy(mhs[2].Nama, "Wisteria");
	mhs[2].Nilai = 85;
	
	strcpy(mhs[3].Nama, "Carnation");
	mhs[3].Nilai = 70;
	
	strcpy(mhs[4].Nama, "Lili");
	mhs[4].Nilai = 60;
	
	
	avg = 0;
	n = 4;
	
	for(i=0; i<=n; i++)
	{
		avg = avg + mhs[i].Nilai;
	}
	avg = avg/5;
	
	printf("Nilai rata-rata adalah :  %f\n", avg);
	
	
	min=mhs[0].Nilai;
	for(i=0; i<=n; i++)
    {
        if(min>mhs[i].Nilai)
		{
		min=mhs[i].Nilai;   
		}
    }
	printf("Nilai minimum adalah : %d\n",min);

	for(i=0; i<=n; i++)
	{
		if (mhs[i].Nilai==min)
		{
			printf("Nilai minimum diperoleh oleh %s\n", mhs[i].Nama);
		}
	}
	
	max=mhs[0].Nilai;
	for(i=0; i<=n; i++)
    {
        if(max<mhs[i].Nilai)
		{
		max=mhs[i].Nilai;   
		}
    }
	printf("Nilai maksimum adalah : %d\n",max);


	
	for(i=0; i<=n; i++)
	{
		if (mhs[i].Nilai==max)
		{
			printf("Nilai maksimum diperoleh oleh %s\n", mhs[i].Nama);
		}
	}

	return 0;
}


char indeks(int Nilai)
{
	char Indeks;
	int i;
	int n=5;
	
	
	for(i=0; i<n; i++)
	{
		if  (Nilai >= 85)
		{
        Indeks = 'A';
		}
		else if  ((Nilai >= 70) && (Nilai < 85))
		{
        Indeks = 'B';
		}
		else if  ((Nilai >= 60) && (Nilai < 70))
		{
        Indeks = 'C';
		}
		else 
		{
        Indeks = 'D';
		}
    }
	return Indeks;
}

