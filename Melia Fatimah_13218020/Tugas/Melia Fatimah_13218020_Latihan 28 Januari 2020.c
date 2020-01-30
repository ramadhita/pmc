#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct data
{
	char *nama;
	int nilai;
	char *idx;
};

void maksimum (struct data mahasiswa[5])
{
	int i, maks, indeks;
	maks = mahasiswa[0].nilai;
	indeks = 0;
	for (i=1;i<5;i++){
		if (maks < mahasiswa[i].nilai){
			maks = mahasiswa[i].nilai;
			indeks = i;
		}
	}
	printf("Mahasiswa yang mendapat nilai terbesar adalah %s \n", mahasiswa[indeks].nama);
}

void minimum (struct data mahasiswa[5])
{
	int i, min, indeks;
	min = mahasiswa[0].nilai;
	indeks = 0;
	for (i=1;i<5;i++){
		if (min > mahasiswa[i].nilai){
			min = mahasiswa[i].nilai;
			indeks = i;
		}
	}
	printf("Mahasiswa yang mendapat nilai terkecil adalah %s \n", mahasiswa[indeks].nama);
}

void rata (struct data mahasiswa[5])
{
	int i, sum;
	sum = 0;
	for (i=0;i<5;i++){
		sum = sum + mahasiswa[i].nilai;
		}
	printf("Nilai rata-rata dari semua nilai adalah %d \n", sum/5);
}

int main()
{
	int a;
	struct data mahasiswa[5];

	mahasiswa[0].nama = "Mawar";
	mahasiswa[1].nama = "Melati";
	mahasiswa[2].nama = "Wisteria";
	mahasiswa[3].nama = "Carnation";
	mahasiswa[4].nama = "Lily";
	mahasiswa[0].nilai = 67;
	mahasiswa[1].nilai = 85;
	mahasiswa[2].nilai = 85;
	mahasiswa[3].nilai = 70;
	mahasiswa[4].nilai = 60;

	for(a=0;a<5;a++){
		if (mahasiswa[a].nilai>=85){
			mahasiswa[a].idx = "A";
		}
		else if (mahasiswa[a].nilai>=70 && mahasiswa[a].nilai<85){
			mahasiswa[a].idx = "B";
		}
		else if (mahasiswa[a].nilai>=65 && mahasiswa[a].nilai<70){
			mahasiswa[a].idx = "C";
		}
		else if (mahasiswa[a].nilai<65){
			mahasiswa[a].idx = "D";
		}
	}
	
	maksimum(mahasiswa);
	minimum(mahasiswa);
	rata(mahasiswa);
}