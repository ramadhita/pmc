//Jeihan Aulia Ramdhani 18318022
//Kuis 5


#include <stdio.h>
#include <string.h>

struct Mahasiswa 
{	char nama[10];
	int nilai,i,NIM;
};

int main () {
	
	struct Mahasiswa A[10];
	int i,j,jumlah,rata;
	jumlah=0;
	
	/* masukkan data mahasiswa*/
	strcpy(A[0].nama,"Mawar");
	A[0].NIM= 18318040;
	strcpy(A[1].nama,"Melati");
	A[1].NIM= 18318043;
	strcpy(A[2].nama,"Wisteria");
	A[2].NIM= 18318055;
	strcpy(A[3].nama,"Carnation");
	A[3].NIM= 18318077;
	strcpy(A[4].nama,"Lili");
	A[4].NIM= 18318046;
	strcpy(A[5].nama,"Fadia");
	A[5].NIM= 18318021;
	strcpy(A[6].nama,"Hafizh");
	A[6].NIM= 18318033;
	strcpy(A[7].nama,"Hapsari");
	A[7].NIM= 18318013;
	strcpy(A[8].nama,"Okta");
	A[8].NIM= 18318051;
	strcpy(A[9].nama,"Bunga");
	A[9].NIM= 18318055;
	
	/*langkah-langkah mencari nilai maksimum dan minimum*/
	
	for(j=0;j<9;j++){ //memasukkan nilai secara random
		A[j].nilai= (rand()%50)+50;
	}
	
	for (j=0;j<9;j++){ //menghitung jumlah semua nilai
		jumlah= jumlah + A[j].nilai;
	}
	
	//menghitung nilai rata-rata mahasiswa
	rata= jumlah/10;
	
	FILE *file1;
	file1=fopen("hasilnilai.csv","w+"); //menulis file eksternal
	for (i=0;i<=9;i++){  //loop untuk menulis data pada file eksternal
		fprintf(file1,"%d;%d;%s;%d\n",i,A[i].NIM,A[i].nama,A[i].nilai);
	}
		fprintf(file1,"%d",rata);
	fclose(file1); //menutup file
	
	 for (i = 0; i<10; ++i) //loop untuk mengurutkan nilai dari yang tertinggi 
        {
            for (j =i + 1; j<10; ++j)
            {
                if (A[i].nilai < A[j].nilai) 
                {
                   struct Mahasiswa a = A[i];
                    A[i] =A[j];
                    A[j] = a;
 
                }
 
            }
 
        }
        
    FILE *file2;
	file2= fopen("hasilnilaibaru.csv","w+"); //menulis file eksternal
	for (i=0;i<=9;i++){  //loop untuk menulis data yang sudah diurutkan pada file eksternal
		fprintf(file1,"%d;%d;%s;%d\n",i,A[i].NIM,A[i].nama,A[i].nilai);
	}
		fprintf(file1,"%d",rata);
	fclose(file2);
	return(0);
}
