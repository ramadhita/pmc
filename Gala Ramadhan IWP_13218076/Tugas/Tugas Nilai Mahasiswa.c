#include <stdio.h>
#include <string.h>


typedef struct info{
	char nama[15];
	int nilai;
	char indeks;
} data;

//=====deklarasi fungsi===============
char getindeks(int x);
//int rata2 (data x);
//====================================

//program utama
int main(){
	
	int i;
	int x;
	data siswa[5];
	
	strcpy(siswa[0].nama , "mawar");
	strcpy(siswa[1].nama , "melati");
	strcpy(siswa[2].nama , "wisteria");
	strcpy(siswa[3].nama , "caranation");
	strcpy(siswa[4].nama , "lili");
	
	siswa[0].nilai = 67;
	siswa[1].nilai = 85;
	siswa[2].nilai = 85;
	siswa[3].nilai = 70;
	siswa[4].nilai = 60;
	
	for (i=0 ; i<5 ; i++)
	{
		siswa[i].indeks = getindeks(siswa[i].nilai);
		// printf("indeks = %c \n", siswa[i].indeks);
	}
	
	//cari rata2
	int jml = 0;
	
	for(i=0 ; i<5 ; i++)
	{
		jml+= siswa[i].nilai;
	}
	int rata2 = jml/i;
	printf("\n");
	printf("=> Nilai rata-rata adalah %d \n", rata2);
	printf("\n");

	//cari max
	int max = siswa[0].nilai;
	int imax = 0;
	int min = siswa[0].nilai;
	int imin = 0;
	for(i=1 ; i<5 ; i++)
	{
		if (siswa[i].nilai>max)
		{
			max = siswa[i].nilai;
			imax = i;
		}
	}
	printf("=> Nilai terbesar %d\n", max);
	printf("Peraih nilai terbesar : ");
	for(i=0 ; i<5 ; i++)
	{
		if (siswa[i].nilai == max)
		{
			printf("%s \n", siswa[i].nama);
		}
	}
	printf("\n");

	for(i=1 ; i<5 ; i++)
	{
		if (siswa[i].nilai<min)
		{
			min = siswa[i].nilai;
			imin = i;
		}
	}
	printf("=> Nilai terkecil adalah %d\n", min);	
	printf("Peraih nilai terkecil :\n");
	for(i=0 ; i<5 ; i++)
	{
		if (siswa[i].nilai == min)
		{
			printf("%s\n", siswa[i].nama);
		}
	}
	printf("\n");

	// Hitung Modus
	int count = 0 ;
	int count1 = 0 ;
	int imodus = 0;
	int q;
	char abjad[4]={'A','B','C','D'};

	for( q=0 ; q<4 ; q++ )
	{
		
		for(int j=0 ; j<5 ; j++ )
		{
			if (siswa[j].indeks == abjad[q])
			{
				count1 +=1;
			}
		}
		if (count1>=count)
		{
			count = count1;
			imodus = q;
			count1 = 0;
		}
		else
		{
			count1 = 0;
		}
	}
	// printf("count %d\n", count);
	// printf("count1 %d\n", count1);
	// printf("i %d\n", i);
	// printf("imodus %d\n", imodus);
	printf("=> Maka indeks yang paling banyak muncul adalah, %c, yaitu muncul sebannyak %d kali\n", siswa[imodus].indeks, count);
	printf("\n");

	return 0;
}


char getindeks(int x)
{
	char ind='A';
	
	if (x<60){
		//strcpy(indeks , "D");
		ind = 'D';
	}
	else if ((x<70) && (x>=60)) {
		//strcpy(indeks , "C");
		ind = 'C';
	}
	else if ((x<80) && (x>=70)) {
		//strcpy(indeks , "C");
		ind = 'B';
	}
	if ((x<=100) && (x>=80)) {
		//strcpy(indeks , "C");
		ind = 'A';
	}
	return ind;
}

// int rata2 (data x)
// {
// 	int jml = 0;
// 	int i;
// 	for( i=0 ; i<5 ; i++)
// 	{
// 		jml+= x[i].nilai;
// 	}
// 	int mean = jml/i;
// 	//printf("rata2 = %d \n", rata2);
// 	return mean;
// }
