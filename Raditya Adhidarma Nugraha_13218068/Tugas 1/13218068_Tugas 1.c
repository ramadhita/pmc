#include <stdio.h>

struct M {
	char* Nama;
	float Nilai;
	char Indeks;
};

void MaxMinAve (struct M* ArrM) {
	int i;
	int imax = 0;
	int imin = 0;
	float Sum = 0;
	for (i = 0; i <= 4; i = i + 1) {
		if (ArrM[i].Nilai > ArrM[imax].Nilai) {
			imax = i;
		}
		else {
			imin = i;
		}
		Sum = Sum + ArrM[i].Nilai;
	}
	float Average = Sum / 5;
	
	printf ("Max : \n");
	printf ("Nama : %s\n", ArrM[imax].Nama);
	printf ("Nilai : %g\n", ArrM[imax].Nilai);
	
	printf ("\n");
	
	printf ("Min : \n");
	printf ("Nama : %s\n", ArrM[imin].Nama);
	printf ("Nilai : %g\n", ArrM[imin].Nilai);
	
	printf ("\n");
	printf ("Average : %g\n", Average);
}

int main (){
	struct M ArrM[5];
	ArrM[0].Nama = "Mawar";
	ArrM[0].Nilai = 67;
	ArrM[1].Nama = "Melati";
	ArrM[1].Nilai = 85;
	ArrM[2].Nama = "Wisteria";
	ArrM[2].Nilai = 85;
	ArrM[3].Nama = "Carnation";
	ArrM[3].Nilai = 70;
	ArrM[4].Nama = "Lili";
	ArrM[4].Nilai = 60;
	
	MaxMinAve (ArrM);
	
	return 0;
}
