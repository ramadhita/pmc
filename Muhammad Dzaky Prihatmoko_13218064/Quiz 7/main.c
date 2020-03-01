#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //inisialisasi dan deklarasi
    double h=0;
    double t=0;
    double debit_masuk=0.001;
    double debit_keluar;
    double selisih_debit;
    FILE*fp;
    FILE*fp2;
    //buka file
    fp=fopen("tinggi.txt","w");
    fp2=fopen("waktu.txt","w");
    //hitung selisih
    selisih_debit = debit_masuk-((0.25*0.0025*3.14*sqrt(2*10*h)));
    while (selisih_debit>=0.000001)
    {
        //looping menghitung tinggi air dalam bak
        h =h+(debit_masuk-(0.25*0.0025*3.14*(sqrt(2*10*h))))*0.1;
        selisih_debit = debit_masuk-((0.25*0.0025*3.14*sqrt(2*10*h)));
        t= t + 0.1;
        fprintf(fp,"%lf\n",h);
        fprintf(fp2,"%lf\n",t);
    }
    //file ditutup
    fclose(fp);
    fclose(fp2);
}
