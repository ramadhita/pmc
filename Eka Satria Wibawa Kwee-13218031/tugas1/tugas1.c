#include <stdio.h>
#include <string.h>
/* Cari Modus Index, Max, Min, Rata-rata */

typedef struct Siswa
{
    char nama[15];
    int nilai;
    char index;
} siswa;

typedef struct valueLoc
{   
    int value;
    int loc;
}  valueloc;

void getIndex(int nilai, char *reut)
{
    if(nilai >= 85)
    {
        *reut = 'A';
    }
    else if (nilai >= 70)
    {
        *reut = 'B';
    }
    else if (nilai >= 67)
    {
        *reut = 'C';
    }
    else if (nilai >= 60)
    {
        *reut = 'D';
    }
};

void getMaxMinMean(siswa target[5], valueloc *max, valueloc *min, float *mean)
{
    valueloc tempMax,tempMin;
    int i;
    tempMax.value = -1;
    tempMin.value = 101;
    float tempMean,sum;
    sum = 0;
    for(i = 0;i <= 4;i++)
    {
        if(target[i].nilai >= tempMax.value)
        {
            tempMax.value = target[i].nilai;
            tempMax.loc = i;
        }
        if(target[i].nilai <= tempMin.value)
        {
            tempMin.value = target[i].nilai;
            tempMin.loc = i;
        }
        sum += target[i].nilai;
    }
    tempMean = sum/5;
    *max = tempMax;
    *min = tempMin;
    *mean = tempMean;
};

char getModus(siswa target[5])
{
    int cnt[4] = {0,0,0,0};
    int i;

    for(i = 0;i <= 4;i++)
    {
        if(target[i].index == 'A')
        {
            cnt[0]++;
        }
        else if(target[i].index == 'B')
        {
            cnt[1]++;
        }
        else if(target[i].index == 'C')
        {
            cnt[2]++;
        }
        else if(target[i].index == 'D')
        {
            cnt[3]++;
        }
    }
    if(cnt[0] > cnt[1] && cnt[0] > cnt[2] && cnt[0] > cnt[3])
        return 'A';
    if(cnt[1] > cnt[0] && cnt[1] > cnt[2] && cnt[1] > cnt[3])
        return 'B';
    if(cnt[2] > cnt[1] && cnt[2] > cnt[0] && cnt[2] > cnt[3])
        return 'C';
    if(cnt[3] > cnt[1] && cnt[3] > cnt[2] && cnt[3] > cnt[0])
        return 'D';
    
};

int main() 
{   
    siswa data[5];
    int i;
    char modus;
    valueloc max,min;
    float mean;
    strcpy(data[0].nama,"Mawar");
    strcpy(data[1].nama,"Melati");
    strcpy(data[2].nama,"Wisteria");
    strcpy(data[3].nama,"Carnation");
    strcpy(data[4].nama,"Lili");
    data[0].nilai = 67;
    data[1].nilai = 85;
    data[2].nilai = 85;
    data[3].nilai = 70;
    data[4].nilai = 60;

    for (i = 0;i<=4;i++)
    {
    getIndex(data[i].nilai, &data[i].index);
    }
    getMaxMinMean(data,&max,&min,&mean);
    modus = getModus(data);

printf("Nilai Maximum adalah = %d dengan nama :\n",max.value);
for (i = 0;i <= 4; i++)
{
    if(data[i].nilai == max.value)
    {
        printf("%s\n",data[i].nama);
    }
}
printf("\n");
printf("Nilai Minimum adalah = %d dengan nama :\n",min.value);
for (i = 0;i <= 4; i++)
{
    if(data[i].nilai == min.value)
    {
        printf("%s\n",data[i].nama);
    }
}
printf("\n");
printf("Rata-rata = %.2f\n",mean);
printf("Index terbanyak yang didapatkan adalah %c",modus);
    return 0;
}
