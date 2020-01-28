//Nama	: Joshtein Andrew Widjaja
//NIM 	: 13218018
#include <stdio.h>
#include "function.h"
int i,j,nmax,nmin;
int size;
double navg;
int main (void){
size = 0;
for (i=0;i<=4;i++){
	scanf("%s",tabel[i].nama);
	scanf("%d",&tabel[i].nilai);
	size = size + 1;
};
for (i=0;i<=4;i++){
	tabel[i].indeks = dIndeks(tabel[i].nilai);
};
nmax = maximum(tabel,size);
nmin = minimum(tabel,size);
navg = average(tabel,size);
j = 1;
printf("Daftar murid dengan nilai maksimum :\n");
for (i=0;i<=(size-1);i++){
	if (tabel[i].nilai == nmax){
		printf("%d %s %d %c \n",j,tabel[i].nama,tabel[i].nilai,tabel[i].indeks);
		j = j + 1;
	};
};
j = 1;
printf("Daftar murid dengan nilai minimum :\n");
for (i=0;i<=(size-1);i++){
	if (tabel[i].nilai == nmin){
		printf("%d %s %d %c \n",j,tabel[i].nama,tabel[i].nilai,tabel[i].indeks);
		j = j + 1;
	};
};
printf("Nilai rata-rata : %.2f \n",navg);
printf("Modulus indeks : %c",modus(counter(tabel,'A',size),counter(tabel,'B',size),counter(tabel,'C',size),counter(tabel,'D',size)));
return(0);
}
