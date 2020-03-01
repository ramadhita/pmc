/* EL2008 Pemecahan Masalah dengan C 2019/2020
* Hari dan Tanggal : Selasa, 25 Februari 2020
* Nama (NIM) : Muhammad Ali Novandhika (13218067)
* Nama File : Kuis7 25 Februari 2020.c
* Deskripsi : mencari ketinggian air dalam bak bocor
*/

#include <stdio.h>
#include <math.h>
#define g 10
#define A 0.00196349541


double debit_keluar (double h)
{
    double debit;
    debit = A*sqrt(2*g*h);
    return debit;
}

int main()
{
    double adeae,temp;
    double h=0,hmax=1;
    int i=0;
    FILE *fp;
    fp = fopen("kuis7.csv","w+");
    while ((h<hmax)&&(i<250))
    {   adeae=debit_keluar(h);
        temp=h;
        h+=(0.001-adeae);
        i+=1;
        fprintf (fp,"%f,%d\n",h,i);
    }
    fclose(fp);
    return 0;
}
