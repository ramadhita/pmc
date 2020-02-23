/** Apria wati 13218028**/
#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 

int Randoms(int lower, int upper) 
{ 
    int num; 
    num = (rand() % (upper - lower + 1)) + lower; 
    return (num);
} 

struct data {
    char *Nama;
    int   Nilai;
    int   NIM ;
};

int main () {
    struct data mhs[10];

    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("sebelum.txt", "w+");
    fp2 = fopen("sesudah.txt", "w+");

    mhs[0].NIM = 13210898;
    mhs[0].Nama = "Mawar";
    mhs[0].Nilai = Randoms(50,100);
    
    mhs[1].Nama = "Melati";
    mhs[1].Nilai = Randoms(50,100);
    mhs[1].NIM = 13827263;

    mhs[2].Nama = "Wisteria";
    mhs[2].Nilai = Randoms(50,100);
    mhs[2].NIM = 16253744;

    mhs[3].Nama = "Carnation";
    mhs[3].Nilai = Randoms(50,100);
    mhs[3].NIM = 17266355;

    mhs[4].Nama = "Lili";
    mhs[4].Nilai = Randoms(50,100);
    mhs[4].NIM = 12345367;

    mhs[5].NIM = 12345937;
    mhs[5].Nama = "cantik";
    mhs[5].Nilai = Randoms(50,100);
    
    mhs[6].Nama = "Bunga";
    mhs[6].Nilai = Randoms(50,100);
    mhs[6].NIM = 13765433;

    mhs[7].Nama = "Misteri";
    mhs[7].Nilai = Randoms(50,100);
    mhs[7].NIM = 19976578;

    mhs[8].Nama = "Kendry";
    mhs[8].Nilai = Randoms(50,100);
    mhs[8].NIM = 17266350;

    mhs[9].Nama = "Fiorentina";
    mhs[9].Nilai = Randoms(50,100);
    mhs[9].NIM = 12345675;

//menampilkan 
    int k;
    for (k=0; k<10; k++) {
        fprintf (fp1, "%d %s %d %d\n", (k+1), mhs[k].Nama, mhs[k].NIM, mhs[k].Nilai);
    }

int j,i;
struct data temp;

        //Algoritma Insertion Sort 	
		for (i=1; i<10; i++)
		{
			for (j=1; j<=i; j++)
			{
				if (mhs[i].Nilai > mhs[j].Nilai)
				{
                    temp = mhs[j];
                    mhs[j] = mhs[i];
                    mhs[i] = temp;
				}
			}
		};

	int sum = 0;
    float Mean;

    for(i=0; i<10; i++){
        sum += mhs[i].Nilai;
    }
    Mean = sum/10;

    fprintf(fp1,"avg %f", Mean);

    int l;
    for (l=0; l<10; l++) {
    fprintf (fp2, "%d %s %d %d\n",(l+1), mhs[l].Nama, mhs[l].NIM, mhs[l].Nilai) ; 
    }

    return(0);
    fclose(fp1);
    fclose(fp2);
}



