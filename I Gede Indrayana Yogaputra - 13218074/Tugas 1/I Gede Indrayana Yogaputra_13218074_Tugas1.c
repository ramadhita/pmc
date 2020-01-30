/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 */

#include <stdio.h>
#include <math.h>


char indeks1 (int nilai)
{
	char indeks;
	if (nilai > 80){
		indeks = 'A';}
	else if ((nilai <= 80) && (nilai > 70)){
		indeks = 'B';}
	else if ((nilai <= 70) && (nilai > 60)){
		indeks = 'C';}
	else {
		indeks = 'D';}
return (indeks);}

struct hasil 
{ 
	char *name;
	int nilai;
	char indeks;
};


int main (void)
{
	int i, maks, min;
	double jumlah;
	
	struct hasil data[5];
	data[0].name = "Mawar";
	data[1].name= "Melati";
	data[2].name= "Wisteria";
	data[3].name = "Carnation";
	data[4].name = "Lili";
	data[0].nilai = 67;
	data[1].nilai = 85;
	data[2].nilai = 85;
	data[3].nilai = 70;
	data[4].nilai = 60;
	for (i=0; i<5; i+=1)
	{
		data[i].indeks = indeks1(data[i].nilai);
	}
	jumlah = 0;
	maks = data[0].nilai;
	min = data[0].nilai;
	
	for (i = 0; i<5; i+=1)
	{ 
		jumlah = jumlah + data[i].nilai;
		if (maks < data[i].nilai)
			maks = data[i].nilai;
		if (min > data[i].nilai)
			min = data[i].nilai;
	}
	for (i =0; i< 5; i+=1)
	{
		if (data[i].nilai == maks)
		printf("%s meraih nilai tertinggi dengan nilai %d \n", data[i].name, maks);
		if (data[i].nilai == min)
		printf("%s meraih nilai terendah dengan nilai %d \n", data[i].name, min);
	}
	printf("Nilai rata rata ialah %.2f ", jumlah/5);

return(0);
}

