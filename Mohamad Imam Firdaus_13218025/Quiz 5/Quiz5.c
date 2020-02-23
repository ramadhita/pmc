#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int no;
    char nama[20];
    int nim;
    int nilai;
} tabelcolumn;

int main(void)
{
    srand(time(0));
    tabelcolumn mahasiswa[10];
    tabelcolumn mahasiswa_backup[10];
    int i;
    int nim, nilai;
    char nama[20];
    float mean;

    // input
    for(i =0; i<10;i++){
        scanf("%s %d", &nama, &nim);
        mahasiswa[i].no = i + 1;
        mahasiswa[i].nim = nim;
        strcpy(mahasiswa[i].nama, nama);
        mahasiswa[i].nilai = (rand() % 51 + 50);
    }
    
    //copy input
    for(i =0; i<10;i++){
        mahasiswa_backup[i].no = mahasiswa[i].no;
        mahasiswa_backup[i].nim = mahasiswa[i].nim;
        strcpy(mahasiswa_backup[i].nama, mahasiswa[i].nama);
        mahasiswa_backup[i].nilai = mahasiswa[i].nilai;
    }

    // calculate
    // mean
    for(i =0; i<10;i++){
        mean += mahasiswa[i].nilai;
    }
    mean /= 10;

    //sort
    int k;
    char sementara[20];
    int temp;
    for (k=0; k<9; k++){
        for (i = 0; i < 9; i++){
            if(mahasiswa[i].nilai < mahasiswa[i+1].nilai){
                // nama
                strcpy(sementara,mahasiswa[i+1].nama);
                strcpy(mahasiswa[i+1].nama,mahasiswa[i].nama);
                strcpy(mahasiswa[i].nama,sementara);
                // nim
                temp = mahasiswa[i+1].nim;
                mahasiswa[i+1].nim = mahasiswa[i].nim;
                mahasiswa[i].nim = temp;
                // nilai
                temp = mahasiswa[i+1].nilai;
                mahasiswa[i+1].nilai = mahasiswa[i].nilai;
                mahasiswa[i].nilai = temp;
            }
        }
    }

    // output
    FILE *fp;
    fp = fopen("mahasiswa.csv", "w+");
    fprintf(fp,"no,nama,nim,nilai\n");
    
    for(i =0; i<10;i++){
        fprintf(fp,"%d,%s,%d,%d\n", mahasiswa_backup[i].no, mahasiswa_backup[i].nama, mahasiswa_backup[i].nim, mahasiswa_backup[i].nilai);
    }
    
    fprintf(fp,"\n");

    for(i =0; i<10;i++){
        fprintf(fp,"%d,%s,%d,%d\n", mahasiswa[i].no, mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].nilai);
    }
    
    fprintf(fp,"\n");
    fprintf(fp,"%f",mean);

    fclose(fp);
}