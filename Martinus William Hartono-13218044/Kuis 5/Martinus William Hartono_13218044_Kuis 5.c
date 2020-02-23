//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   20 Februari 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 5

/*Program untuk mencari nilai rata-rata dan sorting serta menampilkan pada file eksternal*/


#include<stdio.h>
#include<string.h>

struct student
    {
        int no;
        char name[50];
        char nim[8];
        int nilai;
    };
struct student s[10], s_sorted[10];
int buff_arr_nilai[10];
int i,j,n;
double sum=0, average;

void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
void printToFile(FILE *fp, struct student x[10]);

int main(void)
{
    FILE *fp1;
    fp1 = fopen("unsorted.csv", "w+");

    FILE *fp2;
    fp2 = fopen("sorted.csv", "w+");

    for(i=0;i<10;i++)
    {
        s[i].no = (i+1);
    };

    strcpy(s[0].name, "Mawar");
    strcpy(s[1].name, "Melati");
    strcpy(s[2].name, "Wisteria");
    strcpy(s[3].name, "Carnation");
    strcpy(s[4].name, "Lili");
    strcpy(s[5].name, "Michael");
    strcpy(s[6].name, "Cedric");
    strcpy(s[7].name, "Enrico");
    strcpy(s[8].name, "Joshtein");
    strcpy(s[9].name, "Salomo");

    strcpy(s[0].nim, "13218001");
    strcpy(s[1].nim, "13218002");
    strcpy(s[2].nim, "13218003");
    strcpy(s[3].nim, "13218004");
    strcpy(s[4].nim, "13218005");
    strcpy(s[5].nim, "13218006");
    strcpy(s[6].nim, "13218007");
    strcpy(s[7].nim, "13218008");
    strcpy(s[8].nim, "13218009");
    strcpy(s[9].nim, "13218010");

    for(i=0;i<10;i=i+1)
    {
        s[i].nilai = ((rand() % 50)+50);
        sum = sum + s[i].nilai;
    };

    for(i=0;i<10;i++)
    {
        buff_arr_nilai[i] = s[i].nilai;
    };

    //SORT
    n = sizeof(buff_arr_nilai)/sizeof(buff_arr_nilai[0]);
    bubbleSort(buff_arr_nilai, 10);

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(buff_arr_nilai[i] == s[j].nilai)
            {
                s_sorted[i].no = s[i].no;
                strcpy(s_sorted[i].nim, s[j].nim);
                strcpy(s_sorted[i].name, s[j].name);
                s_sorted[i].nilai = s[j].nilai;
            };
        };
    };

    average = sum/10.0;
    printToFile(fp1, s);
    printToFile(fp2, s_sorted);

    fclose(fp1);
    fclose(fp2);

    return(0);
}

void printToFile(FILE *fp, struct student x[10])
{
    int i;
    for (i=0; i<10; i=i+1)
    {
        fprintf(fp, "%d,", x[i].no);
        fprintf(fp, "%s,", x[i].nim);
        fprintf(fp, "%s,", x[i].name);
        fprintf(fp, "%d\n", x[i].nilai);
    };
    fprintf(fp, "\nMean = %f", average);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)
           if (arr[j] < arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
