#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
	int nim;
	char nama[10];
	float nilai;
};

//number = (rand() % (upper - lower + 1)) + lower

int random(int lower, int upper)
{
	int result;
	
	result = rand() % (upper - lower + 1) + lower;
	
	return(result);
}

int main()
{
	int i, nilai, total;
	FILE *fp;
	
	fp = fopen("/tmp/nilai.txt", "w+");
	
	float average;
	
	struct student mhs[10];
	
	//01
		strcpy(mhs[0].nama,"Tasmon");
		mhs[0].nim = 18318018;
		mhs[0].nilai = random(50,100);
	//02
		strcpy(mhs[1].nama,"Adeline");
		mhs[1].nim = 13218081;
		mhs[1].nilai = random(50,100);
	//03
		strcpy(mhs[2].nama,"Christy");
		mhs[2].nim = 18317501;
		mhs[2].nilai = random(50,100);
	//04
		strcpy(mhs[3].nama,"Dorothea");
		mhs[3].nim = 18318007;
		mhs[3].nilai = random(50,100);
	//05
		strcpy(mhs[4].nama,"Vivi");
		mhs[4].nim = 18318028;
		mhs[4].nilai = random(50,100);
	//06
		strcpy(mhs[5].nama,"Daniel");
		mhs[5].nim = 13318061;
		mhs[5].nilai = random(50,100);
	//07
		strcpy(mhs[6].nama,"Dobleh");
		mhs[6].nim = 19919199;
		mhs[6].nilai = random(50,100);
	//08
		strcpy(mhs[7].nama,"Kabur");
		mhs[7].nim = 19919200;
		mhs[7].nilai = random(50,100);
	//09
		strcpy(mhs[8].nama,"Monika");
		mhs[8].nim = 16518049;
		mhs[8].nilai = random(50,100);
	//10
		strcpy(mhs[9].nama,"Goblin");
		mhs[9].nim = 16418400;
		mhs[9].nilai = random(50,100);
		
	fprintf(fp, "No., NIM, Nama, Nilai\n");
	for (i=0; i < 10; i++)
	{
		fprintf(fp,"%d,", i+1);
		fprintf(fp,"%d,", mhs[i].nim);
		fprintf(fp,"%s,", mhs[i].nama);
		fprintf(fp,"%lf\n", mhs[i].nilai);
	}
	
	//Menghitung Rata - Rata
	total = 0;
	for (i=0; i < 10; i++)
	{
			total = (total + mhs[i].nilai);
	}
	
	average = (total/10);
	
	printf("Rata - rata : %.2f", average);
	
	//Mengurutkan berdasarkan nilai
	struct student temp;
	
	int j, k;
	
	for (j=0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (mhs[j].nilai >= mhs[k].nilai)
			{
				strcpy(temp.nama, mhs[j].nama);
				strcpy(mhs[j].nama, mhs[k].nama);
				strcpy(mhs[k].nama, temp.nama);
				
				temp.nim = mhs[j].nim;
				mhs[j].nim = mhs[k].nim;
				mhs[k].nim = temp.nim;
				
				temp.nilai = mhs[j].nilai;
				mhs[j].nilai = mhs[k].nilai;
				mhs[k].nilai = temp.nilai;
			}
		}
	}
	
	fprintf(fp, "\n");
	fprintf(fp, "No., NIM, Nama, Nilai\n\n");
	for (i=0; i < 10; i++)
	{
		fprintf(fp,"%d,", i+1);
		fprintf(fp,"%d,", mhs[i].nim);
		fprintf(fp,"%s,", mhs[i].nama);
		fprintf(fp,"%.2lf\n", mhs[i].nilai);
	}
	
	fprintf(fp, "\nRata - rata : %.2f\n\n", average);

return 0;	
	
}

	