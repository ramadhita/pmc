#include <stdio.h>
#include <string.h>

struct Mahasiswa								//struct data mahasiswa
{
	char Nama[10];								//definisi variabel
    int NIM;
	int Nilai;
};

int main(void)
{
	int i, j, n;								//definisi variabel
	float avg;
	struct Mahasiswa mhs[10];
	struct Mahasiswa a;

	strcpy(mhs[0].Nama, "Mawar");				//copy string ke dalam string lain
	mhs[0].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[0].NIM = 18318016;						//atur NIM mahasiswa 1

	strcpy(mhs[1].Nama, "Melati");				//copy string ke dalam string lain
	mhs[1].Nilai = (rand()%51)+50;				//atur nilai random
    mhs[1].NIM = 18318015;						//atur NIM mahasiswa 2

	strcpy(mhs[2].Nama, "Dahlia");				//copy string ke dalam string lain
	mhs[2].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[2].NIM = 18318018;						//atur NIM mahasiswa 3
	
	strcpy(mhs[3].Nama, "Teratai");				//copy string ke dalam string lain
	mhs[3].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[3].NIM = 18318019;						//atur NIM mahasiswa 4

	strcpy(mhs[4].Nama, "Lili");				//copy string ke dalam string lain
	mhs[4].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[4].NIM = 18318010;						//atur NIM mahasiswa 5

	strcpy(mhs[5].Nama, "Matahari");			//copy string ke dalam string lain
	mhs[5].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[5].NIM = 18318011;						//atur NIM mahasiswa 6

	strcpy(mhs[6].Nama, "Kamboja");				//copy string ke dalam string lain
	mhs[6].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[6].NIM = 18318017;						//atur NIM mahasiswa 7

	strcpy(mhs[7].Nama, "Flamboyan");			//copy string ke dalam string lain
	mhs[7].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[7].NIM = 18318013;						//atur NIM mahasiswa 8

	strcpy(mhs[8].Nama, "Seroja");				//copy string ke dalam string lain
	mhs[8].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[8].NIM = 18318014;						//atur NIM mahasiswa 9

	strcpy(mhs[9].Nama, "Asoka");				//copy string ke dalam string lain
	mhs[9].Nilai = (rand()%51)+50;				//atur nilai random
	mhs[9].NIM = 18318012;						//atur NIM mahasiswa 10

	avg = 0;									//nilai awal rata-rata
	n = 9;										//9 indeks

	for(i=0; i<=n; i++)							//iterasi
	{
		avg = avg + mhs[i].Nilai;				//nilai masing-masing mahasiswa
	}
	avg = avg/10;								//nilai rata-rata semua mahasiswa

	printf("Nilai rata-rata adalah :  %f\n", avg);	//output nilai rata-rata semua mahasiswa

	for (i=0; i<=n; ++i)						//iterasi
	{
		for (j=i+1; j<=n; ++j)					//iterasi bertingkat
		{
			if (mhs[i].Nilai < mhs[j].Nilai)	//bandingkan nilai, ketika nilai mhs[i].Nilai < mhs[j].Nilai
			{
				a =  mhs[i];					//maka struct Mahasiswa a = struct Mahasiswa mhs[i]
                mhs[i] = mhs[j];				//struct Mahasiswa mhs[j] = struct Mahasiswa mhs[i]
                mhs[j] = a;						//struct Mahasiswa mhs[j] = struct Mahasiswa a
			}
		}
	}

	for (i=0; i<=n; ++i)						//iterasi
	{
        printf("%d, %s, %d\n", mhs[i].NIM, mhs[i].Nama, mhs[i].Nilai);	//output NIM, Nama, Nilai (dari yang tertinggi ke terendah)
    }
	return 0;									//selesai
}
