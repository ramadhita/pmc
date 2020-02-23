/*  Nama            : Rizki Habibi Alamsyah
    NIM             : 13218080
    Kelas           : K-02
    Hari/Tanggal    : Kamis/20 Februari 2020
    Deskripsi       : Struct Data Mahasiswa
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Deklarasi struct mahasiswa
struct mahasiswa
{
    int No;
    int NIM;
    char *nama;
    int nilai;
};

//Fungsi Mencara Rata-rata
double rataan(struct mahasiswa m[10])
{
    int jumlah, i, a[10];
    jumlah=0;

    for(i=0;i<10;i++)
    {
        a[i]=m[i].nilai;
    }

    for(i=0;i<10;i++)
    {
        jumlah+=a[i];
    }
    return(jumlah/10);
}

//Fungsi Mencari Indeks Array dengan Nilai Maksimum
int indeks_max(int nilai[10])
{
    int i,max,idxmax;
    max=nilai[0];
    idxmax=0;
    for(i=1;i<10;i++)
    {
        if (nilai[i]>max)
        {
            max=nilai[i];
            idxmax=i;
        }
    }
    return idxmax;
}

//Fungsi untuk mengurutkan struct berdasarkan nilai
void sort(struct mahasiswa m[10],struct mahasiswa ms[10])
{
    int i,a[10],idxmax;
    for(i=0;i<10;i++)
    {
        a[i]=m[i].nilai;
    }

    for(i=0;i<10;i++)
    {
        idxmax=indeks_max(a);
        a[idxmax]=0;
        ms[i]=m[idxmax];
    }
}

//Program Utama
int main()
{
    //Deklarasi Variabel
    struct mahasiswa m[10],ms[10];
    FILE *f1,*f2;
    int i;

    //Membuka file yang akan digunakan
    f1=fopen("data1.txt","w+");
    f2=fopen("data2.txt","w+");

    //Pengisian Data
    for(i=0;i<10;i++)
    {
        m[i].No=i+1;
        m[i].NIM=rand()%9999999+10000000;
        m[i].nilai=rand()%50+50;
    }
    m[0].nama="Tegan Stall";
    m[1].nama="Yelena Gallup";
    m[2].nama="Trenton Villeda";
    m[3].nama="Catherin Eckart";
    m[4].nama="Stanton Sennett";
    m[5].nama="Brad Hadsell";
    m[6].nama="Nellie Lacross";
    m[7].nama="Susan Forde";
    m[8].nama="Florence Jeske";
    m[9].nama="Alfred Mikell";

    //Mengurutkan struct m dengan hasil yang sudah terurut struct ms
    sort(m,ms);

    //Mencetak Data Awal
    for(i=0;i<10;i++)
    {
        fprintf(f1,"%d\t",m[i].No);
        fprintf(f1,"%d\t",m[i].NIM);
        fprintf(f1,"%s\t\t",m[i].nama);
        fprintf(f1,"%d\n",m[i].nilai);
    }
    fprintf(f1,"Rata-rata = %2.f\n",rataan(m));

    //Mencetak Data Akhir Setelah Diurutkan Berdasarkan Nilai dari yang Tertinggi
    for(i=0;i<10;i++)
    {
        fprintf(f2,"%d\t",ms[i].No);
        fprintf(f2,"%d\t",ms[i].NIM);
        fprintf(f2,"%s\t\t",ms[i].nama);
        fprintf(f2,"%d\n",ms[i].nilai);
    }
    fprintf(f2,"Rata-rata = %2.f\n",rataan(ms));

    //Menutup File
    fclose(f1);
    fclose(f2);

    return 0;
}
