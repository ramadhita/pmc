//NIM/NAMA	: 13218029/ZULFIKAR NIMA ARIFUZZAKI
//FUNCTION DAN STRUCT

#include <stdio.h>
#include <string.h>
#include "func.h"


int main()
{	
	int i;
	struct alamat siswa[5];
	int max, i_max;
	int min, i_min;
	float jumlah;
	float rata;
	char modusd;
	
	//PENGISIAN NAMA DAN NILAI
	strcpy(siswa[0].nama, "Mawar");
	siswa[0].nilai = 67;
	
	strcpy(siswa[1].nama, "Melati");
	siswa[1].nilai = 85;
	
	strcpy(siswa[2].nama, "Wisteria");
	siswa[2].nilai = 85;
	
	strcpy(siswa[3].nama, "Carnation");
	siswa[3].nilai = 70;
	
	strcpy(siswa[4].nama, "Lili");
	siswa[4].nilai = 60;
	
	// PENGISIAN INDEKS
	for (i = 0; i <= 4; i = i + 1)
	{
		if (siswa[i].nilai <= 50)
		{
			siswa[i].indeks = 'E';
			}
		else if ((siswa[i].nilai <= 60) && (siswa[i].nilai > 50))
		{
			siswa[i].indeks = 'D';
			}
		else if ((siswa[i].nilai <= 70) && (siswa[i].nilai > 60))
		{
			siswa[i].indeks = 'C';
			}
		else if ((siswa[i].nilai <= 80) && (siswa[i].nilai > 70 ))
		{
			siswa[i].indeks = 'B';
			}
		else
		{
			siswa[i].indeks = 'A';
			};
		};
	
	//MENCARI NILAI MINIMUM DAN MAKSIMUM
	max = 0;
	 i_max = 99;
	 i_min = 0;
	 min = 0;
	 jumlah = 0;
	 
	 for (i = 0; i <=4; i = i+1)
	 {
		 if (siswa[i].nilai >= max)
		 {
			 max = siswa[i].nilai;
			 i_max = i;
			 };
		 if (siswa[i].nilai <= min)
		 {
			 min = siswa[i].nilai;
			 i_min = i;
			 };
		jumlah = jumlah + siswa[i].nilai;
	};
	
	//MENCARI RATAAN
	rata = jumlah/5;
	
	//MENCETAK NILAI MAX, MIN, DAN MEAN
	for (i = 0; i < 5; i = i+1)
	{
		if (siswa[i].nilai == siswa[i_max].nilai)
		{
			printf("Nilai tertinggi adalah %d diraih oleh %s\n", siswa[i].nilai, siswa[i].nama);
			};
		if (siswa[i].nilai == siswa[i_min].nilai)
		{
			printf("Nilai terendah adalah %d diraih oleh %s\n", siswa[i].nilai, siswa[i].nama);
			}; 
		}

	printf("Rata-rata nilai adalah %.2f \n", rata);
	modusd = modus(siswa, 5);
	printf("Modus indeks adalah %c", modusd); 
	
	 return(0);
	}
