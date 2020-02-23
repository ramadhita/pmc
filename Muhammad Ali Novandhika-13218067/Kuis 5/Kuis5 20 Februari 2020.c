/* EL2008 Pemecahan Masalah dengan C 2019/2020
* Hari dan Tanggal : Kamis, 20 Februari 2020
* Nama (NIM) : Muhammad Ali Novandhika (13218067)
* Nama File : Kuis5 20 Februari 2020.c
* Deskripsi : Struct dan print ke dalam file
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include <time.h>
#include <string.h>

struct Mahasiswa {
    int NIM;
    char Nama[50];
    int Nilai;
};

float rata2 (struct Mahasiswa dd[9])
{
    float rata,sum;
    sum=0;
    for (int i=0;i<10;i++){
        sum+=dd[i].Nilai;
    }
    rata=sum/10;
    return rata;
}

int main( ) {
    struct Mahasiswa data[10];

    double rata_rata;
    strcpy( data[0].Nama, "Talitha");
    strcpy( data[1].Nama, "Maisha");
    strcpy( data[2].Nama, "Caroline");
    strcpy( data[3].Nama, "Anderson");
    strcpy( data[4].Nama, "Wallace");
    strcpy( data[5].Nama, "Mustafa");
    strcpy( data[6].Nama, "Alford");
    strcpy( data[7].Nama, "Patrick");
    strcpy( data[8].Nama, "Elin");
    strcpy( data[9].Nama, "Horne");

    for (int i = 0; i < 10; i++) {
        int nim = (rand() %
           (13218999 - 10000000 + 1)) + 10000000;
        data[i].NIM=nim;
    }


    for (int i = 0; i < 10; i++) {
        int num = (rand() %
           (100 - 50 + 1)) + 50;
        data[i].Nilai=num;
    }
    FILE *fp;
    //double hasil=0;
    fp = fopen("test1.txt","w+");
    fprintf (fp,"No       NIM          Nama          Nilai\n");
    for (int i=0;i<10;i++)
    {
        fprintf (fp,"%d     %d     %s     %d\n",i+1,data[i].NIM,data[i].Nama,data[i].Nilai);
    }
    fclose(fp);
    int temp,temp1;
    char temps[50];


    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            if (data[i].Nilai>data[j].Nilai)
            {
                temp=data[i].Nilai;
                data[i].Nilai=data[j].Nilai;
                data[j].Nilai=temp;

                strcpy(temps,data[i].Nama);
                strcpy(data[i].Nama,data[j].Nama);
                strcpy(data[j].Nama,temps);

                temp1=data[i].NIM;
                data[i].NIM=data[j].NIM;
                data[j].NIM=temp1;
            }
        }
    }


    FILE *fp2;
    //double hasil=0;
    fp2 = fopen("test2.txt","w+");
    fprintf (fp2,"No       NIM          Nama          Nilai\n");
    for (int i=0;i<10;i++)
    {
        fprintf (fp,"%d     %d     %s     %d\n",i+1,data[i].NIM,data[i].Nama,data[i].Nilai);
    }
    fclose(fp);

    rata_rata=rata2(data);
    printf("Rata-rata nilai adalah %f",rata_rata);
    return 0;
}


