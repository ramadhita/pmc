#include <stdio.h>
#include <string.h>

struct siswa 
{
    char nama[100];
    int nilai;
    char index;
};
char buff[100];
char indexbuff;
int main() {
    struct siswa itb[5];
    strcpy(itb[0].nama,"Mawar");
    strcpy(itb[1].nama,"Melati");
    strcpy(itb[2].nama,"Wisteria");
    strcpy(itb[3].nama,"Carnation");
    strcpy(itb[4].nama,"Lili");

    itb[0].nilai=67;
    itb[1].nilai=85;
    itb[2].nilai=85;
    itb[3].nilai=70;
    itb[4].nilai=60;


    for (int i = 0; i < 5; i++)
    {
    if(itb[i].nilai<65)
    {
        indexbuff='D';
    } 
    else if ((itb[i].nilai>=65) && (itb[i].nilai<70))
    {
        indexbuff='C';
    }
    else if ((itb[i].nilai>=70) && (itb[i].nilai<85))
    {
        indexbuff='B';
    }
    else
    {
        indexbuff='A';
    }
    itb[i].index=indexbuff;
    };
    // itb[0].index='C';
    // itb[1].index='A';
    // itb[2].index='A';
    // itb[3].index='B';
    // itb[4].index='D';

    for (int i = 0; i < 5; i++)
    {
        printf("nama :%s , nilai : %d , index = %c \n",itb[i].nama,itb[i].nilai,itb[i].index);
    }
    int countA=0,countB=0,countC=0,countD=0;
    // cek modus
    for (int i = 0; i < 5; i++)
    {
        if (itb[i].index=='A')
        {
            countA++;
        } else 
        if (itb[i].index=='B')
        {
            countB++;
        } else 
        if (itb[i].index=='C')
        {
            countC++;
        } else 
        {
            countD++;

        }    
    }
    // printf("%d %d %d %d", countA,countB,countC,countD);
    int buff[4]={countA,countB,countC,countD};
    int max,min;
    max=countA;
    min=countA;

    for (int i = 0; i < 4; i++)
    {
        if ( max < buff[i])
        {
            max = buff[i];
        }
    }
    printf("modus : %d \n", max);

    // max 
    int maxnilai,minnilai;
    char maxnama[100],minnama[100];
    maxnilai = itb[0].nilai;
    minnilai = itb[0].nilai;
    for (int i = 1; i < 5; i++)
    {
        if(maxnilai< itb[i].nilai)
        {
            maxnilai=itb[i].nilai;
            strcpy(maxnama,itb[i].nama);
        }
        if(minnilai> itb[i].nilai)
        {
            minnilai=itb[i].nilai;
            strcpy(minnama,itb[i].nama);
        }
    }
    printf("max : %d , nama : %s \n",maxnilai,maxnama);
    printf("min : %d , nama : %s \n",minnilai,minnama);

    // mean 
    double mean;
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=itb[i].nilai;
        // printf("nilai : %d \n",sum);
    }
    // printf("sum : %d \n",sum);
    mean=((double)sum)/5;
    printf("mean : %.2lf \n",mean);
    // printf("%s \n",itb[0].nama);
    return 0;
}