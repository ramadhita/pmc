#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <string.h>

typedef struct student
{
    int no;
    char nama[30];
    int nim;
    int nilai;
} std;

int random(int min, int max){
    int dom;
    dom = ( rand() / ( RAND_MAX/(max-min+1) + 1) ) + min;
    return dom;
}

int main() {
    int i, j, temp, nomor;
    char name[30];
    float sum=0;
    float mean;
    struct student arr[10];
    char nama_max[10], nama_min[10], modus;

    FILE *sort;
    sort = fopen("sortingnilai.csv","w+"); 
    FILE *unsort;
    unsort = fopen("unsortingnilai.csv","w+"); 

    strcpy(arr[0].nama,"Space Baby");
    strcpy(arr[1].nama,"ferret");
    strcpy(arr[2].nama,"flying broom");
    strcpy(arr[3].nama,"commander lin");
    strcpy(arr[4].nama,"engineer 001");
    strcpy(arr[5].nama,"zhan lu");
    strcpy(arr[6].nama,"Dante the dino");
    strcpy(arr[7].nama,"crying rats");
    strcpy(arr[8].nama,"chang geng best son");
    strcpy(arr[9].nama,"nine..?");

    arr[0].nim = 13218070;
    arr[1].nim = 13218071;
    arr[2].nim = 13218072;
    arr[3].nim = 13218073;
    arr[4].nim = 13218074;
    arr[5].nim = 13218075;
    arr[6].nim = 13218076;
    arr[7].nim = 13218077;
    arr[8].nim = 13218078;
    arr[9].nim = 13218079;

    for (i = 0; i<10; i++){
        arr[i].nilai = random(50,100);
        sum = sum + arr[i].nilai;
    }
    
    mean = sum/10;

    //data sebelum di sort
    fprintf(unsort,"No.;NIM;Nama;Nilai\n"); 
    for (i = 0; i < 10; ++i){
        arr[i].no = i+1;
        fprintf(unsort,"%d;%d;%s;%d\n",arr[i].no, arr[i].nim, arr[i].nama, arr[i].nilai);   
    }  
    fprintf(unsort, "\nNilai rata-rata mahasiswa adalah: %f\n",mean); 
    fprintf(unsort, "\nData belum di sort."); 

    //data setelah di sort
    //sorting
    for (i = 0; i < 10; ++i){
        for (j = i + 1; j < 10; ++j){
            if (arr[i].nilai > arr[j].nilai){
                temp = arr[i].nilai;
                arr[i].nilai = arr[j].nilai;
                arr[j].nilai = temp;

                strcpy(name,arr[i].nama);
                strcpy(arr[i].nama,arr[j].nama);
                strcpy(arr[j].nama,name);

                nomor = arr[i].nim;
                arr[i].nim = arr[j].nim;
                arr[j].nim = nomor;
            }
        }
    }  

    fprintf(sort,"No.;NIM;Nama;Nilai\n"); 
    for (i = 0; i < 10; ++i){
        arr[i].no = i+1;
        fprintf(sort,"%d;%d;%s;%d\n",arr[i].no, arr[i].nim, arr[i].nama, arr[i].nilai);
    }  
    fprintf(sort, "\nNilai rata-rata mahasiswa adalah: %f\n",mean); 
    fprintf(sort, "\nData sudah di sort.");

    return 0;
}