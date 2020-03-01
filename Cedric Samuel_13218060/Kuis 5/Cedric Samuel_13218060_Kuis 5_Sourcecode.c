#include <stdio.h>
#include <string.h>
int i;

typedef struct data
{
	char nama[100];
    int no;
    int nim;
    int nilai;
}see;


float mean(see arr[])
 {
  float sum = 0, rata;
  for (i=0;i<5;i++)
   { sum = sum + arr[i].nilai;}   
  rata = sum/5;
  return rata;
 }
 
void maksimum(see arr[])
    {
        int max_1 = arr[0].nilai;
        for(i=1;i<5;i++)
        {    
            if(max_1<arr[i].nilai) max_1=arr[i].nilai;
        };
  };



int main(void)
{
	int j, k, swap, swap1, swap2;
	char swap3[10];
	see s[10];
	FILE *fp;

    /*Memasukkan data*/
    strcpy(s[0].nama, "Mawar");
    s[0].nilai=67;
    s[0].nim=13218001;
    s[0].no=1;

    strcpy(s[1].nama, "Melati");
    s[1].nilai=85;
	s[1].nim=13218002;
    s[1].no=2;
    
    strcpy(s[2].nama, "Wisteria");
    s[2].nilai=85;
    s[2].nim=13218003;
    s[2].no=3;
    
    strcpy(s[3].nama, "Carnation");
    s[3].nilai=70;
    s[3].nim=13218004;
    s[3].no=4;
    
    strcpy(s[4].nama, "Lili");
    s[4].nilai=60;
    s[4].nim=13218005;
    s[4].no=5;
    
    strcpy(s[5].nama, "Neneng");
    s[5].nilai=76;
    s[5].nim=13218006;
    s[5].no=6;
    
    strcpy(s[6].nama, "Ina");
    s[6].nilai=58;
    s[6].nim=13218007;
    s[6].no=7;
    
    strcpy(s[7].nama, "Nunung");
    s[7].nilai=55;
    s[7].nim=13218008;
    s[7].no=8;
    
    strcpy(s[8].nama, "Amir");
    s[8].nilai=89;
    s[8].nim=13218009;
    s[8].no=9;
    
    strcpy(s[9].nama, "Beni");
    s[9].nilai=100;
	s[9].nim=13218010;
    s[9].no=10;
	/*Mean*/
printf("Rata-rata : %.2f\n", mean(s));
	
/*-----------Sorting----------*/	
for(j=0;j<=10;j++)
	{
	for(k=0; k<10-j; k++)
		{
			if(s[k].nilai<s[k+1].nilai)
				{
					swap=s[k].nilai;
					swap1=s[k].no;
					swap2=s[k].nim;
					strcpy(swap3,s[k].nama);
					
					s[k].nilai=s[k+1].nilai;
					s[k].no=s[k+1].no;
					s[k].nim=s[k+1].nim;
					strcpy(s[k].nama, s[k+1].nama);
					
					s[k+1].nilai=swap;
					s[k+1].no=swap1;
					s[k+1].nim=swap2;
					strcpy(s[k+1].nama,swap3);
				}
		}
	}	
/*-----------Menampilkan hasil Sorting----------*/
for(k=0;k<10;k++)
	{
		printf("%d %s %d %.2d\n", s[k].no, s[k].nama, s[k].nim, s[k].nilai);
	};

//External file
fp=fopen("fileexternal.txt", "w+");
for(k=0;k<10;k++)
	{
		fprintf(fp,"%d %s %d %.2d\n", s[k].no, s[k].nama, s[k].nim, s[k].nilai);
	};	
fclose(fp);


return(0);    
}    
    
    
    
    
