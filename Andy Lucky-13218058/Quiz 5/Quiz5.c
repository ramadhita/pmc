// Gunakan Struct; No. Nim, Nama, Nilai (random 50-100)
// Cari Rata", Sort Nilai tertinggi ke rendah

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



typedef struct Data
{
    /* data */
    int No, Nim, Nilai;
    char *Nama;
}Data;


int Randoms(int lower, int upper);
void swap(Data *a, Data *b);
void bubbleSort(Data arr[]);

int main(void)
{
    int size = 10, Nilai;
    char *Nama[]  = {"Andy",
                     "Luck",
                     "Latin",
                     "Megi",
                     "Lunlu",
                     "FE",
                     "Milanta",
                     "Do",
                     "RE",
                     "Mi"};
    double avg;
    FILE *fp;
    Data Tabel[10];

    fp = fopen("temp/Data_Out.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        /* code */
        Tabel[i].No =  i+1;
        Tabel[i].Nama = Nama[i];

        Tabel[i].Nim = Randoms(1000000, 9999999);
        Tabel[i].Nilai = Randoms(50, 100);
        
        fprintf(fp, "%d;%d;%s;%d \n", Tabel[i].No,
                Tabel[i].Nim,
                Tabel[i].Nama,
                Tabel[i].Nilai);
    }

    fprintf(fp, "\n");

    // Average
    Nilai = 0;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        Nilai+= Tabel[i].Nilai;
    }
    avg = Nilai/10;
    
    fprintf(fp, "Average = %4.2lf \n\n", avg);

    bubbleSort(Tabel);
    
    for (int i = 0; i < 10; i++)
    {
        /* code */
        fprintf(fp, "%d;%d;%s;%d \n", Tabel[i].No,
                Tabel[i].Nim,
                Tabel[i].Nama,
                Tabel[i].Nilai);
    }

    fclose(fp);
    return(0);
}


// Generates and prints 'count' random
// numbers in range [lower, upper].
int Randoms(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    return(num);
}

void swap(Data *a, Data *b)
{
    Data tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// A function to implement bubble sort
void bubbleSort(Data arr[])
{
    int i, j;
    //Sorting
    for (int i = 0; i < 10; i++)
    {
        // Last i elements are already in place
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j].Nilai < arr[j + 1].Nilai)
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}