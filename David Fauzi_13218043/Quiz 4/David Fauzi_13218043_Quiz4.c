#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// INISIASI
double r1=10000;
double c1=0.000001;
double v1=5;
int t=1;
double arrayvo[500];
double dt=0.0001;

int main()
{
    // ASUMSI KONDISI AWAL Vo=0
    arrayvo[0]=0;
    // Masukan nilai Vo untuk setiap selang waktu dt=0.0001
    while (t<500)
    {
        arrayvo[t]=((v1+(arrayvo[t-1]*r1*c1/dt))/ (1+(r1*c1/dt)));
        t++;
    };
    // INISIASI File 
    FILE *x;
    // Buka File
    x=fopen("data.txt","w");
    for (int i = 0; i < 500; i++)
    {
        // Masukan nilai didalam Array ke dalam .txt
        printf("%lf \n",arrayvo[i]);
        fprintf(x,"%lf\n",arrayvo[i]);
    }
    //Tutup
    fclose(x);

    return 0;
}
