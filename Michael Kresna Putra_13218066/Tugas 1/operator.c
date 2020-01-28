#include <stdio.h>
#include <string.h>
//Struct Student merupakan struct berisi object Nama, Nilai, dan Indeks
struct student
{

    char nama[15];
    char indeks;
    int nilai;
    
};

//Fungsi untuk menentukan indeks dari suatu input berupa nilai
char inputindeks(int idx)
{
    char indeks;
    if (idx >= 80)
    {
        indeks = 'A';
    }
    else if ((idx<80) && (idx>=70))
    {
        indeks = 'B';
    }
    else if (idx>60 && idx < 70)
    {
        indeks = 'C';
    }
    else
    {
        indeks = 'D';
    }
    return indeks;
}

//Procedure untuk menghitung dan memunculkan nilai rata-rata dengan input berupa array berukuran 5 yang berisi data dengan struct Student
void ratarata(struct student list[15])
{
    int x;
    double count, avg;
    count = 0.0;

    for (x=0; x<=4; x++){
        count = count + list[x].nilai;
    }

    avg = count / 5;
    printf("Rata-rata kelas tersebut : %f\n", avg);
}

//Procedure untuk menghitung dan memunculkan nilai maksimum dan minimum dengan input berupa array berukuran 5 yang berisi data dengan struct Student
void max_min(struct student list[15])
{
    //int x;
    int x, max, min;

    max = list[0].nilai;
    min = list[0].nilai;

    for(x=1;x<=4;x++){
        if(min > list[x].nilai){
            min = list[x].nilai;
        }
        if(max < list[x].nilai){
            max = list[x].nilai;
        }
    }

    for(x=0; x<=4; x++){
        if(list[x].nilai == min){
            printf("%d merupakan nilai terendah di kelas yang merupakan nilai dari %s\n",list[x].nilai, list[x].nama);
        }
    }
    for(x=0; x<=4; x++){
        if(list[x].nilai == max){
            printf("%d merupakan nilai tertinggi di kelas yang merupakan nilai dari %s\n",list[x].nilai, list[x].nama);
        }
    }

}
