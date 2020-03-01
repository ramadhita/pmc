// Fazha Ivanda 13218008
// EL2008 K02

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct data
{
	char nama[100];
	int nim;
	int nilai;
	};
int main(){
	FILE *fp;
	char *filename = "datamahasiswa.txt";
	struct data d[10];
	struct data temp;
	int i,j;
	double mean;
	int jumlah = 0;
	
	// Memasukkan data
	// Data mahasiswa 1
	strcpy(d[0].nama, "Valdo");
	d[0].nim = 13221024;
	
	// Data mahasiswa 2
	strcpy(d[1].nama, "Bagus");
	d[1].nim = 13221090;
	
	// Data mahasiswa 3
	strcpy(d[2].nama, "Alghi");
	d[2].nim = 13221021;
	
	// Data mahasiswa 4
	strcpy(d[3].nama, "Daffa");
	d[3].nim = 13221004;
	
	// Data mahasiswa 5
	strcpy(d[4].nama, "Aldi");
	d[4].nim = 13221091;
	
	// Data mahasiswa 6
	strcpy(d[5].nama, "Dzaky");
	d[5].nim = 13221055;
	
	// Data mahasiswa 7
	strcpy(d[6].nama, "Fauzi");
	d[6].nim = 13221119;
	
	// Data mahasiswa 8
	strcpy(d[7].nama, "Farhan");
	d[7].nim = 13221011;
	
	// Data mahasiswa 9
	strcpy(d[8].nama, "Fadhil");
	d[8].nim = 13221004;
	
	// Data mahasiswa 10
	strcpy(d[9].nama, "Rijal");
	d[9].nim = 13221099;

	// Mencetak ke dalam file
	fp = fopen(filename, "w");
	fprintf(fp, "Nilai Sebelum di Sort \n");
	fprintf(fp, "\n ");
	fprintf(fp, "No Nama Nim Nilai \n");
	for (i=0;i<10;i++){
		d[i].nilai = (rand()%(100-50+1)) + 50 ;
		fprintf(fp, " %d %s %d %d \n", (i+1), d[i].nama, d[i].nim, d[i].nilai);
	}
	// Menghitung rata-rata 
	for (i=0;i<10;i++){
		jumlah = jumlah + d[i].nilai;
	}
	mean = jumlah/10;

	// Mengurutkan data
	for (i=0;i<10;++i){
		for (j=0;j<10;j++){
			if (d[i].nilai > d[j].nilai){
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
	}
	// Mencetak data yang sudah diurutkan ke file
	fprintf(fp, "\n ");
	fprintf(fp, "Nilai Setelah di Sort\n");
	fprintf(fp, "\n ");
	fprintf(fp, "No Nama Nim Nilai\n");
	for (i=0;i<10;i++){
		fprintf(fp, " %d %s %d %d \n",(i+1), d[i].nama, d[i].nim, d[i].nilai);
	}
	fprintf(fp, "\n ");
	fprintf(fp, "Rata-rata nilai Mahasiswa : %lf \n",mean);
	printf("Rata-rata nilai Mahasiswa : %lf \n",mean);
	fclose(fp);
}

	