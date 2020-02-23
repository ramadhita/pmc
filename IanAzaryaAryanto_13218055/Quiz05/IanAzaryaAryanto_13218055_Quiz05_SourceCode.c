// Nama           : Ian Azarya Aryanto
// NIM            : 13218055
// Kelas          : K02 EL2008

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Mendefinisikan structure Mahasiswa
typedef struct Mahasiswa { //Structure data mahasiswa (Nama, NIM, Nilai)
    char Nama[100];
    char NIM[100];
    int Nilai;
}data; // Mempersingkat nama struct Mahasiswa menjadi data dengan typedef


// Main program 
int main ()
{
	float sum = 0;
    float mean = 0;
    int l; 
    int maks = 10;
	int nilai_max = 100;
	int nilai_low = 50;
	int tmp = 0;
	char tmpNam[100];
	char tmpNIM[100];
    data mhs[10];
    FILE *filebaca;
        for(int i=0;i<maks;i++)
           {
               printf("Pengisian Data Mahasiswa Ke-%i\n",i+1);
               printf("Nama : ");
               gets(mhs[i].Nama);
               printf("NIM : ");
               gets(mhs[i].NIM);
               mhs[i].Nilai = (rand() % (nilai_max - nilai_low + 1)) + nilai_low;
            } 
	filebaca = fopen("IanAzaryaAryanto_13218055_Quiz05_DataMHS.csv","w");
	fprintf(filebaca , "File Before Sorting \n");
	fprintf(filebaca, "Nama, NIM, Nilai\n");
	for (int i =0; i<10;i++) {
		fprintf(filebaca, "%s, %s, %d\n", mhs[i].Nama, mhs[i].NIM, mhs[i].Nilai);
	}
	fprintf(filebaca , "\n");
    for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (mhs[j].Nilai > mhs[i].Nilai) {
				tmp = mhs[i].Nilai;
				strcpy(tmpNam,mhs[i].Nama);
				strcpy(tmpNIM,mhs[i].NIM);
				mhs[i].Nilai = mhs[j].Nilai; 
				strcpy(mhs[i].NIM,mhs[j].NIM);
				strcpy(mhs[i].Nama,mhs[j].Nama);
				strcpy(mhs[j].Nama,tmpNam);
				strcpy(mhs[j].NIM, tmpNIM);
				mhs[j].Nilai = tmp;            
			}  
		}
	}
	for (int i =9; i>=0;i--) {
		printf("\n Nama 	: %s\n",mhs[i].Nama);
		printf(" NIM 	: %s\n",mhs[i].NIM);
		printf(" Nilai	: %d\n\n",mhs[i].Nilai);
		}
	printf("\n");
	
    for(l=0;l<maks;l++)
        {
            sum = sum + mhs[l].Nilai;
            }
    mean = sum/maks;
    
	printf("Rata-rata nilai : %.2f \n\n",mean);
	
	fprintf(filebaca , "File After Sorting\n");
	fprintf(filebaca, "Nama, NIM, Nilai\n");
	for (int i =9; i>=0;i--) {
		fprintf(filebaca, "%s, %s, %d\n", mhs[i].Nama, mhs[i].NIM, mhs[i].Nilai);
	}
	fprintf(filebaca, "\nRata-rata nilai : %.2f \n",mean);
	
	fclose(filebaca);
	return 0;
}



