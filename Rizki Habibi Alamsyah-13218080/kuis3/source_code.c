/*  Nama        : Rizki Habibi Alamsyah
    NIM         : 13218080
    Kelas       : K-02
    Tanggal     : 04/02/2020
    Deskripsi   : Menghitung luas lingkaran menggunakan integral (metode jumlah Riemann)
*/

#include<stdio.h>

void main()
{
    double r, dr, pi, t, dt, luas, luas0, int1, int2, i, error;     /*Define variabel*/
    r=7;dr=0.00001;pi=3.14159265359;t=2*pi;dt=0.00001;              /*Inisiasi nilai-nilai yang diketahui, r sebagai jari-jari, dan t sebagai sudut*/
    int1,int2=0;                                                    /*Inisiasi nilai integral dari 0*/

    for(i=0;i<r;i=i+dr)                                             /*Menghitung integral lipat pertama*/
    {
        int1=int1+i*dr;
    }

    for(i=0;i<t;i=i+dt)                                             /*Menghitung integral lipat kedua*/
    {

        int2=int2+int1*dt;
    }

    luas=int2;                                                      /*Diperoleh luas lingkaran dengan integral*/
    luas0=pi*r*r;                                                   /*Dihitung luas lingkaran menggunakan rumus*/
    error=luas0-luas;                                               /*Dihitung selisih perhitungan antara kedua cara perhitungan*/

    printf("Luas jika dihitung menggunakan integral = %f\n",luas);
    printf("Luas jika dihitung menggunakan rumus = %f\n",luas0);
    printf("Error = %f",error);
}
