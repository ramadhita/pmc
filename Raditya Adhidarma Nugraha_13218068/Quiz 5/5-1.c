//13218068 Raditya Adhidarma Nugraha

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Deklarasi Struct
struct M{
	char* Nama;
	int NIM;
	int Nilai;
};

//Deklarasi Variabel
char Name[100];
struct M Arr[10];
struct M Temp;
int i;
int j;
int Sum = 0;
float Ave;

FILE* fi1;
FILE* fi2;

int main (){
	//Membuka File
	fi1 = fopen ("5-1raw.csv", "a+");
	fi2 = fopen ("5-1sorted.csv", "a+");
	
	//Mengisi Array Arr
	for (i = 0; i < 10; i = i + 1){
		printf ("Nama : ");
		memset (Name, '\0', 100);
		while (!strcmp (Name, "")){
			gets (Name);
		}
		Arr[i].Nama = Name;
		printf ("NIM : ");
		scanf ("%d", &Arr[i].NIM);
		Arr[i].Nilai = rand () % 100;
		if (Arr[i].Nilai <= 50){
			Arr[i].Nilai = Arr[i].Nilai + 50;
		}
		
		//Menulis di File fi1
		fprintf (fi1, "%s,%d,%d\n", Arr[i].Nama, Arr[i].NIM, Arr[i].Nilai);
		Sum = Sum + Arr[i].Nilai;
	}
	
	//Mengurutkan Arr Berdasarkan Nilai
	for (i = 1; i < 10; i = i + 1){
		//Simpan Nilai x[i]
		Temp.Nama = Arr[i].Nama;
		Temp.NIM = Arr[i].NIM;
		Temp.Nilai = Arr[i].Nilai;
		j = i - 1;
		while (j >= 0){
			if (Temp.Nilai < Arr[j].Nilai){
				//Switch
				Arr[j + 1].Nama = Arr[j].Nama;
				Arr[j + 1].NIM = Arr[j].NIM;
				Arr[j + 1].Nilai = Arr[j].Nilai;
				
				Arr[j].Nama = Temp.Nama;
				Arr[j].NIM = Temp.NIM;
				Arr[j].Nilai = Temp.Nilai;
			}
			j = j - 1;
		}
	}
	
	//Print Array yang Terurut ke File fi2
	for (i = 0; i < 10; i = i + 1){
		fprintf (fi2, "%s,%d,%d\n", Arr[i].Nama, Arr[i].NIM, Arr[i].Nilai);
	}
	
	//Print Rata-rata
	Ave = Sum / 10;
	fprintf (fi2, "Rata-rata, , %g", Ave);
	
	//Menutup File
	fclose (fi1);
	fclose (fi2);
	return 0;
}
