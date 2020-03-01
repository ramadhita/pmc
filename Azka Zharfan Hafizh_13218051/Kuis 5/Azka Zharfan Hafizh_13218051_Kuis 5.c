// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		: Kamis 20 Februari 2020


//KUIS 5 Mencari rata rata nilai dan mengurutkannya

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

float rata;

typedef struct datamhs
{
	char nama[100];
	int nilai;
	int no;
	int nim;
} mhs[5];

int ratarata(mhs x)
{
	int jumlahmhs = 0;
	int nilaitotal = 0;
	int i=0;
	for (i=0; i<10; i++)
	{
	nilaitotal += x[i].nilai;
	jumlahmhs += 1;
		}
	rata = nilaitotal/jumlahmhs;
	return rata;
	}


int main()
{
int i;
FILE *fp ;
fp = fopen("Data Mahasiswa.csv","w+");

struct datamhs mhs[100];
struct datamhs tmp;

printf("MASUKAN DATA MAHASISWA\n");
for (i=0;i<10;i+=1)
{
    printf("-----------------------\n");
    printf("Masukan no : ");
    scanf("%d", &mhs[i].no);
    printf("Masukan nama : ");
    scanf("%s", mhs[i].nama);
    printf("Masukan nim : ");
    scanf("%d", &mhs[i].nim);

}
    mhs[0].nilai= (50 + (rand()% 50));
    mhs[1].nilai= (50 + (rand()% 50));
    mhs[2].nilai= (50 + (rand()% 50));
    mhs[3].nilai= (50 + (rand()% 50));
    mhs[4].nilai= (50 + (rand()% 50));
    mhs[5].nilai= (50 + (rand()% 50));
    mhs[6].nilai= (50 + (rand()% 50));
    mhs[7].nilai= (50 + (rand()% 50));
    mhs[8].nilai= (50 + (rand()% 50));
    mhs[9].nilai= (50 + (rand()% 50));


fprintf(fp, "DATA MAHASISWA\n");
fprintf(fp, " No,Nama,NIM,Nilai\n");
    i=0;
while (i<10)
{
    fprintf(fp, "%d,%s,%d,%d\n", mhs[i].no ,mhs[i].nama, mhs[i].nim, mhs[i].nilai);
    i+=1;
}
fprintf(fp, "                 \n");
fprintf(fp, " Nilai rata-rata mahasiswa : %d\n", ratarata(mhs));

for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			if ( (mhs[j].nilai) < (mhs[i].nilai) )
			{
				tmp.nilai = mhs[j].nilai;
				mhs[j].nilai = mhs[i].nilai;
				mhs[i].nilai = tmp.nilai;

				strcpy(tmp.nama , mhs[j].nama);
				strcpy (mhs[j].nama , mhs[i].nama);
				strcpy(mhs[i].nama , tmp.nama);

				tmp.nim = mhs[j].nim;
				mhs[j].nim = mhs[i].nim;
				mhs[i].nim = tmp.nim;
			}
		}
	}

fprintf(fp, "DATA YANG SUDAH DIURUTKAN\n");
fprintf(fp, "                 \n");
fprintf(fp, " No,Nama,NIM,Nilai\n");
int j=0 ;
while (j<10)
{
    fprintf(fp, "%d,%s,%d,%d\n", mhs[j].no ,mhs[j].nama, mhs[j].nim, mhs[j].nilai);
    j+=1;
}

fclose(fp);

return 0;

}



