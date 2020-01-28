/* buat struct : nama, nilai, indeks
masukin structnya dlm array,
cari modus, max, min, avg */

#include <stdio.h>
#include <string.h>

struct student{
	char nama[10];
	float nilai;
	char indeks;
};

char hitungIndeks(float x){
	
	if (x >= 80){
		return('A');
	}else if ((x < 80) && (x >= 70)){
		return('B');
	}else if ((x < 70) && (x > 60)) {
		return('C');
	}else{
		return('D');
	}
	
}

int main (){	

	float average, min, max;
	int total, i, j, k, indeksMin, indeksMax;
	
	struct student mhs[5];
		strcpy(mhs[0].nama,"Mawar");
		mhs[0].nilai = 67;
		mhs[0].indeks = hitungIndeks(mhs[0].nilai);
		
		strcpy(mhs[1].nama, "Melati");
		mhs[1].nilai = 85;
		mhs[1].indeks = hitungIndeks(mhs[1].nilai);
		
		strcpy(mhs[2].nama, "Wisteria");
		mhs[2].nilai = 85;
		mhs[2].indeks = hitungIndeks(mhs[2].nilai);
		
		strcpy(mhs[3].nama, "Carnation");
		mhs[3].nilai = 70;
		mhs[3].indeks = hitungIndeks(mhs[3].nilai);
		
		strcpy(mhs[4].nama, "Lili");
		mhs[4].nilai = 60;
		mhs[4].indeks = hitungIndeks(mhs[4].nilai);
	
//Menghitung Rata - Rata
	total = 0;
	for (i=0; i < 4; i++){
			total = (total + mhs[i].nilai);
	}
	
	average = (total/5);

//Menghitung Nilai Max
	
	max = mhs[0].nilai;
	j = 0;
	indeksMax = 0;
	
	while (j < 5){
		if (mhs[j].nilai > max){
			max = mhs[j].nilai;
			indeksMax = j;
			j++;
		}else{
			j++;
		}
	}

//Menghitung Nilai Min

	min = mhs[0].nilai;
	k = 0;
	indeksMin = 0;
	
	while (k < 5){
		if (mhs[k].nilai > max){
			max = mhs[k].nilai;
			indeksMin = k;
			k++;
		}else{
			k++;
		}
	}

//Print hasilnya
printf("Nilai rata - rata = %.2f \n", average);


printf("Nilai tertinggi = %.2f,", mhs[indeksMax].nilai);
printf(" %s \n", mhs[indeksMax].nama);

printf("Nilai terrendah = %.2f,", mhs[indeksMin].nilai);
printf(" %s \n", mhs[indeksMin].nama);


return (0);		
}

	
	