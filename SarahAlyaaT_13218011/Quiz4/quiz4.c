#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	//Inisialisasi variabel
	double V, Vo, tf, Vs = 5, RC = 0.01, t=0.0001, dt=0.0001;
	FILE *fp;
	fp = fopen("test.csv", "w");
	//Penginputan nilai tegangan awal 
	printf("Vo: "); 
  	scanf("%lf", &Vo);
  	//Penginputan nilai waktu pengamatan
  	printf("tf (Waktu akhir pengamatan): ");
  	scanf("%lf", &tf);
  	for (t = 0.0001; t<tf; t+=0.0001)
	{
		V = ((Vs/RC)+(Vo/dt))/((1/RC)+1/dt);
		Vo = V;
		fprintf(fp, "%lf,%lf\n", t,V);	
	}
	fclose(fp);
}