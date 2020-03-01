#include<stdio.h>
#include<math.h>
#define pi 3.14

double debitkeluar(double h)
{
    double hasil;
    float luas_penampang = 0.00019625;
    hasil = luas_penampang *sqrt(2*10*h);

    return hasil;
}


int main()
{
    double h,volume,debitcurrent,debitin,x;
    int waktu;

    waktu = 0;
    volume = 0;
    h = 0;
    debitin= 0.001;
    FILE *fp;

    fp = fopen("bakbocor.txt","w+");

    while(h < 1)
    {
    x = debitkeluar(h);
    debitcurrent = debitin - x;
    volume += debitcurrent;
    h = (volume)/1;
    fprintf(fp,"%lf\t %d\n", h, waktu);
    waktu += 1;
    }
    fclose(fp);
}
