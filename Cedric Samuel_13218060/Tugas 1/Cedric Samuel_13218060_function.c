/*Nama  : Cedric Samuel
  Nim   : 13218060*/  

#include <stdio.h>
#include <string.h>
int i;

typedef struct data
{
    char indeks;
    char nama[10];
    int nilai;
}see;


char d_index(int x)
{
   if(x >= 80) 
    {return ('A');}
   else
   { if ((x>=70) && (x <80))
        { return ('B');}
    else { 
        if ((x>=65) && (x <70)){
            return ('C');
        }
        else{
            return('D');
        };
    };
   };   
};

void minimum(see arr[])
    {
        int min_1 = arr[0].nilai, j;
        for(i=1;i<5;i++)
        {    
            if(min_1>arr[i].nilai) min_1=arr[i].nilai;
        }
  printf("Nilai minimum dimiliki oleh : \n");
  for(j=1;j<5;j++)
        {  
   if (arr[j].nilai == min_1) printf(" - %s = %d \n", arr[j].nama, arr[j].nilai);
  }
}

void maksimum(see arr[])
    {
        int max_1 = arr[0].nilai, j;
        for(i=1;i<5;i++)
        {    
            if(max_1<arr[i].nilai) max_1=arr[i].nilai;
        }
  printf("Nilai maksimum dimiliki oleh : \n");
  for(j=1;j<5;j++)
        {  
   if (arr[j].nilai == max_1) printf(" - %s = %d \n", arr[j].nama, arr[j].nilai);
  }
}

float mean (see arr[])
 {
  float sum = 0, rata;
  for (i=0;i<5;i++)
   { sum = sum + arr[i].nilai;}   
  rata = sum/5;
  return rata;
 }
 
 
int main()
{
    int count_a, count_b, count_c, count_d;
	see s[5];

    /*Memasukkan data*/
    strcpy(s[0].nama, "Mawar");
    s[0].nilai=67;

    strcpy(s[1].nama, "Melati");
    s[1].nilai=85;

    strcpy(s[2].nama, "Wisteria");
    s[2].nilai=85;

    strcpy(s[3].nama, "Carnation");
    s[3].nilai=70;

    strcpy(s[4].nama, "Lili");
    s[4].nilai=60;


for(i=0;i<5;i++){
    s[i].indeks = d_index(s[i].nilai);
}

/*Menghitung modus*/

count_a = 0;
count_b = 0;
count_c = 0;
count_d = 0; 
for(i=0;i<5;i++)
{    
    if(s[i].indeks=='A')
    {
        count_a=count_a+1;     
    }
    else if(s[i].indeks=='B')
    {
        count_b=count_b+1;     
    }
    else if(s[i].indeks=='C')
    {
        count_c=count_c+1;     
    }
    else if(s[i].indeks=='D')
    {
        count_d=count_d+1;     
    };    
};   

    if((count_a>count_b) && (count_a>count_c) && (count_a>count_d))
    {
        printf("Modus indeks adalah A\n");
    } 
    else if((count_b>count_a) && (count_b>count_c) && (count_b>count_d))
    {
        printf("Modus indeks adalah B\n");
    } 
    else if((count_c>count_a) && (count_c>count_b) && (count_c>count_d))
    {
        printf("Modus indeks adalah C\n");
    } 
    else if((count_d>count_a) && (count_d>count_b) && (count_d>count_c))
    {
        printf("Modus indeks adalah D\n");
    };
	/*Maksimum*/    
		maksimum(s); 
	/*Minimum*/
		minimum(s);
	/*Mean*/
		printf("Rata-rata : %.2f", mean(s));
return(0);     
}
