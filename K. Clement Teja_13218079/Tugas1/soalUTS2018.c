/****************************************************************************************
Lat PMC 28/01/20
K. Clement Teja
13218079
- in : Nama, nilai, indeks
- out: modus, max, min, rata-rata
*****************************************************************************************/
 
#include <stdio.h>
#include <string.h>

struct student
{
    char nama[5][9];
    int nilai[5];
    char indeks[5];
};

int main(void)
{
    int i;
    int max = 0;
    int i_max;
    int min = 100;
    int i_min;
    int sum_nilai = 0;
    float ratarata;
    struct student s;

    /* s_1 specification */
    strcpy( s.nama[0], "Mawar");
    s.nilai[0] = 67;

    /* s_2 specification */
    strcpy( s.nama[1], "Melati");
    s.nilai[1] = 85;

    /* s_3 specification */
    strcpy( s.nama[2], "Wisteria");
    s.nilai[2] = 85;

    /* s_4 specification */
    strcpy( s.nama[3], "Carnation");
    s.nilai[3] = 70;

    /* s_5 specification */
    strcpy( s.nama[4], "Lili");
    s.nilai[4] = 60;

    for (int i = 0; i < 5; ++i)
    {
        if (s.nilai[i] >= 80)
        {
            s.indeks[i] = 'A';
        }
        else if (s.nilai[i] >= 70)
        {
            s.indeks[i] = 'B';
        }
        else if (s.nilai[i] >= 65)
        {
            s.indeks[i] = 'C';
        }
        else if (s.nilai[i] >= 60)
        {
            s.indeks[i] = 'D';
        }  
    }

    for (int i = 0; i < 5; ++i)
    {
        if (max < s.nilai[i])
        {
            max = s.nilai[i];
            i_max = i;
        }

        if (min > s.nilai[i])
        {
            min = s.nilai[i];
            i_min = i;
        }

        sum_nilai += s.nilai[i];
    }

    ratarata = sum_nilai / 5;

        printf("min : %s, %d\n", s.nama[i_min], min);  
        printf("max : %s, %d\n", s.nama[i_max], max);
        printf("rata-rata : %.2f", ratarata);
        return 0;
    }