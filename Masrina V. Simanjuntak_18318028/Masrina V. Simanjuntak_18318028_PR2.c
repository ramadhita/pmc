//Nama : Masrina Vivianna Simanjuntak
// NIM : 18318028
// Keterangan : PR 2

#include <stdio.h>
#include <string.h>

struct mahasiwaITB{
	char nama[100];
	char indeks;
	int nilai;
};

char indeksmahasiswa (int n){

	char indeks;
	if (n>=85){
	return'A'; 
	}
	
	else if (n>= 70 && n<85){
	return'B';
	}
	
	else if(n>=67 && n<70){
	return'C';
	}
	
	else if(n<=60){
	return'D';
	}
	
	return (indeks);
}

void minimum_maximum (int nilai[], int*indeks_max, int*indeks_min) {
	int max,min;
	max= -99;
	min= 99;
	int i;
	for (i=0; i<5; i++) {
		if (max<nilai[i]){
			max=nilai[i];
			*indeks_max = i;
		}
		if (min>nilai [i]) {
			min=nilai [i];
			*indeks_min = i;
		}
	}
	printf("Nilai maksimum: %d\n", max);
	printf("Nilai manimum: %d\n", min);
	
}

int main (){
	struct mahasiwaITB mahasiswa[5];
	int indeks_max;
	int indeks_min;
	float nilai_rata;
	int total_nilai;
	int i;
	int nilai[5];
	
	strcpy(mahasiswa[0].nama,"Mawar");
	mahasiswa[0].nilai = 67;
	nilai[0] = 67;
	mahasiswa[0].indeks = indeksmahasiswa (mahasiswa[0].nilai);
	strcpy(mahasiswa[1].nama,"Melati");
	mahasiswa[1].nilai = 85;
	nilai[1] = 85;
	mahasiswa[1].indeks = indeksmahasiswa (mahasiswa[1].nilai);
	strcpy(mahasiswa[2].nama,"Wisteria");
	mahasiswa[2].nilai = 85;
	nilai[2] = 85;
	mahasiswa[2].indeks = indeksmahasiswa (mahasiswa[2].nilai);
	strcpy(mahasiswa[3].nama,"Carnation");
	mahasiswa[3].nilai = 70;
	nilai[3] = 70;
	mahasiswa[3].indeks = indeksmahasiswa (mahasiswa[3].nilai);
	strcpy(mahasiswa[4].nama,"Lili");
	mahasiswa[4].nilai = 60;
	nilai[4] = 60;
	mahasiswa[4].indeks = indeksmahasiswa (mahasiswa[4].nilai);
	
	minimum_maximum (nilai, &indeks_max,&indeks_min);
	printf ("Mahasiswa dengan nilai maksimum: %s\n", mahasiswa[indeks_max].nama);
	printf ("Mahasiswa dengan nilai minimum: %s\n", mahasiswa[indeks_min].nama);
	total_nilai=0;
	for (i=0;i<5;i++){
		total_nilai = total_nilai + mahasiswa[i].nilai;
	}
	nilai_rata=total_nilai/5;
	printf("Nilai rata-rata mahasiswa: %.2f\n", nilai_rata);

	return (0);
}




	