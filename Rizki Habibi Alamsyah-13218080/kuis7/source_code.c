/*  Nama            : Rizki Habibi Alamsyah
    NIM             : 13218080
    Kelas           : K-02
    Hari/Tanggal    : Selasa/25 Februari 2020
    Deskripsi       : Hubungan ketinggan-waktu pada tangki bocor yang dialiri air
*/

#include<stdio.h>
#include<math.h>

int main()
{
    /*Deklarasi dan Inisiasi Variabel*/
    FILE *fh,*ft;
    float V=0,Vmax=1,Qin=0.001,Qout,d=0.05,A,v,g=10,h=0,t=0,dt=1;

    /*Membuka File*/
    fh=fopen("h.txt","w+");
    ft=fopen("t.txt","w+");

    /*Luas Kebocoran (Sama dengan luas lingkaran)*/
    A=M_PI*(d/2)*(d/2);

    /*While loop - Diulangi sampai tangki penuh atau debit setimbang*/
    while(V<Vmax && ((Qin-Qout)>=0.000000001))      //Approksimasi setimbang terjadi sekitar Qin-Qout=0.000000001
    {
        /*Cetak ketinggian dan waktu ke dalam file*/
        fprintf(fh,"%f\n",h);
        fprintf(ft,"%f\n",t);
        /*Perhitungan parameter-parameter tiap satuan waktu*/
        v=sqrt(2*g*h);      //Kecepatan di titik bocor
        Qout=A*v;           //Debit kebocoran
        V+=(Qin-Qout)*dt;   //Volume tangki
        t+=dt;              //Waktu bertambah sebesar dt setiap iterasi
        h=V/1;              //Ketinggian air volume/luas permukaan
    }

    /*Cetak hasil sesuai kondisi*/
    if (Qin-Qout>=0.000000001)      //Jika tangki penuh, cetak waktu yang dibutuhkan
    {
        printf("Waktu yang dibutuhkan untuk penuh = %f",t);
    }
    else    //Jika terjadi kesetimbangan debit masuk dan keluar, cetak ketinggian dimana titik setimbang terjadi
    {
        printf("Debit masuk dan keluar setimbang di ketinggian %f",h);
    }

    /*Menutup File*/
    fclose(fh);
    fclose(ft);

    return 0;
}
