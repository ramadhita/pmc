#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <string.h>

typedef struct student
{
    int nilai;
    char indeks;
    char nama[10];
} std;

void checkIndeks(int nilai, char *indeks)
{
    if (nilai >= 85)
        *indeks = 'A';
    else if (nilai >= 70)
        *indeks = 'B';
    else if (nilai >= 65)
        *indeks = 'C';
    else if (nilai >= 50)
        *indeks = 'D';
};

char checkModus(std data[5])
{
    int i=0;
    int abcd[4] = {0,0,0,0};

    while (i < 5)
    {
        if (data[i].indeks == 'A')
            abcd[0]++;
        else if (data[i].indeks == 'B')
            abcd[1]++;
        else if (data[i].indeks == 'C')
            abcd[2]++;
        else if (data[i].indeks == 'D')
            abcd[3]++;

        i++;
    }

    if (abcd[0] > abcd[1] && abcd[0] > abcd[2] && abcd[0] > abcd[3])
        return 'A';
    else if (abcd[1] > abcd[0] && abcd[1] > abcd[2] && abcd[1] > abcd[3])
        return 'B';
    else if (abcd[2] > abcd[0] && abcd[2] > abcd[1] && abcd[2] > abcd[3])
        return 'C';
    else if (abcd[3] > abcd[0] && abcd[3] > abcd[1] && abcd[3] > abcd[2])
        return 'D';
};

int main() {
    int min=100, max=0, i, j;
    float sum=0, mean;
    struct student arr[5];
    char nama_max[10], nama_min[10], modus;
    strcpy(arr[0].nama, "Mawar");
    strcpy(arr[1].nama,"Melati");
    strcpy(arr[2].nama, "Wisteria");
    strcpy(arr[3].nama,"Carnation");
    strcpy(arr[4].nama,"Lili");

    arr[0].nilai = 67;
    arr[1].nilai = 85;
    arr[2].nilai = 85;
    arr[3].nilai = 70;
    arr[4].nilai = 60;

    i = 0;
    while (i < 5)
    {
        if(arr[i].nilai > max)
            max = arr[i].nilai;
        if(arr[i].nilai < min)
            min = arr[i].nilai;
        
        sum = sum + arr[i].nilai;
        checkIndeks(arr[i].nilai, &arr[i].indeks);
        i++;
    }

    modus = checkModus(arr);
    mean = sum/5;

    j = 0;
    while (j < 5)
    {
        if (arr[j].nilai == max)
            strcpy(nama_max, arr[j].nama);
        if (arr[j].nilai == min)
            strcpy(nama_min, arr[j].nama);   
        j++;
    }  
    
    printf("Siswa dengan nilai tertinggi adalah %s dengan nilai: %d\n",nama_max,max);

    printf("Siswa dengan nilai terendah adalah %s dengan nilai: %d\n",nama_min,min);

    printf("Nilai rata-rata mahasiswa adalah: %.2f\n",mean); 

    printf("Modus dari indeks siswa adalah %c",modus); 

return 0;
}

