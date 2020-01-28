#include "mahasiswa.h"
#include "string.h"

void constructor(mahas *a_, char Nama[100], float Nilai, char Indeks){
	
	(a_)->Nilai = Nilai;
	memcpy(((a_)->Nama) , Nama, 100);
	(a_)->Indeks = Indeks;
}
char findModusIndeks(mahas a[], int total){
	int i;
	int count[5];
	int ans = 0;
	for (i = 0; i < 5; ++i){
		count[i] = 0;
	}	
	for (i = 0; i < total; ++i){
		if ((a[i]).Indeks == 'A'){
			count[0] += 1;
		}
		else if ((a[i]).Indeks == 'B'){
			count[1] += 1;
		}		
		else if ((a[i]).Indeks == 'C'){
			count[2] += 1;
		}
		else if ((a[i]).Indeks == 'D'){
			count[3] += 1;
		}
		else if ((a[i]).Indeks == 'E'){
			count[4] += 1;
		}		
	}

	for (i = 1; i < 5; ++i){
		if (count[i] > count[ans]){
			ans = i;
		}
	}	if (ans == 0){
		return 'A';
	}
	else if (ans == 1){
		return 'B';
	}	
	else if (ans == 2){
		return 'C';
	}	
	else if (ans == 3){
		return 'D';
	}	
	else{
		return 'E';
	}	
}


int findMax(mahas a[], int total){
	int i = 0;
	int maks = 0;
	for(i = 0; i < total; ++i){
		if((a[i].Nilai) > a[maks].Nilai){
			maks = i;
			// printf("%d \n", maks);
		}
	}
	return maks;
}

int findMin(mahas a[], int total){
	int i = 0;
	int maks = 0;
	for(i = 0; i < total; ++i){
		if((a[i].Nilai) < a[maks].Nilai){
			maks = i;
			// printf("%d \n", maks);
		}
	}
	return maks;
}

float findAvg(mahas a[], int total){
	int i;
	float avg = 0;
	for(i = 0; i < total; i++){
		avg += (a[i].Nilai)/5;
	}
	return  avg;
}