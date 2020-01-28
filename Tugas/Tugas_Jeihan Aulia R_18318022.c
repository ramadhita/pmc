#include <stdio.h>
#include <string.h>

struct Mahasiswa 
{	char nama[10];
	int nilai;
	char  indeks;
};


char penentuan (int nilai){
		if (nilai<65)
			return 'D';
		else if (nilai>66 && nilai<68)
			return'C';
		else if (nilai<69 &&  nilai<80)
			return 'B';
		else 
			return 'A';
}

int main()
{
	struct Mahasiswa A[5];
	
	int i,j,k,l,maks,min,jumlah;
	float rata;
	char palingmaks[100],palingmin[100];
	
	/* masukkan data mahasiswa*/
	strcpy(A[0].nama,"Mawar");
	A[0].nilai= 67;
	strcpy(A[1].nama,"Melati");
	A[1].nilai= 85;
	strcpy(A[2].nama,"Wisteria");
	A[2].nilai= 85;
	strcpy(A[3].nama,"Carnation");
	A[3].nilai= 70;
	strcpy(A[4].nama,"Lili");
	A[4].nilai= 60;
	
	/*masukkan data indeks*/
	for (i=0;i<5;i++){
		A[i].indeks = penentuan(A[i].nilai);
	}
	
	/*langkah-langkah mencari nilai maksimum,minimum, dan rata-rata*/
	maks=A[0].nilai;
	min=A[0].nilai;
	jumlah=0;
	
	for (j=1;j<5;j++){
		if (A[j].nilai>maks)
		maks= A[j].nilai;
		if (A[j].nilai<min)
		min= A[j].nilai;
	}
	
	for (k=0;k<5;k++){
		if (maks== A[k].nilai)
			strcpy(palingmaks,A[k].nama);
		else if (min==A[k].nilai)
			strcpy(palingmin,A[k].nama);
	}
	
	for (l=0;l<5;l++){
		jumlah= jumlah + A[l].nilai;
	}
	/*menghitung jumlah rata-rata*/
	rata= (jumlah / 5.0);
	
	/*mengeluarkan output*/
	printf("Mahasiswa dengan nilai maksimum adalah %s \n",palingmaks);
	printf("Mahasiswa dengan nilai minimum adalah %s \n",palingmin);
	printf("Rata rata nilai seluruh mahasiswa adalah %f \n ",rata);
		
	return(0);
}
