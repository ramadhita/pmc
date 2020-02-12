#include <stdio.h>
#include <math.h>


int main (void)
{
	/* inisialisasi nilai variabel*/
	float r =7;
	float pi = 3.141592;
	float par= 70000; /*jumlah partisi yang digunakan dalam integral*/
	float ba= (2*pi); /*batas atas integral luar untuk luas lingkaran*/
	float bb= 0; /*batas bawah untuk semua integral*/
	float dy = ba/(par); /*delta y untuk integral luar*/
	float dx= r/par ; /*delta x untuk integral dalam*/
	float i;
	float sum=0;
	float luasintegral=0;
	float luasmanual =(pi*r*r);
	float galat;

/*menghitung integral dalam , fungsi r*/	
for (i=bb;i<=r;i+=dx)
{
	sum=sum+(i*dx);
}

/*menghitung integral luar luas lingkaran*/
for (i=bb;i<= ba;i+=dy)
{
	luasintegral= luasintegral +(sum*dy);
}
/*menghitung galat perhitungan*/
galat= ((luasintegral-luasmanual)/luasmanual)*100;

printf("hasil perhitungan luas lingkaran secara integral: %3.2f \n",luasintegral);
printf("hasil perhitunganluas lingkaran secara manual adalah %3.2f \n",luasmanual);
printf("error pada perhitungan sebesar %f persen \n", galat);

return (0);
}




