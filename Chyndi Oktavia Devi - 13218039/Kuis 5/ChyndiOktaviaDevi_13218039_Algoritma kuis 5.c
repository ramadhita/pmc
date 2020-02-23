//Nama : Chyndi Oktavia Devi
//NIM : 13218039


#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

struct Mahasiswa
{
      char Nama[10];
      int Nilai;
      int nim;
      float rata;

};

void main(){
    FILE *fp;
    fp=fopen("daftar.txt", "w");
    int i,j,k;
    float rata;
    int jumlah;

    struct Mahasiswa M[10], c;
    strcpy (M[0].Nama, "Mawar");
    M[0].nim = 1234561;

    strcpy (M[1].Nama, "Melati");
    M[1].nim = 1234562;

    strcpy (M[2].Nama, "Semuanya");
    M[2].nim = 1234563;

    strcpy (M[3].Nama, "Indah");
    M[3].nim = 1234564;

    strcpy (M[4].Nama, "Pelangi");
    M[4].nim = 1234565;

    strcpy (M[5].Nama, "Lala");
    M[5].nim = 1234566;

    strcpy (M[6].Nama, "Lili");
    M[6].nim = 1234567;

    strcpy (M[7].Nama, "Gigi");
    M[7].nim = 1234568;

    strcpy (M[8].Nama, "Anggun");
    M[8].nim = 1234569;

    strcpy (M[9].Nama, "Dirga");
    M[9].nim = 1234510;


    for(int i=0;i<10;i++){
        M[i].Nilai=(rand()%51)+50;
    }

    for(int i=0;i<10;i++){
        rata=rata+M[i].Nilai;

    }
    rata=rata/10;



    for (i=0;i<10;i++)
    {
        fprintf(fp, "%s, %d, %d \n", M[i].Nama, M[i].Nilai, M[i].nim);
    }

   fprintf(fp, "Rata-rata Nilai %.2f\n\n", rata);



   for(j=0;j<10;j++){
    for(k=0;k<10;k++){
        if(M[k].Nilai>M[k-1].Nilai){
            c=M[k];
            M[k]=M[k-1];
            M[k-1]=c;
        }
    }
   }

   fprintf(fp, "Data setelah diurutkan\n");
   for(i=0;i<10;i++){
        fprintf(fp,"%s, %d, %d\n", M[i].Nama, M[i].Nilai, M[i].nim);
   }

}

