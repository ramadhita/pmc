//Memanggil library yang akan digunakan 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Mendeklarasikan tipe data yang digunakan untuk nama, nilai, dan indeks
*/
struct tabel
{
    char nama[100];
    int nim;
    int nilai;
    char indeks;
};

/*
Fungsi average berfungsi untuk mencari 
rata - rata dari seluruh nilai mahasiswa
*/
float average(struct tabel data[])
{
    float avg, total;
    avg = 0;
    total = 0;


    for (int j = 0; j < 5; j++)
    {
       total = total + data[j].nilai;
    }
    avg = (total/11);

    return avg;
}

/*
Fungsi dari sort untuk mengurutkan seluruh nilai 
yang dicantumkan pada program nilai mahasiswa dari 
yang terbesar hingga terkecil. Metode yang digunakan bubble sort
*/
void sort(struct tabel *data)
{
    FILE *fpa;
    int temp = 0;
    int temp_2 = 0;
    char temp_3[100];
    fpa = fopen("C:/Users/Raka/Desktop/Quiz/data_after.txt", "w");

    int i = 0,j = 0;

    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= (10 - i - 1); j++)
        {
            if (data[j].nilai < data[j + 1].nilai)
            {
                temp = data[j].nilai;
                data[j].nilai = data[j + 1].nilai;
                data[j + 1].nilai = temp;

                temp_2 = data[j].nim;
                data[j].nim = data[j + 1].nim;
                data[j + 1].nim = temp_2;

                strcpy(temp_3, data[j].nama);
                strcpy(data[j].nama, data[j + 1].nama);
                strcpy(data[j + 1].nama, temp_3);
            }
        }
    }

    printf("\nSorted\n");
    for (i = 0; i <= 10; i++)
    {
        fprintf(fpa,"%d\n", data[i].nilai);
        fprintf(fpa, "%d\n", data[i].nim);
        fprintf(fpa, "%s\n", data[i].nama);

    }
}

int main() 
{
    FILE *fp;

    fp = fopen("C:/Users/Raka/Desktop/Quiz/data.txt", "w");
    
    /*Dibawah ini merupakan deklarasi tipe data dan 
    nilai awal dari variabel yang akan digunakan 
    pada program */
    float avg, total;

    /*
    Dibawah ini merupakan pemasukkan 
    nilai yang di assign pada program 
    pada indeks struct masing - masing
    */
    struct tabel data[11];

    data[0].nim = 13218010;
    strcpy(data[0].nama, "Raka");
    data[0].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[0].nim);
    fprintf(fp, "%s\n", data[0].nama);
    fprintf(fp, "%d\n\n", data[0].nilai);

    printf("%d\n", data[0].nim);
    printf("%s\n", data[0].nama);
    printf("%d\n\n", data[0].nilai);

    data[1].nim = 13218011;
    strcpy(data[1].nama, "Lele");
    data[1].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[1].nim);
    fprintf(fp, "%s\n", data[1].nama);
    fprintf(fp, "%d\n\n", data[1].nilai);

    printf("%d\n", data[1].nim);
    printf("%s\n", data[1].nama);
    printf("%d\n\n", data[1].nilai);

    data[2].nim = 13218012;
    strcpy(data[2].nama, "Augee");
    data[2].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[2].nim);
    fprintf(fp, "%s\n", data[2].nama);
    fprintf(fp, "%d\n\n", data[2].nilai);

    printf("%d\n", data[2].nim);
    printf("%s\n", data[2].nama);
    printf("%d\n\n", data[2].nilai);

    data[3].nim = 13218013;
    strcpy(data[3].nama, "Jaki");
    data[3].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[3].nim);
    fprintf(fp, "%s\n", data[3].nama);
    fprintf(fp, "%d\n\n", data[3].nilai);

    printf("%d\n", data[3].nim);
    printf("%s\n", data[3].nama);
    printf("%d\n\n", data[3].nilai);

    data[4].nim = 13218014;
    strcpy(data[4].nama, "Mujair");
    data[4].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[4].nim);
    fprintf(fp, "%s\n", data[4].nama);
    fprintf(fp, "%d\n\n", data[4].nilai);

    printf("%d\n", data[4].nim);
    printf("%s\n", data[4].nama);
    printf("%d\n\n", data[4].nilai);
    
    data[5].nim = 13218015;
    strcpy(data[5].nama, "Patin");
    data[5].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[5].nim);
    fprintf(fp, "%s\n", data[5].nama);
    fprintf(fp, "%d\n\n", data[5].nilai);

    printf("%d\n", data[5].nim);
    printf("%s\n", data[5].nama);
    printf("%d\n\n", data[5].nilai);

    data[6].nim = 13218016;
    strcpy(data[6].nama, "Jahe");
    data[6].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[6].nim);
    fprintf(fp, "%s\n", data[6].nama);
    fprintf(fp, "%d\n\n", data[6].nilai);

    printf("%d\n", data[6].nim);
    printf("%s\n", data[6].nama);
    printf("%d\n\n", data[6].nilai);

    data[7].nim = 13218017;
    strcpy(data[7].nama, "tiga");
    data[7].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[7].nim);
    fprintf(fp, "%s\n", data[7].nama);
    fprintf(fp, "%d\n\n", data[7].nilai);

    printf("%d\n", data[7].nim);
    printf("%s\n", data[7].nama);
    printf("%d\n\n", data[7].nilai);

    data[8].nim = 13218018;
    strcpy(data[8].nama, "ambang");
    data[8].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[8].nim);
    fprintf(fp, "%s\n", data[8].nama);
    fprintf(fp, "%d\n\n", data[8].nilai);

    printf("%d\n", data[8].nim);
    printf("%s\n", data[8].nama);
    printf("%d\n\n", data[8].nilai);

    data[9].nim = 13218019;
    strcpy(data[9].nama, "sungai");
    data[9].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[9].nim);
    fprintf(fp, "%s\n", data[9].nama);
    fprintf(fp, "%d\n\n", data[9].nilai);

    printf("%d\n", data[9].nim);
    printf("%s\n", data[9].nama);
    printf("%d\n\n", data[9].nilai);

    data[10].nim = 13218020;
    strcpy(data[10].nama, "teluk");
    data[10].nilai = ((rand() % 50) + 50);

    fprintf(fp, "%d\n", data[10].nim);
    fprintf(fp, "%s\n", data[10].nama);
    fprintf(fp, "%d\n\n", data[10].nilai);

    printf("%d\n", data[10].nim);
    printf("%s\n", data[10].nama);
    printf("%d\n\n", data[10].nilai);

    avg = average(data); //Memanggil nilai fungsi rata-rata

    sort(data);
    fprintf(fp, "average : %d\n", avg);

    printf("Rata - rata : %.2f \n", avg);

    return 0;
}