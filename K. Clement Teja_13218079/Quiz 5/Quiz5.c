/******************************************************************************

Soal :
Menggunakan struct untuk membuat tabel nilai
Menghitung rata-rata nilai dan sort data berdasarkan nilai

K. Clement Teja
13218079

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Sheet
{   int No;
    int Nim;
    char Nama[20];
    int Nilai;   
};

void main()
{   struct Sheet Sheet1[10];
    struct Sheet SheetTemp;

    int SumNilai = 0;
    float Rata2Nilai = 0;
    int i = 0, j = 0;

    FILE *fp1;
    FILE *fp2;

/* Proses dan Display */
    srand(time(0));

    fp1 = fopen("datasheet.txt", "w+");
    fp2 = fopen("sorted_datasheet.txt", "w+");

    // Proses pengisian data pada Sheet1 dan display pada file1
    strcpy(Sheet1[0].Nama, "Clement I");
    strcpy(Sheet1[1].Nama, "Clement II");
    strcpy(Sheet1[2].Nama, "Clement III");
    strcpy(Sheet1[3].Nama, "Clement IV");
    strcpy(Sheet1[4].Nama, "Clement V");
    strcpy(Sheet1[5].Nama, "Clement VI");
    strcpy(Sheet1[6].Nama, "Clement VII");
    strcpy(Sheet1[7].Nama, "Clement VIII");
    strcpy(Sheet1[8].Nama, "Clement XI");
    strcpy(Sheet1[9].Nama, "Clement X");

    for (i = 0; i < 10; ++i)
    {
        Sheet1[i].No = i + 1;
        Sheet1[i].Nim = i + 13250000;
        Sheet1[i].Nilai= rand() % 101; 
        SumNilai += Sheet1[i].Nilai;
        fprintf(fp1, "%d,%d,%s,%d\n", Sheet1[i].No, Sheet1[i].Nim, Sheet1[i].Nama, Sheet1[i].Nilai); 
    }
    
    // Proses menghitung rata-rata nilai dan display pada file1
    Rata2Nilai = ((float) SumNilai) / 2;
    fprintf(fp1, "\nRata-rata nilai : %.2f", Rata2Nilai); 

    fclose(fp1);

    // Proses penyortiran data (bubble sort)
     for (i = 0; i < 10-1; ++i)
     {
        for (j = 0; j < 10-i-1; ++j)
        {
            if (Sheet1[j].Nilai <= Sheet1[j+1].Nilai)
            {
                SheetTemp = Sheet1[j];
                Sheet1[j] = Sheet1[j+1];  
                Sheet1[j+1] = SheetTemp;
            } 
        }
     }   

    // Display data tersortir pada file2
    for(i = 0; i < 10; i++)
    {
        Sheet1[i].No = i + 1;
        fprintf(fp2, "%d,%d,%s,%d\n", Sheet1[i].No, Sheet1[i].Nim, Sheet1[i].Nama, Sheet1[i].Nilai); 
    }

    // Display rata-rata nilai pada file2
    fprintf(fp2, "\nRata-rata nilai : %.2f", Rata2Nilai); 
    
    fclose(fp2);
}