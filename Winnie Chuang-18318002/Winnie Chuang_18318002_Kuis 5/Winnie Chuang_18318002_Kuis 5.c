//Nama		: Winnie Chuang
//NIM		: 18318002
//Deskripsi	: Membuat tabel nama, NIM, dan nilai mahasiswa di file dan kemudian mengurutkan nilai dari tertinggi ke terendah 
//			  dan mencari rata-rata nilainya

#include <stdio.h>
#include <stdlib.h>
struct mahasiswa //membuat tipe data struct yang bernama mahasiswa
{
	char *nama; //berisi nama
	int NIM; //NIM
	int nilai; // dan nilai dari tiap murid.
};

int 
main ()
{
	FILE *filecsv1; 
	FILE *filecsv; //inisiasi variabel dan file
	int jumlah = 0;
	int a;
	char *b;
	int c;
	float ratarata;
	filecsv1 = fopen("filesebelumsort.csv", "w+"); //membuka file
	filecsv = fopen("filesesudahsort.csv", "w+");
	struct mahasiswa mhs[10];
	mhs[0].nama = "Kenneth";//memasukkan data array
	mhs[0].NIM = 18318001;
	
	mhs[1].nama = "Sophia";
	mhs[1].NIM = 18318002;
	
	mhs[2].nama = "Roma";
	mhs[2].NIM = 18318003;
	
	mhs[3].nama = "Marlon";
	mhs[3].NIM = 18318004;
	
	mhs[4].nama = "Lia";
	mhs[4].NIM = 18318005;
	
	mhs[5].nama = "Denise";
	mhs[5].NIM = 18318006;
	
	mhs[6].nama = "Kelsey";
	mhs[6].NIM = 18318007;
	
	mhs[7].nama = "Jacob";
	mhs[7].NIM = 18318008;
	
	mhs[8].nama = "Cayden";
	mhs[8].NIM = 18318009;
	
	mhs[9].nama = "Jibril";
	mhs[9].NIM = 18318010;
	
	
	
	for(int i = 0; i<10; i++) //mengisi nilai random ke setiap murid dengan rentang lebih dari 50 dan kurang dari 100
	{
		int nilairandom = rand();
		while ((nilairandom < 50) || (nilairandom >100))
		{
			nilairandom = rand();
		}
		mhs[i].nilai = nilairandom; 
	}
	
	
	for (int xo = 0; xo <10; xo++) //mencetak nama, NIM dan nilai ke file sebelum disort
	{
		fprintf(filecsv1, "%s, ", mhs[xo].nama);
		fprintf(filecsv1, "%d, ", mhs[xo].NIM);
		fprintf(filecsv1, "%d\n", mhs[xo].nilai);
	}
	
	
	for (int i = 0; i < 10; i ++) //menambahkan semua nilai 
	{
		jumlah = jumlah + mhs[i].nilai;
	}
		
	ratarata = jumlah/10; //mencari rata-rata dari semua nilai
	
	
	
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < 10; k++)
		{
			if (mhs[j].nilai > mhs[k].nilai) //mulai mensort berdasarkan nilai
			{
				a = mhs[j].nilai;
				b = mhs[j].nama;
				c = mhs[j].NIM;
				mhs[j].nilai = mhs[k].nilai;
				mhs[j].nama = mhs[k].nama;
				mhs[j].NIM = mhs[k].NIM;
				mhs[k].nilai = a;
				mhs[k].nama = b;
				mhs[k].NIM = c;
			}
		}
	}
	
	
	for (int i = 0; i <10; i++) //mencetak file setelah disort
	{
		fprintf(filecsv, "%s, ", mhs[i].nama);
		fprintf(filecsv, "%d, ", mhs[i].NIM);
		fprintf(filecsv, "%d\n", mhs[i].nilai);
	}
	
	fprintf(filecsv, "rata-rata = %f", ratarata); //mencetak rata-rata
	fclose (filecsv1);//menutup kedua file
	fclose (filecsv);
}
	
	
	
	
	
