// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		: Selasa 25 Februari 2020


//KUIS 7 Mencari ketinggian air setiap detik

#include <stdio.h>
#include <math.h>
double debit2;

//fungsi yang digunakan untuk menghtiung debit air yang keluar melalui lubang
double debit_keluar(double tinggi){
    double debit;
    debit = (sqrt(2*10*tinggi))*3.14*2.5*2.5*0.0001;
return debit;
}

int main(){

//membuka file untuk menuliskan ketinggian air setiap detik
FILE *fp;
fp =fopen("debit.csv", "w+");

double debit_masuk, debit;
double tinggi;
double volume;
double kec;
int i;

debit_masuk = 0.001;
volume=0;
tinggi = 0;
i=0;

//mealkukan pengulangan untuk mencari debit air yang keluar
//dan untuk mencari ketinggian air setiap detik
//nilai i merupakan waktu ketika ketinggian air mulai steady
//karena besarnya debit air yang masuk sama dengan debit yang keluar
while ((tinggi<1) && (i<=220))
{
    fprintf(fp,"%d,%.3lf\n", i,tinggi*1000);
    debit2 = debit_keluar(tinggi);
    debit = debit_masuk-debit2;
    volume += debit;
    tinggi = volume/1;
    i+=1;
}
fclose(fp);
return 0;
}



