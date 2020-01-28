#include <stdio.h>

/*
	Nama : Christy Grace Siagian
	NIM : 18317501
	Tanggal : 28 Januari 2020
	Tentang : Program Daftar Nama Mahasiswa
*/

struct mahasiswa {
	char nama[100];
	int nilai;
	char indeks;
};

char indeks(int nilai){
	if((nilai>0)&&(nilai<50)){
		return 'D';
	}
	else if((nilai>50)&&(nilai<=60)){
		return 'C';
	}
	
	else if((nilai>50)&&(nilai<=70)){
		return 'B';
	}
	
	else if((nilai>70)&&(nilai<=100)){
		return 'A';
	}
}

void MinMax(int *max,int *min, int nilai){
	
	//min
	if(*min>=nilai){
		*min = nilai;
	}
	// max
	if(*max<=nilai){
		*max = nilai;
	}
}

int main(){
	
	struct mahasiswa mhs_kelas_02[100];
	int i,banyak_mahasiswa,nilai_min,nilai_max,total;
	float rerata;
	int modus[4];
	
	nilai_min=999; 
	nilai_max=-999;
	total =0;
	modus[0]=0; modus[1]=0; modus[2]=0; modus[3]=0;
	
	
	printf("Masukkan banyak mahasiswa : ");
	scanf("%d", &banyak_mahasiswa);
	for(i=0;i<banyak_mahasiswa;i++){
		printf("Masukkan nama mahasiswa : \n");
		scanf("%s", mhs_kelas_02[i].nama);
		printf("Masukkan nilai : \n");
		scanf("%d", &mhs_kelas_02[i].nilai);
		mhs_kelas_02[i].indeks= indeks(mhs_kelas_02[i].nilai);
		MinMax(&nilai_max,&nilai_min,mhs_kelas_02[i].nilai);
		total  = total + mhs_kelas_02[i].nilai;
	}
	rerata = total/banyak_mahasiswa;
	for(i=0;i<banyak_mahasiswa;i++){
		if(mhs_kelas_02[i].indeks=='A'){
			modus[0]++;
		}
		else if(mhs_kelas_02[i].indeks=='B'){
			modus[1]++;
		}
		else if(mhs_kelas_02[i].indeks=='C'){
			modus[2]++;
		}
		else if(mhs_kelas_02[i].indeks=='D'){
			modus[3]++;
		}
	}

	printf("\nNilai minimum : %d\n",nilai_min);
	printf("Nama-nama yang mendapat nilai minimum: \n");
	for(i=0;i<banyak_mahasiswa;i++){
		if(mhs_kelas_02[i].nilai==nilai_min){
			printf("%s\n",mhs_kelas_02[i].nama);
		}
	}

	printf("\nNilai maximum: %d\n",nilai_max);
	printf("Nama-nama yang mendapat nilai maksimum: \n");
	for(i=0;i<banyak_mahasiswa;i++){
		if(mhs_kelas_02[i].nilai==nilai_max){
			printf("%s\n",mhs_kelas_02[i].nama);
		}
	}
	 
	printf("\n");
	
	if((modus[0]>=modus[1])&&(modus[0]>=modus[2])&&(modus[0]>=modus[3])){
		printf("Indeks modusnya adalah : A\n");
	}
	else if((modus[1]>=modus[0])&&(modus[1]>=modus[2])&&(modus[1]>=modus[3])){
		printf("Indeks modusnya adalah : B\n");
	}
	else if((modus[2]>=modus[0])&&(modus[2]>=modus[1])&&(modus[2]>=modus[3])){
		printf("Indeks modusnya adalah : C\n");
	}
	else if((modus[3]>=modus[0])&&(modus[3]>=modus[1])&&(modus[3]>=modus[2])){
		printf("Indeks modusnya adalah : D\n");
	}
	
	printf("Nilai rerata kelas: %.3f\n",rerata);

	
	return 0;
}
