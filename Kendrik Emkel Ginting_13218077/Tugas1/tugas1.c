#include <stdio.h>
#include <string.h>
#define Name_Len 10
#define N_Max 5

typedef struct
    {
        char Nama[Name_Len];
        double Nilai;
        char Indeks;
    } data_mhs;

//prosedur mencari indeks

void GetIndex(double Nilai, char Indeks)
{
    {
        if (Nilai >= 80)
        {
            Indeks = 'A';
        }
        else if (Nilai >= 70)
        {
            Indeks = 'B';
        }
        else if (Nilai > 60)
        {
            Indeks = 'C';
        }
        else
        {
            Indeks = 'D';
        }
    }
}

void Statistics(data_mhs data[])
{
    int i;
    double max = 0, min = 0, sum = 0, avg = 0;
    char NamaMax[Name_Len], NamaMin[Name_Len];

    for (i = 0; i < N_Max; i++)
    {
        sum = sum + data[i].Nilai;
        if(data[i].Nilai >= max)
        {
            max = data[i].Nilai;
            min = min;
        }
        else
        {
            max = max;
            min = data[i].Nilai;
        }
    }
    printf("Nilai tertinggi adalah %2.2f dengan siswa bernama:\n", max);
    for (i = 0; i < N_Max; i++)
    {
        if (data[i].Nilai == max)
        {
            printf("%s\n", data[i].Nama);
        }
    }

    printf("Nilai terendah adalah %2.2f dengan siswa bernama:\n", min);
    for (i = 0; i < N_Max; i++)
    {
        if (data[i].Nilai == min)
        {
            printf("%s\n", data[i].Nama);
        }
    }

    avg = sum/N_Max;
    
    printf("Nilai rata-rata adalah %2.2f.\n", avg);
}

void StatMod(char indeks)
{
    int countA = 0, countB = 0, countC = 0 , countD = 0, i;
    char modus;
    for ( i = 0; i < N_Max; i++)
    {
        if (indeks == 'A')
        {
            countA++;
        }
        else if (indeks == 'B')
        {
            countB++;
        }
        else if (indeks == 'C')
        {
            countC++;
        }
        else if (indeks == 'D')
        {
            countD++;
        }
    }

    if ((countA >= countB) && (countA >= countC) && (countA >= countD))
    {
        modus = 'A';
    }
    else if ((countB >= countA) && (countB >= countC) && (countB >= countD))
    {
        modus = 'B';
    }
    else if ((countC >= countB) && (countC >= countA) && (countC >= countD))
    {
        modus = 'C';
    }
    else if ((countD >= countB) && (countD >= countA) && (countD >= countA))
    {
        modus = 'D';
    }
    printf("Modus dari indeks dari kelima siswa tersebut adalah %c.\n", modus);
}

int main(void)
{
    int i, countA, countB, countC, countD;
    char modus;

    data_mhs data[N_Max];
    strcpy(data[0].Nama, "Mawar");
    strcpy(data[1].Nama, "Melati");
    strcpy(data[2].Nama, "Wisteria");
    strcpy(data[3].Nama, "Carnation");
    strcpy(data[4].Nama, "Lili");

    data[0].Nilai = 67;
    data[1].Nilai = 85;
    data[2].Nilai = 85;
    data[3].Nilai = 70;
    data[4].Nilai = 60;

    for( i = 0; i < N_Max; i++)
    {
        GetIndex(data[i].Nilai, data[i].Indeks);
    }
        
    // Max, Min, Rata2
    Statistics(data);
    
    // Modus
    StatMod(data[i].Indeks);

    return 0;
}
