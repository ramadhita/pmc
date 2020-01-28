#include <stdio.h>
#include <string.h>
#include <math.h>

int maks,min,i,j,locmax,locmin;

typedef struct file
{
    char* nama;
    int nilai;
    char* indeks;
}data[5];

/*
void printdata(data a)
{
    printf( "Nama Siswa : %s\n", a->nama );
    printf( "Nilai  : %d\n", a->nilai );
    printf( "Indeks : %s\n", a->indeks );
};*/

//Penentuan Indeks
char  Transkrip (int a)
{
    if ((0 <=a) && (a<=60))
        {
            return 'D';
        }
    else if ((60 <a) && (a<=65))
        {
            return 'C';
        }
    else if ((65 <a) && (a<=80))
        {
            return 'B';
        }
    else
        {
            return 'A';
        }
}

//Nilai Maksimum
int maxmin (char b,data a)
{
    maks = a[0].nilai;
    locmax = 0;
    min = a[0].nilai;
    locmin = 0;
    for (i = 0; i <= 4; i++)
    {
        if (b == 'b')
        {
            if (maks <= a[i].nilai)
            {
                maks = a[i].nilai;
                locmax = i;
            }
            else
            {
                maks = maks;
                locmax =locmax;
            }
        }
        else if (b == 'k')
        {
            if (min >= a[i].nilai)
            {
                min = a[i].nilai;
                locmin = i;
            }
            else
            {
                min = min;
                locmin =locmin;
            }
        }
    }
    if (b == 'k')
    {
        return locmin;
    }
    else
    {
        return locmax;
    }
    
    
}

/*
//Modus
char modus (data a)
{
    int count[5], modpos, modcount;
    modpos = 0;
    modcount = 0;
    for (i = 0; i <=4; i++)
    {
        if (a[i].indeks=='A')
        {
            count[0] += 1;
        }
        else if (a[i].indeks=='B')
        {
            count[1] += 1;
        }
        else if (a[i].indeks=='C')
        {
            count[2] += 1;
        }
        else
        {
            count[3] += 1;
        }
    }
    for (i = 0; i <=3; i++)
    {
        if (modcount <= count[i])
        {
            modcount = count[i];
            modpos = i;
        }
    }
    //Return
        if (modpos == 0)
        {
            return 'A';
        }
        else if (modpos == 1)
        {
            return 'B';
        }
        else if (modpos == 2)
        {
            return 'C';
        }
        else
        {
            return 'D';
        }
    
}
*/

//Nilai rata-rata
double mean (data a)
{
    double rata2,sum;
    rata2=0;sum=0;
    for (i = 0; i <= 4; i++)
    {
        sum = sum + a[i].nilai;
    }
    rata2 = sum/5;
    return rata2;
};


int main()
{
    struct file data[5];
    maks = 0; min = 100;
   //Data 1
    data[0].nama  = "Mawar";
    data[0].nilai = 67;
   //Data 2
    data[1].nama  = "Melati";
    data[1].nilai = 85;
   //Data 3
    data[2].nama  = "Wisteria";
    data[2].nilai = 85;
   //Data 4
    data[3].nama  = "Carnation";
    data[3].nilai = 70;
   //Data 5
    data[4].nama  = "Lili";
    data[4].nilai = 60;
    
   //Nilai Min
    printf("-----Nilai Min----- \n");
    printf("Nilai Min :%d \n",data[maxmin('k',data)].nilai);
    printf("Nama :%s \n", data[maxmin('k',data)].nama);
    printf("------------------ \n");
   //Nilai maks
    printf("-----Nilai Max----- \n");
    printf("Nilai Max :%d \n",data[maxmin('b',data)].nilai);
    printf("Nama :%s \n", data[maxmin('b',data)].nama);
    printf("------------------ \n");
   //average
    printf("Nilai Rata-rata : %lf \n", mean(data) );
    return 0;
}
