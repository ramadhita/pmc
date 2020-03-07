/*  Nama            : Rizki Habibi Alamsyah
    NIM             : 13218080
    Kelas           : K-02
    Hari/Tanggal    : Selasa/3 Maret 2020
    Deskripsi       : Pencerminan isi dari suatu matriks terhadap sumbu X dan Y
*/

#include<stdio.h>

/*Prosedur untuk mengisi nilai matriks dengan nilai random dari -10 sampai 10*/
void random_matrix(int A[10][10])
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
             A[i][j]=rand()%20-10;
        }
    }
}

/*Prosedur untuk mencetak/menampilkan matriks*/
void print_matrix(int A[10][10])
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
             printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}

/*Prosedur untuk membuat 2 bilangan saling bertukar nilai*/
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

/*Program Utama*/
int main()
{
    /*Deklarasi Variabel*/
    int A[10][10],i,j,n;

    /*Mengisi matriks dengan angka acak di antara -10 dan 10*/
    random_matrix(A);

    /*Cetak matriks awal A*/
    print_matrix(A);
    printf("\n");

    /*Proses pencerminan terhadap sumbu X dan Y*/
    for(i=0;i<5;i++)
    {
        n=i+1;
        for(j=n;j<10-n;j++)
        {
            swap(&A[i][j],&A[9-i][j]);  //Cerminkan terhadap sumbu X
            swap(&A[j][i],&A[j][9-i]);  //Cerminkan terhadap sumbu Y
        }
    }

    /*Cetak matriks A setelah dicerminkan*/
    print_matrix(A);

    return 0;
}
