#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data_nilai
{
    
    int nim;
    char nama[100];
    int nilai;
    
} data_nilai;

int main()
{   
    int i, j;
    float total;
    float avg;
    int nilai;
    struct data_nilai data[30];
    struct data_nilai temp;

    total = 0;

    strcpy(data[0].nama, "Haydn");
    data[0].nim = 18318001;

    strcpy(data[1].nama, "Tchaikovsky");
    data[1].nim = 18318002;

    strcpy(data[2].nama, "Mozart");
    data[2].nim = 18318003;

    strcpy(data[3].nama, "Chopin");
    data[3].nim = 18318004;

    strcpy(data[4].nama, "Mendelsshon");
    data[4].nim = 18318005;

    strcpy(data[5].nama, "Charles Dickens");
    data[5].nim = 18318006;

    strcpy(data[6].nama, "Jane Austen");
    data[6].nim = 18318007;

    strcpy(data[7].nama, "Conan Doyle");
    data[7].nim = 18318008;

    strcpy(data[8].nama, "Mark Twain");
    data[8].nim = 18318009;

    strcpy(data[9].nama, "F. Scott Fitzgerald");
    data[9].nim = 18318010;

    for(i=0; i<=9; i++)
    {
        data[i].nilai = rand() %50 + 50;
        total = data[i].nilai + total;
    
    }
    avg = total/10;
    

    FILE *data_nilai;
    FILE *data_urut;

    data_nilai = fopen("Data nilai belum terurut.txt", "w+");
    data_urut = fopen("Data nilai  terurut.txt", "w+");

    for(i=0; i<=9;i++)
    {
        fprintf(data_nilai, "%d. ",i+1);
        fprintf(data_nilai, "%s ", data[i].nama);
        fprintf(data_nilai, "%d ", data[i].nim);
        fprintf(data_nilai, "%d \n", data[i].nilai);
    }
    
    for(i=0; i<=9; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if(data[i].nilai<data[j].nilai)
            {
                temp = data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    for(i=0; i<=9; i++)
    {
        fprintf(data_urut, "%d. ",i+1);
        fprintf(data_urut, "%s ", data[i].nama);
        fprintf(data_urut, "%d ", data[i].nim);
        fprintf(data_urut, "%d \n", data[i].nilai);

    }
    
    fprintf(data_urut, "Nilai rata-rata adalah %f", avg);
    fclose(data_nilai);
    fclose(data_urut);

    
}