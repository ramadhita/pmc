/*  Nama            : Rizki Habibi Alamsyah
    NIM             : 13218080
    Kelas           : K-02
    Hari/Tanggal    : Selasa/11 Februari 2020
    Deskripsi       : Step respon rangkaian RC Seri
*/

#include<stdio.h>

int main()
{
    /*Deklarasi dan inisiasi varibel serta file yang digunakan*/
    double Vin=5,R=10000,C=0.000001;        /*Nilai Vin,R, dan C berdasarkan nilai yang diketahui*/
    double Vout,Vout0,dt,t;                 /*Vout:output, Vout0:Vout sebelumnya, dt:selang waktu, t:waktu*/
    FILE *f_Vout,*f_t;                      /*Menggunakan 2 file, satu untuk data Vo dan satu lainnya untuk data t*/

    /*Membuka file yang akan diisi data Vout dan t*/
    f_Vout=fopen("Vo.txt","w+");
    f_t=fopen("t.txt","w+");

    /*Inisiasi Vo awal, delta t, dan t*/
    Vout0=0;dt=0.00001;t=0;                 /*Vout awal=0, dt dibuat sekecil mungkin, dan t awal=0*/

    /*Iterasi perhitungan Vo sampai steady state*/
    while (Vout<Vin-0.001)                  /*Iterasi diulangi sampai steady state, nilai Vout tidak diambil sama dengan Vin karena akan membutuhkan waktu tak hingga*/
    {                                       /*Oleh karena itu diambil batas yang cukup dekat dengan Vin saja*/
        Vout=(Vin*dt+R*C*Vout0)/(R*C+dt);   /*Rumus sesuai dengan perhitungan yang telah dilakukan*/
        t+=1000*dt;                         /*Waktu ditambah dengan selang waktu setiap perulangan*/
        Vout0=Vout;                         /*Nilai Vo sebelumnya diubah menjadi Vo saat ini untuk perhitungan selanjutnya*/
        /*Memasukkan data ke dalam file*/
        fprintf(f_Vout,"%f\n",Vout);
        fprintf(f_t,"%f\n",t);
    }

    /*Menutup file yang telah berisi data*/
    fclose(f_Vout);
    fclose(f_t);

    return 0;
}
