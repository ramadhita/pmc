#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Membut data tipe stud
struct stud 
{
	char *nama;
	int nim;
	double nilai;
};

double mean(struct stud s[10])
{
	int i;
	double mean;
	mean = 0;
	for (i = 0; i<10; i+=1)
	{
		mean = mean + s[i].nilai;
	}
	mean = mean/i; 
	return(mean);
}

int main()
{
	FILE *fp;
	fp = fopen("test1.csv", "w");
	int i=0,j=0;
	struct stud temp;
	struct stud s[10];
	s[0].nim = 13218011;
	s[1].nim = 13218012;
	s[2].nim = 13218013;
	s[3].nim = 13218014;
	s[4].nim = 13218015;
	s[5].nim = 13218016;
	s[6].nim = 13218017;
	s[7].nim = 13218018;
	s[8].nim = 13218019;
	s[9].nim = 13218020;
	s[0].nama = "Sarah";
	s[1].nama = "Alyaa";
	s[2].nama = "Tsaabitah";
	s[3].nama = "Adel";
	s[4].nama = "Alzana";
	s[5].nama = "Yasmin";
	s[6].nama = "Melia";
	s[7].nama = "Tifany";
	s[8].nama = "San";
	s[9].nama = "Sekar";
	for (i=0; i<10; i+=1)
	{
		s[i].nilai = (rand()%51)+50;
		fprintf(fp, "%d,%d,%s,%lf\n",(i+1),s[i].nim,s[i].nama,s[i].nilai);	
	}
	fprintf(fp, "Rata-rata = %lf",mean(s));
	fclose(fp);

	for (i=0; i<10; i+=1)
	{
		for (j=0; j<10-i-1; j+=1) 
			{ 
            	if (s[j].nilai < s[j+1].nilai) 
            		{
	                	temp = s[j];
	                	s[j] = s[j+1];
	                	s[j+1] = temp;
	                }
            }
	}
	// Sorting Nilai
	fp = fopen("test2.csv", "w");
	for (i = 0; i<10; i+=1)
	{
		fprintf(fp, "%d,%d,%s,%lf\n",(i+1),s[i].nim,s[i].nama,s[i].nilai);	
	}
	fprintf(fp, "Rata-rata = %lf",mean(s));
	fclose(fp);
}
