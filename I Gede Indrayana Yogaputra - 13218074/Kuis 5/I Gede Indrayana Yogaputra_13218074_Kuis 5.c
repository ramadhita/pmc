/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 */

#include <stdio.h>
#include <stdlib.h>


struct tabel 
{ 
	int nomor;
	int nim;
	char *nama;
	int nilai;
};

int main (){
	//Deklarasi variabel
	FILE *fp = fopen("Data4.txt", "w+");
	int i; int maks; int indeks; int nilaitemp; int nimtemp; double rerata; int j; char *namatemp;
	struct tabel data[10];
	data[0].nama = "Gede";
	data[1].nama= "Indra";
	data[2].nama = "Yoga";
	data[3].nama = "Putra";
	data[4].nama = "Sani";
	data[5].nama = "Sinar";
	data[6].nama = "Surya";
	data[7].nama = "Chika";
	data[8].nama = "Sinta";
	data[9].nama = "Santi";
	//Inisialisasi data
	for (i=1;i<11;i++){
		data[i-1].nomor = i;
		data[i-1].nim = 13218000 + i;
		data[i-1].nilai = rand() % (50) + 50;
	}
	//Proses penghitungan rerata dan pencetakan ke txt
	for (i=0;i<10;i++){
		fprintf(fp, "%d %s %d %d \n", data[i].nomor, data[i].nama, data[i].nim, data[i].nilai);
		rerata = rerata+data[i].nilai;}
	fprintf(fp, "Rata rata ialah  %2.f\n", rerata/10);
	fprintf(fp, "Nilai sesudah disort: \n"); 
	
	//Sorting menggunakan bubble sorting
	for (i = 0; i < 9  ; i += 1) {
		maks = data[i].nilai;
		indeks = i;
		for (j = i+1; j < 10; j++){
			if (maks < data[j].nilai) {
				maks = data[j].nilai;
				indeks = j;
			}
		}
		namatemp = data[i].nama;
		nimtemp = data[i].nim;
		nilaitemp = data[i].nilai;
		data[i].nama = data[indeks].nama;
		data[i].nim = data[indeks].nim;
		data[i].nilai = data[indeks].nilai;
		data[indeks].nama = namatemp ;
		data[indeks].nim = nimtemp;
		data[indeks].nilai = nilaitemp;
		}
	//Pencetakan ke txt
	for (i=0;i<10;i++){
		fprintf(fp, "%d %s %d %d \n", data[i].nomor, data[i].nama, data[i].nim, data[i].nilai);}
	fclose(fp);
return(0);
}
