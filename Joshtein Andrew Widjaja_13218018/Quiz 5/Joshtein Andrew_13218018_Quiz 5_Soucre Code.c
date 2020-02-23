#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>
struct Data{ //tipe data untuk data mahasiswa
int No;
int NIM;
char Nama[30];
int Nilai;
};
struct Data temp;
struct Data array[10];	
int i,j,sum,count;
double average;
int main (void){
	FILE *Awal; 
	Awal = fopen("awal.txt","w+");
	//Memasukkan data dan membuat file awal sebelum sorting
	for(i=0;i<10;i++){
		array[i].No = i + 1;
		fprintf(Awal,"%d,",array[i].No);
		array[i].NIM = 16518001 + i;
		fprintf(Awal,"%d,",array[i].NIM);
		printf("Masukkan nama : ");
		gets(array[i].Nama);
		fprintf(Awal,"%s,",array[i].Nama);
		array[i].Nilai = (rand() % (50 + 1)) + 50;
		fprintf(Awal,"%d\n",array[i].Nilai);
	};
	fclose(Awal);
	for(i=0;i<9;i++){ //sorting data berdasarkan nilai dari tertinggi ke terendah
		for(j=(i+1);j<10;j++){
			if(array[i].Nilai <= array[j].Nilai){
				temp = array[i];
				array[i] = array[j];
				array[j]= temp;
			};
		};
	};
	FILE *Akhir;
	Akhir = fopen("akhir.txt","w+");
	//Memasukkan data dan membuat file awal setelah sorting
	for(i=0;i<10;i++){
		array[i].No = i + 1;
		fprintf(Akhir,"%d,",array[i].No);
		fprintf(Akhir,"%d,",array[i].NIM);
		fprintf(Akhir,"%s,",array[i].Nama);
		fprintf(Akhir,"%d\n",array[i].Nilai);
	};
	sum = 0;
	count = 0;
	//menghitung rata-rata nilai seluruh mahasiswa
	for(i=0;i<10;i++){
		sum = sum + array[i].Nilai;
		count = count + 1;
	};
	average = sum/count;
	//memasukkan data rata-rata ke dalam file akhir (file setelah sorting)
	fprintf(Akhir,"average = %.2f\n",average);
	fclose(Akhir);
	return(0);
}
