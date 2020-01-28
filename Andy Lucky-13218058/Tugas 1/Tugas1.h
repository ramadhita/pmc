#include <string.h>

typedef struct Data
{
    char name[20];
    char indeks;
    int nilai;
} data;

struct ind
{
    char indeks;
    int total;
};

void swap(data *a, data *b);
void max_nilai(data mahasiswa[], int jumlah);
void min_nilai(data mahasiswa[], int jumlah);
void average(data mahasiswa[], int jumlah);
void modulus(data mahasiswa[], int jumlah, int total_indeks[], char char_indeks[]);

char ind(int nilai)
{
    if (nilai >= 90)
    {
        /* code */
        return ('A');
    }
    else if (nilai >= 80)
    {
        /* code */
        return ('B');
    }
    else if (nilai >= 70)
    {
        /* code */
        return ('C');
    }
    else if (nilai >= 60)
    {
        /* code */
        return ('D');
    }
    else
    {
        /* code */
        return ('E');
    }
}

data input(int n)
{
    /* data */
    data a;
    printf("    Nama mahasiswa %d    :  ", n);
    scanf(" %[^\n]%*c", &a.name);

    do
    {
        /* code */
        printf("    Nilai               :  ");
        scanf(" %d", &a.nilai);

    } while (a.nilai < 0 || a.nilai > 100);

    a.indeks = ind(a.nilai);
    printf("    Indeks              : %c \n", a.indeks);
    printf("\n");
    return (a);
};

// swap
void swap(data *a, data *b)
{
    data t = *a;
    *a = *b;
    *b = t;
}

void max_nilai(data mahasiswa[], int jumlah)
{
    int temp = mahasiswa[0].nilai, k = 0;
    printf("Nilai tertinggi = %d, dengan nama : ", temp);
    do
    {
        /* code */
        printf(" %s", mahasiswa[k].name);
        k += 1;

        if (mahasiswa[k].nilai < temp || jumlah == 1)
        {
            printf(". \n");
        }
        else
        {
            printf(", ");
        }

    } while (mahasiswa[k].nilai >= temp && k < (jumlah - 1));
}

void min_nilai(data mahasiswa[], int jumlah)
{
    int temp = mahasiswa[jumlah - 1].nilai, k = jumlah - 1;
    printf("Nilai terendah = %d, dengan nama : ", temp);
    do
    {
        /* code */
        printf(" %s", mahasiswa[k].name);
        k -= 1;

        if (mahasiswa[k].nilai > temp || jumlah == 1)
        {
            printf(". \n");
        }
        else
        {
            printf(", ");
        }

    } while (mahasiswa[k].nilai <= temp && k > 0);
}

void average(data mahasiswa[], int jumlah)
{
    double average = 0;
    for (int i = 0; i < jumlah; i++)
    {
        /* code */
        average += mahasiswa[i].nilai;
    }
    average /= jumlah;
    printf("Nilai rata-rata : %4.2lf \n", average);
}

void modulus(data mahasiswa[], int jumlah, int total_indeks[], char char_indeks[])
{
    for (int i = 0; i < jumlah; i++)
    {
        switch (mahasiswa[i].indeks)
        {
        case 'A':
            /* code */
            total_indeks[0] += 1;
            break;
        case 'B':
            /* code */
            total_indeks[1] += 1;
            break;
        case 'C':
            /* code */
            total_indeks[2] += 1;
            break;
        case 'D':
            /* code */
            total_indeks[3] += 1;
            break;
        case 'E':
            /* code */
            total_indeks[4] += 1;
            break;
        default:
            break;
        }
    }

    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < total_indeks[i])
        {
            max = total_indeks[i];
        }
    }

    printf("Nilai modulus dengan frekuensi %d, yaitu : ", max);
    for (int i = 0; i < 5; i++)
    {
        if (total_indeks[i] == max)
        {
            printf(" %c", char_indeks[i]);
        }
    }
}
// void data(struct data mahasiswa[5]){

//     /* data */
//     mahasiswa[0].name = "Mawar";
//     mahasiswa[0].nilai = 67;
//     mahasiswa[0].indeks = 'C';

//     mahasiswa[1].name = "Melati";
//     mahasiswa[1].nilai = 85;
//     mahasiswa[1].indeks = 'A';

//     mahasiswa[2].name = "Wisteria";
//     mahasiswa[2].nilai = 85;
//     mahasiswa[2].indeks = 'A';

//     mahasiswa[3].name = "Carnation";
//     mahasiswa[3].nilai = 70;
//     mahasiswa[3].indeks = 'B';

//     mahasiswa[4].name = "Lili";
//     mahasiswa[4].nilai = 60;
//     mahasiswa[4].indeks = 'D';
// };
//     };

// int maks = 0;
// for (int i = 0; i < 5; i++)
// {
//     if (maks < total_indeks[i])
//     {
//         maks = total_indeks[i];
//     }
// }

// printf("Indeks Modulus dengan total : %d adalah :", maks);

// for (int i = 0; i < 5; i++)
// {
//     if (maks = total_indeks[i])
//     {
//         printf(" %c", inde[i]);
//     }
// }