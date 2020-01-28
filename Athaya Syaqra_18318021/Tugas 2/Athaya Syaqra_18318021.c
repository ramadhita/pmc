#include <stdio.h>
#include <math.h>
#include <string.h>

struct data{
    char nama[10];
    int nilai;
    char indeks;
};

char hitungindex(int a)
{
        if(a>=80)
        {
            return('A');
        }
        if((a>= 70) && (a< 80))
        {
            return('B');
        }
        if((a> 60) && (a< 70))
        {
            return('C');
        }
        if(a<= 60)
        {
            return('D');
        }
        return(0);
}

int main(void)
{
    struct data arr[5];

    strcpy(arr[0].nama, "Mawar");
    arr[0].nilai = 67;

    strcpy(arr[1].nama, "Melati");
    arr[1].nilai = 85;

    strcpy(arr[2].nama, "Wisteria");
    arr[2].nilai = 85;

    strcpy(arr[3].nama, "Carnation");
    arr[3].nilai = 70;

    strcpy(arr[4].nama, "Lili");
    arr[4].nilai = 60;

    int i;
    int max = arr[0].nilai;
    int min = arr[0].nilai;
    float sum;
    float rata;
    char nama_min[10];
    char nama_max[10];

    for(i=0; i<=4; i++)
    {
        if(arr[i].nilai>max) {
            max = arr[i].nilai;
            strcpy(nama_max, arr[i].nama);
        } 
        if(arr[i].nilai<min) {
            min = arr[i].nilai;
            strcpy(nama_min, arr[i].nama);
        }
        sum += arr[i].nilai;
    }
    
    rata = sum/5.0;
    i=0;

    for(i=0; i<=4; i++)
    {
        arr[i].indeks =  hitungindex(arr[i].nilai);
        printf("%s %i %c\n", arr[i].nama, arr[i].nilai, arr[i].indeks);
    }

    printf("Nilai minimum: ");
    printf("%d ", min);
    printf(" (%s)\n", nama_min);
    printf("Nilai maksimum: ");
    printf("%d ", max);
    printf(" (%s)\n", nama_max);
    printf("Nilai rata-rata: ");
    printf("%.2f\n", rata);
    return(0);
}