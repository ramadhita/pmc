#include <stdio.h>
typedef struct data
{
	char nama[10];
	int nilai;
	char indeks;
}DMhs;
DMhs tabel[5];
int i,j,nmax,nmin;
int size;
double navg;
char dIndeks(int x){
	char d;
	if (x <= 60){
		d = 'D';
	}
	else {
		if (x < 70) {
			d = 'C';
		}
		else {
			if (x <= 80) {
				d = 'B';
			}
			else {
				d = 'A';
			}
		}
	}
return (d);
};
int maximum (DMhs array[],int size){
	int max = array[0].nilai;
	for (i=1;i<=(size-1);i++) {
		if (array[i].nilai >= max){
			max = array[i].nilai;
		}
	}
return (max);
};
int minimum (DMhs array[],int size){
	int min = array[0].nilai;
	for (i=1;i<=(size-1);i++) {
		if (array[i].nilai <= min){
			min = array[i].nilai;
		}
	}
return (min);
};
double average (DMhs array[], int size){
	double sum = 0;
	double avg = 0;
	for (i=0;i<=(size-1);i++) {
		sum = sum + array[i].nilai;
	}
	avg = sum / size;
return (avg);
}
int counter (DMhs array[], char x, int size){
	int count = 0;
	for (i=0;i<=(size-1);i++){
		if (array[i].indeks == x){
			count = count + 1;
		};
	};
return(count);
};
char modus (int counterA, int counterB, int counterC, int counterD){
	char mod;
	if ((counterA >= counterB) && (counterA >= counterC) && (counterA >= counterD)){
		mod = 'A';
	}
	else{
		if ((counterB >= counterA) && (counterB >= counterC) && (counterB >= counterD)){
			mod = 'B';
		}
		else{
			if ((counterC >= counterA) && (counterC >= counterB) && (counterC >= counterD)){
				mod = 'C';
			}
			else {
				mod = 'D';
			};
		};
	};
return (mod);
};
