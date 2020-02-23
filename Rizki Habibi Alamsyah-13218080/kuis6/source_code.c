/*  Nama            : Rizki Habibi Alamsyah
    NIM             : 13218080
    Kelas           : K-02
    Hari/Tanggal    : Kamis/20 Februari 2020
    Deskripsi       : Integral Konvolusi
*/

#include <stdio.h>

//Fungsi f1
double f1(double t)
{
    double f1;
    if((t>=1)&&(t<3))
    {
        f1=(t-1)/2;
    }
    else
    {
        f1=0;
    }
    return f1;
}

//Fungsi f2
double f2(double t)
{
    double f2;
    if((t>=-1)&&(t<0))
    {
        f2=t+1;
    }
    else if((t>=0)&&(t<1))
    {
        f2=1-t;
    }
    else
    {
        f2=0;
    }
    return f2;
}

//Program Utama
int main()
{
    //Deklarasi variabel
    double f3,x,t,dx,dt;
    FILE *f,*fx;

    //Membuka File Tempat Data Hasil(f3)
    f=fopen("f3.txt","w+");
    fx=fopen("x.txt","w+");

    //Nilai delta x dan delta t yang digunakan
    dx=0.001;dt=0.001;

    //Iterasi Untuk Menghitung Hasil Integral Konvolusi
    for(x=0;x<5;x+=dx)
    {
        f3=0;
        for(t=-10;t<10;t+=dt)
        {
            //Rumus konvolusi
            f3+=f1(t)*f2(x-t)*dt;
        }
        //Cetak data yang diperoleh
        fprintf(f,"%f\n",f3);
        fprintf(fx,"%f\n",x);
    }

    //Menutup File
    fclose(f);
    fclose(fx);

    return 0;
}
