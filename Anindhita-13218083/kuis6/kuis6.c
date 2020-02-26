#include <stdio.h>

#define dt 0.001
#define batas_atas 5 

double fungsi1(double t)
{
	if (t < 1 || t > 3) return 0;
	return (t-1) / (double) 2;
}

double fungsi2(double t)
{
	if (t <= -1 || t >= 1) return 0;
	if (t < 0) return t + 1;
	return 1 - t;
}

int main()
{
	// buka file
	FILE *fp;
    fp = fopen("konvolusi.csv", "w");
	fprintf(fp, "t,y");
	
	// looping setiap waktu diskrit
	for (double t = 0; t < batas_atas; t += dt)
	{
		double hasil = 0;
		
		// hitung deret riemann lower sum
		for (double n = 0; n < batas_atas; n += dt)
		{
			hasil +=  fungsi1(n)*fungsi2(t-n)*dt;
		}
		fprintf(fp, "\n%f,%f", t, hasil);
	}
	
	fclose(fp);
	
	return 0;
}