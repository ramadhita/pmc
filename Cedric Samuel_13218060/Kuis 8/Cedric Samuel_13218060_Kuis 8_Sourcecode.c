// Cedric Samuel 13218060
// Kuis 8

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
int a[10][10];
int b[10][10];
int i,j;
int i_pasangan, j_pasangan;

for(i=0;i<10;i++) // i menyatakan baris
	{
	for(j=0;j<10;j++) // j menyatakan kolom
		{ a[i][j] = ((rand()%21)-10); 
		  printf("%d	", a[i][j]);
		};
		printf("\n");
	};
	
printf("\n");
printf("\n");
printf("\n");

// Program menukar isi matrix	
for(i=0;i<10;i++) // i menyatakan baris
{
	for(j=0;j<10;j++) // j menyatakan kolom
	{
		if((i+j)<9)
			{	 
			if((i!=j) && ((i+j)!=9)) //Apabila bukan diagonal
				{
					//Menukar secara horizontal
					if(i>j){
					j_pasangan=(9-j);
					b[i][j]=a[i][j_pasangan];
					b[i][j_pasangan]=a[i][j];
					}
			 
					//Menukar secara vertikal	
					else if(i<j){	
					i_pasangan=(9-i);
					b[i][j] =a[i_pasangan][j];
					b[i_pasangan][j] =a[i][j];
					};
				}
			else //Apabila diagonal
				{		
					b[i][j]= a[i][j];
				};
		  }
		 
		else if(((i+j)==9) || (i==j))  //Apabila diagonal dan diluar 1/2 matrix
		{		
		b[i][j]= a[i][j];
		};
	};
};

for(i=0;i<10;i++) // i menyatakan baris
	{
	for(j=0;j<10;j++) // j menyatakan kolom
		{ 
		  printf("%d	", b[i][j]);
		};
		printf("\n");
	};

return(0);
}
