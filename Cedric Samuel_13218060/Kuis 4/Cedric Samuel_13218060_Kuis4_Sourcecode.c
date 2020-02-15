//* Nama (NIM) : Cedric Samuel (13218060)

#include <stdio.h>
#include <math.h>

int main(void)
{
//Deklarasi variabel
double vs,r;
int t;
double c, vo, tao, vo_baru, dt;
double arr[1000];

//Inisialisasi nilai variabel
vs=5;
r=10000;
c=0.000001;
dt=0.001;
t=0;
vo_baru=0;
vo=0;
arr[0]=vo;

//Main program
tao=(r*c);

while(t<=151)
{
vo_baru=((vs+(vo_baru*tao/dt))/(1+(tao/dt)));
arr[t]=(vo_baru);
printf("%.3f \n", arr[t]);
t+=1;
}

FILE *fp;
   fp = fopen("kurva.txt", "w");
   for(t=0;t<=151;t++)
   {fprintf(fp, "%.3f\n", arr[t]);};
   fclose(fp);
return(0);
}
