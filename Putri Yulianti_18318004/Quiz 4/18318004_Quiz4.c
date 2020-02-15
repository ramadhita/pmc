#include <stdio.h>
#include <math.h>

int main()
{
	FILE *file_v;
	FILE *file_t;
	file_v = fopen("file1.txt","w");
	file_t = fopen("file2.txt","w");
	int Vi = 5;
	double Vo;
	double R = 10000;
	double C = 0.000001;
	double t = 0;
	double deltat = 0.001;
	double tmax = 5*R*C;
	
	do
	{
		Vo = ((Vi * deltat) + (Vo * (t - deltat) * R * C))/(R * C + deltat);
		fprintf(file_v, "%fl\n" , Vo);
		t += deltat;
		fprintf(file_t, "%fl\n" , t);
	} 
	while (t <= tmax );
	fclose(file_v);
	fclose(file_t);
	
}
