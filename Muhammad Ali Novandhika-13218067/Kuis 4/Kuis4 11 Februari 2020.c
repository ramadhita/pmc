/* EL2008 Pemecahan Masalah dengan C 2019/2020
* Hari dan Tanggal : Selasa, 11 Februari 2020
* Nama (NIM) : Muhammad Ali Novandhika (13218067)
* Nama File : Kuis4 11 Februari 2020.c
* Deskripsi : Rangkaian RC
*/

#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp;
    double hasil=0;
    fp = fopen("test.txt","w+");
    while (hasil<5)
    {
        hasil= (0.005+0.01*hasil)/(0.011);
        fprintf (fp,"%0.16f\n",hasil);
    }
    fclose(fp);
    return 0;
}



