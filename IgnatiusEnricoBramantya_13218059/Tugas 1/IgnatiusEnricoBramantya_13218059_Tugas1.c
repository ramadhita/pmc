//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Tugas 1 PMC EL2008
//Date  : Selasa, 28 Januari 2020

#include <stdio.h>	
#include <math.h>
#include <string.h>

struct ledger
{ 
char name[50]; 
int nilai; 
int nomor; 
char index[1]; 
int pin; 
};

int
main(void)
{
   
    struct ledger mhs[6];

    strcpy(mhs[1].name, "Mawar");
    strcpy(mhs[2].name, "Melati");
    strcpy(mhs[3].name, "Wisteria");
    strcpy(mhs[4].name, "Carnation");
    strcpy(mhs[5].name, "Lilis");

  

    mhs[1].nomor = 1;
    mhs[2].nomor = 2;
    mhs[3].nomor = 3;
    mhs[4].nomor = 4;
    mhs[5].nomor = 5;

    mhs[1].nilai = 67;
    mhs[2].nilai = 85;
    mhs[3].nilai = 85;
    mhs[4].nilai = 70;
    mhs[5].nilai = 60;


    strcpy(mhs[1].index, "C");
    strcpy(mhs[2].index, "A");
    strcpy(mhs[3].index, "A");
    strcpy(mhs[4].index, "B");
    strcpy(mhs[5].index, "D");


    // prcoess nyari nilai modus
 
    int counta, countb, countc, countd;
    int indexmax, indexmin;
    char modus[1], indexx[4];
    
    counta = 0;
    countb = 0;
    countc = 0;
    countd = 0;

    strcpy(indexx, "ABCD");
    printf("-----------MODUS NILAI---------------\n ");
    for (int i=1; i<=6; i++)
    {
        if (mhs[i].index[0] == indexx[0])
        {
            counta++;
        }
        else if (mhs[i].index[0] == indexx[1])
        {
            countb++;
        }
        else if (mhs[i].index[0] == indexx[2])
        {
            countc++;
        }
        else if (mhs[i].index[0] == indexx[3])
        {
            countd++;
        }
    }

    if ((counta >= countb) && (counta >= countc) && (counta >= countd))
    {
        strcpy(modus, "A");
    }
    else if ((countb >= counta) && (countb >= countc) && (countb >= countd)) 
    {
         strcpy(modus, "B");;
    }
    else if ((countc >= countb) && (countc >= counta) && (countc >= countd))
    {
         strcpy(modus, "C");;
    }
    else
    {
         strcpy(modus, "D");
    }
    

    printf("Modusnya : %s \n\n", modus);

    int max, min;
     // prcoess nyari nilai max min
    max = 67;
    min = 67;
    
    indexmax = 0;
    indexmin = 0;
    for (int k=1; k<=5; k+=1)
    {
       if (mhs[k].nilai >= max)
       {    max = mhs[k].nilai;
            indexmax = k;
       }
    }

    for (int l=1; l<=5; l++)
    {
       if (mhs[l].nilai < min)
       {    min = mhs[l].nilai;
           indexmin = l;
           }
     

    }
    printf("-----------NILAI MAX-----------------\n ");
    printf("Nilai Maks : %d\n ", max);
    printf("Nama Mahasiswa pemilik nilai : %s \n\n", mhs[indexmax].name);

    printf("-----------NILAI MIN-----------------\n ");
    printf("Nilai Minimum : %d\n ", min);
    printf("Nama Mahasiswa pemilik nilai : %s \n\n", mhs[indexmin].name);

    double rata2,total;
    int index;

    index = 0;
    for (int i=1; i<6; i++)
    {
       total = total + mhs[i].nilai;
       index++;
    }

    rata2 = total/index;
    printf("-----------NILAI RATA-RATA-----------\n ");
    printf("Rata - rata nilai 5 Siswa : %.2f ", rata2);

   
    return (0);
}
