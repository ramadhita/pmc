//Kuis 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MhsMax 20
#define Name_Len 30

typedef struct
    {
        int NIM;
        char Nama[Name_Len];
        int Nilai;
    } data_mhs;

void swap(data_mhs *x, data_mhs *y) 
{ 
    data_mhs temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void bubbleSort(data_mhs dataMhs[]) 
{ 
   int i, j; 
   for (i = 0; i < MhsMax-1; i++)          
       for (j = 0; j < MhsMax-i-1; j++)  
           if (dataMhs[j].Nilai < dataMhs[j+1].Nilai) 
              swap(&dataMhs[j], &dataMhs[j+1]); 
} 

int main()
{
    int i, sum=0;
    float avg;
    FILE *outfile;
    char nama[MhsMax][Name_Len] = {"Agus", "Hidayat", "Irvan", "Hakim", "Lukman", "Lukas", "Markus", "Akbar","Agung", "Oktavianus","Satria", "Reza", "Christian", "Muhammad", "Gandhi", "Daud", "Baskara","William", "Munir", "John"};
    data_mhs Mahasiswa[MhsMax];
    srand(time(NULL));

    for ( i = 0; i < MhsMax; i++)
    {
        Mahasiswa[i].NIM = 13218000+i;
        strcpy(Mahasiswa[i].Nama, nama[i]);
        Mahasiswa[i].Nilai = (50 + rand()%51);
    }

    //Hitung rata-rata
    for ( i = 0; i < MhsMax; i++)
    {
        sum += Mahasiswa[i].Nilai;
    }
    avg = sum/MhsMax;

    //Print
    outfile = fopen("unsorted.csv", "w");
    printf("-------- UNSORTED --------\n");
    printf("NO, Nama, NIM, Nilai\n");
    fprintf(outfile, "NO, Nama, NIM, Nilai\n");
    for ( i = 0; i < MhsMax; i++)
    {
        printf("%2d, %s, %d, %d\n", (i+1), Mahasiswa[i].Nama, Mahasiswa[i].NIM, Mahasiswa[i].Nilai);
        fprintf(outfile, "%d, %s, %d, %d\n", (i+1), Mahasiswa[i].Nama, Mahasiswa[i].NIM, Mahasiswa[i].Nilai);
    }
    printf("Rata-rata = %.2f\n\n", avg);
    fprintf(outfile, "Rata-rata = %.2f\n", avg);
    fclose(outfile);

    //Sorting
    bubbleSort(Mahasiswa);

    // print sorted
    outfile = fopen("sorted.csv", "w");
    printf("-------- SORTED --------\n");
    printf("NO, Nama, NIM, Nilai\n");
    fprintf(outfile, "NO, Nama, NIM, Nilai\n");
    for ( i = 0; i < MhsMax; i++)
    {
        printf("%2d, %s, %d, %d\n", (i+1), Mahasiswa[i].Nama, Mahasiswa[i].NIM, Mahasiswa[i].Nilai);
        fprintf(outfile, "%d, %s, %d, %d\n", (i+1), Mahasiswa[i].Nama, Mahasiswa[i].NIM, Mahasiswa[i].Nilai);
    }
    printf("Rata-rata = %.2f\n", avg);
    fprintf(outfile, "Rata-rata = %.2f\n", avg);
    fclose(outfile);

    return 0;
}

