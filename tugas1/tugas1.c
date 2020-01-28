//HendraChayadiSutanto
//18318013
//28-01-2020
//struture function in C
//menentukan nilai modus(tidak jadi), maximum, minimum, dan rata-rata dari data nilai siswa

#include <stdio.h>
#include <string.h>

struct Data
{
    char nama[15];
    int nilai;
    char index;
};

char checkindex (int nilai)
{
	char index;
	if (nilai >= 80) 
	{
		index = 'A';
	}
	else if (nilai < 80 && nilai >= 70) 
	{
		index = 'B';
	}
	else if (nilai < 70 && nilai >= 65) 
	{
		index = 'C';
	}
	else if (nilai < 65 && nilai >= 50) 
	{
		index = 'D';
	}
	else 
	{
		index = 'E';
	}
	return index;	
}

int main()
{
	struct Data siswa[5];
	int x, min, max, sum;
	float avg;
	x = 0;

	strcpy(siswa [0] .nama, "Mawar");
	strcpy(siswa [1] .nama, "Melati");
	strcpy(siswa [2] .nama, "Wisteria");
	strcpy(siswa [3] .nama, "Carnation");
	strcpy(siswa [4] .nama, "Lili");

	siswa [0].nilai = 67;
	siswa [1].nilai = 85;
	siswa [2].nilai = 85;
	siswa [3].nilai = 70;
	siswa [4].nilai = 60;

	sum = siswa [0] .nilai;
	x = 0;
	max = 0;


	while (x <= 3) 
	{
		if (siswa [x] .nilai <= siswa [ x+1 ].nilai) {
			max = x + 1;
			sum = siswa [ x+1 ] .nilai;
		}
		x += 1;
    }

	x = 0;
	while (x <= 4) 
	{
	
		if (siswa [x] .nilai >= siswa[x+1].nilai) {
			min = x + 1;
			sum = siswa [ x + 1 ].nilai;
		}
		x += 1;
	}


	x = 0;
	while (x <= 4) 
	{
		siswa [x].index = checkindex (siswa [x] .nilai);
		x += 1;
	}


	printf("Nilai siswa paling besar yang ada didalam data adalah: %d yaitu: %s\n",siswa [max].nilai, siswa [max].nama);
	printf("Nilai siswa paling kecil yang ada didalam data adalah: %d yaitu: %s\n",siswa [min].nilai, siswa [min].nama);

	avg = 0;
	x = 0;
	while (x <= 4)
	{
		avg += siswa [x].nilai;
		x += 1;
	}

	avg /= 5;
	printf("Rata-rata dari semua nilai yang ada didalam data adalah: %.2f\n", avg);
	return(0);
}