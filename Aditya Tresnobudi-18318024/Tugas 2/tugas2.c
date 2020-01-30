#include<stdio.h>
#include<string.h>

typedef struct Data
{
    char Name[20];
    int Nilai;
    char Indeks;
}siswa[5];

char MakeIndex (int a)
{
    if (a >= 80)
    {
        printf("A");
    }
    else if ((a < 80) && (a >= 70))
    {
        printf("B");
    }
    else if ((a < 70) && (a >= 65))
    {
        printf("C");
    }
    else if ((a < 65) && (a >= 50))
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 1;
}

int besar(siswa b)
{
    int max = 0;
    for (int i = 0; i <= 4; i++)
   {
       if (b[i].Nilai >= max)
       {
           max = b[i].Nilai;
       }
   }
   return max;
}

int kecil(siswa c)
{
    int min = 100;
    for (int k = 0; k <= 4; k++)
   {
       if (c[k].Nilai <= min)
       {
           min = c[k].Nilai;
       }
   }
   return min;
}

float rata2(siswa d)
{
    int sum = 0;
    float avg;
    for (int j = 0; j <= 4; j++)
    {
        sum = sum + d[j].Nilai;
    }
    avg = sum/5.0;
    return avg;
}

int main()
{
    int sum = 0;
    float avg;

    struct Data siswa[5];
    strcpy(siswa[0].Name, "Mawar");
    siswa[0].Nilai = 67;
    strcpy(siswa[1].Name, "Melati");
    siswa[1].Nilai = 85;
    strcpy(siswa[2].Name, "Wisteria");
    siswa[2].Nilai = 85;
    strcpy(siswa[3].Name, "Carnation");
    siswa[3].Nilai = 70;
    strcpy(siswa[4].Name, "Lili");
    siswa[4].Nilai = 60;

    printf("%d\n", besar(siswa));
    for (int i = 0; i <= 4; i++)
    {
        if (besar(siswa) == siswa[i].Nilai)
        {
            printf("%s\n", siswa[i].Name);
        }
    }
    printf("%d\n", kecil(siswa));
    for (int j = 0; j <= 4; j++)
    {
        if (kecil(siswa) == siswa[j].Nilai)
        {
            printf("%s\n", siswa[j].Name);
        }
    }
    printf("%f\n", rata2(siswa));
    printf("Indeks seluruh mahasiswa : \n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%c\n", MakeIndex(siswa[i].Nilai));
    }
}
