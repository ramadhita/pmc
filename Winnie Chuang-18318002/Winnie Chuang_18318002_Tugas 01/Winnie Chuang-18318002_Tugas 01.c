/*mawar	67	C			indeks A > = 85		
melati	85	A				70	<= B < 85
Wistoria	85	A			65 <= C < 70
Carnation	70	B			 D < 65
Lili		60	D*/

#include <stdio.h>

struct data 
{
	char *str;
	int nilai;
	char indekx;
};

int max(struct data datas[5])
{
	int maks, j;
	maks = datas[0].nilai;
	for (j= 1; j < 5; j++)
	{
		if(datas[j].nilai > maks)
		maks = datas[j].nilai;
	}
	return(maks);
}
					
int min(struct data datas[5])
{
	int mini, i;
	mini = datas[0].nilai;
	for (i= 1; i < 5; i++)
	{
		if(datas[i].nilai < mini)
		mini = datas[i].nilai;
	}
	return(mini);
}		
	
float ratarata (struct data datas[5])
{
	int i;
	int sum = 0;
	int rete;
	for (i=0; i<5; i++)
	{
		sum = sum + datas[i].nilai;
	}
	rete = sum/5;
	return (rete);
};

char indeks (int nomor)
{
	char gud;
	if (nomor >=85)
	{
		gud = 'A';
	}
	else if ((nomor >= 70) && (nomor < 85))
	{
		gud = 'B';
	}
	else if ((nomor >= 65) && (nomor < 70))
	{
		gud = 'C';
	}
	else
	{
		gud = 'D';
	}
	
	return (gud);
}
		

int main ()
{	int i, j;
	struct data nama[5];
	nama[0].str = "Mawar";
	nama[1].str = "Melati";
	nama[2].str = "Wistoria";
	nama[3].str = "Carnation";
	nama[4].str = "Lili";
	nama[0].nilai = 67;
	nama[1].nilai = 85;
	nama[2].nilai = 85;
	nama[3].nilai = 70;
	nama[4].nilai = 60;
	nama[0].indekx = indeks(nama[0].nilai);
	nama[1].indekx = indeks(nama[1].nilai);
	nama[2].indekx = indeks(nama[2].nilai);
	nama[3].indekx = indeks(nama[3].nilai);
	nama[4].indekx = indeks(nama[4].nilai);
	
	for	(i=0; i<5; i++)
	{
		if (nama[i].nilai == max(nama))
			{
				printf("Peraih nilai maksimum adalah %s dengan nilai %d\n", nama[i].str,  max(nama));
				printf("indeks %c\n", nama[i].indekx);
			}
	}
	for	(j=0; j<5; j++)
	{
		if (nama[j].nilai == min(nama))
			{
				printf("Peraih nilai minimum adalah %s dengan nilai %d\n",nama[j].str,  min(nama));
				printf("indeks %c\n", nama[j].indekx);
			}
	}
						
	
	
	printf("Nilai ratarata adalah %f\n", ratarata(nama));
	
	
}

/*mawar	67	C			indeks A > = 85		
melati	85	A				70	<= B < 85
Wistoria	85	A			65 <= C < 70
Carnation	70	B			60 <= D < 65
Lili		60	D*/



						

		


