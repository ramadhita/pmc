/*
SOAL :
bak 1m kubik diisi air 1liter/detik, ada lubang diameter 5 cm di bawah.
brp waktu sampe penuh? trus plot h terhadap t.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	FILE* fp;
	fp = fopen("bak.txt", "w+");
	
	double v, vol, h, dt, tmp;

	double g = 10;
	double pi = 3.14;
	double a = (pi*0.05*0.05);
	
	double t = 0;
	dt = 0.1; //detik
	
	h = 0;
	tmp = 0; //menyimpan nilai h(t-dt)
	vol = 0;
	
	tmp = 0;
	
	while (h < 1)
	{
		printf("%.3lf, ", t);
		printf("%.3lf\n ", h);
		
		fprintf(fp, "%.3lf, ", t);
		fprintf(fp, "%.3lf\n", h);
		
		h = h + ((0.1 - (a*sqrt(2*g*tmp)))*dt);
		//debitnya 100L/detik karena dgn 1L/detik tidak bisa penuh
		tmp = h;
		
		t = t + dt;
	}
	
	fclose(fp);
	
	return 0;
}	