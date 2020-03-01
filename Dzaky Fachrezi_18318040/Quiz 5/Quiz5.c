// Quiz 5
// Dzaky Fachrezi 18318040

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data_mhs
{
	int nim;
	char* nama;
	int nilai;
};

int main ()
{
	struct data_mhs m[10];
	struct data_mhs x;
	int i,j;
	FILE *fp;
	char *filename = "data_mhs.txt";
	for(i = 0;i < 10;++i)
	{
		printf("Masukkan data mahasiswa ke-%d\n", (i+1));
		printf("NIM : ");		
		scanf("%d", &m[i].nim);
		printf("Nama : ");
		scanf("%s", &m[i].nama);
		printf("Nilai : ");
		scanf("%d", &m[i].nilai);
	}
	
	//Mencari rata-rata
	int sum = 0;
	for(i = 0;i < 10;++i)
	{
		sum = sum + (m[i].nilai);
	}
	float mean = (sum/10);
	
	fp = fopen(filename, "w");
	fprintf(fp, "Data Mahasiswa Tidak Terurut\n");
	fprintf(fp, "No NIM Nama Nilai \n");
	for (i = 0;i < 10; ++i)
	{
		fprintf(fp, " %d %d %s %d \n", (i+1), m[i].nim, *m[i].nama, m[i].nilai);
	}
	
	//Mengurutkan data berdasarkan nilai descending
	for (i = 0;i < 10 ; ++i)
	{
		for (j = 0;j < 10; ++j)
		{	
			if (m[i].nilai > m[j].nilai)
			{
				x = m[i];
				m[i] = m[j];
				m[j] = x;
			}
		}
	}
	
	fprintf(fp, " \n");
	fprintf(fp, "Data Mahasiswa Terurut\n");
	fprintf(fp, "No NIM Nama Nilai \n");
	for (i = 0;i < 10; ++i)
	{
		fprintf(fp, " %d %d %s %d \n", (i+1), m[i].nim, *m[i].nama, m[i].nilai);
	}
	fprintf(fp, " \n");
	fprintf(fp, "Rata-rata nilai mahasiswa adalah %f", mean);
	fclose(fp);
	printf("Rata-rata nilai mahasiswa adalah %f", mean);
	return 0;
}