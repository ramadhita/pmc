/*Nama  : Cedric Samuel
  Nim   : 13218060*/  

#include <stdio.h>
#define phi 3.14

int main(void)
{
	double delta; 	
	int n, i, j;
	double r;
	double a;	
    double jumlah;
    double luas, area;
    double selisih; 

/* Menerima input r (jari-jari lingkaran) dan n (untuk perhitungan dengan integral riemann */			
    printf("Enter r: ");
	scanf("%lf", &r);
	printf("Enter n: ");
	scanf("%d", &n);
	
    delta = r/n;
    area = 0;
    jumlah = 0;
/* Menghitung luas lingkaran dengan rumus phi*r*r */ 
luas = phi*r*r;

/* Menghitung luas lingkaran dengan integral riemann */    
for(i=1; i<=n; i++) 
    {
		a = i*delta;
		jumlah = jumlah + a*delta;
	}

for(j=1; j<=n; j++) 
    {
		area = area + (jumlah*2*phi/n);
	}


/* Menghitung persentase error(perbedaan) antara perhitungan dengan integral riemann dan dengan menggunakan rumus phi*r*r */
selisih= ((area-luas)/luas)*100;
	
printf("Luas lingkaran menggunakan integral riemann : %f.\n", area);
printf("Luas lingkaran menggunakan rumus phi*r*r : %f.\n", luas);
printf("Persentase error : %f.", selisih);	

return(0);		
}
