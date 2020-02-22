/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct mahasiswa {
    int nim;
    char nama[10];
    int nilai;
};

void bubblesort(struct mahasiswa dataMahasiswa[10]);
double cariRata( struct mahasiswa dataMahasiswa[10] );

int main(void)
{
    FILE *fp;
    fp = fopen("C:/Users/Achmad Rifqy Pratama/Desktop/taskC/dataKuis5.txt", "w+");
    struct mahasiswa dataMahasiswa[10];

    strcpy(dataMahasiswa[0].nama , "Adi");
    dataMahasiswa[0].nim = 13218433;
    strcpy(dataMahasiswa[1].nama , "Budi");
    dataMahasiswa[1].nim = 13218434;
    strcpy(dataMahasiswa[2].nama , "Charli");
    dataMahasiswa[2].nim = 13218435;
    strcpy(dataMahasiswa[3].nama , "Cecep");
    dataMahasiswa[3].nim = 13218436;
    strcpy(dataMahasiswa[4].nama , "Lili");
    dataMahasiswa[4].nim = 13218437;
    strcpy(dataMahasiswa[5].nama , "Parto");
    dataMahasiswa[5].nim = 13218438;
    strcpy(dataMahasiswa[6].nama , "Royyan");
    dataMahasiswa[6].nim = 13218439;
    strcpy(dataMahasiswa[7].nama , "Roho");
    dataMahasiswa[7].nim = 13218440;
    strcpy(dataMahasiswa[8].nama , "Fajar");
    dataMahasiswa[8].nim = 13218441;
    strcpy(dataMahasiswa[9].nama , "Upin");
    dataMahasiswa[9].nim = 13218442;

    for (int i = 0; i<10; i++){
        dataMahasiswa[i].nilai = rand() % 50 + 50;
    }

    fprintf(fp, "\t--- DATA NILAI MAHASISWA SEBELUM DIURUTKAN ---\n");
    fprintf(fp,"\n\tNO.\tNIM\t\tNAMA\tNILAI \n");
    for (int i=0; i<10; i++) {
        fprintf(fp,"\t%d\t%d\t%s\t%d\n", i+1, dataMahasiswa[i].nim, dataMahasiswa[i].nama, dataMahasiswa[i].nilai);
    }

    fprintf(fp, "\n\t--- DATA NILAI MAHASISWA SETELAH DIURUTKAN ---\n");
    for(int i = 0; i<10; i++) {
        bubblesort(dataMahasiswa);
    }

    fprintf(fp,"\n\tNO.\tNIM\t\tNAMA\tNILAI \n");
    for (int i=0; i<10; i++) {
        fprintf(fp, "\t%d\t%d\t%s\t%d\n", i+1, dataMahasiswa[i].nim, dataMahasiswa[i].nama, dataMahasiswa[i].nilai);
    }

    fprintf(fp, "\n\tNilai rata-rata mahasiswa adalah %.3f \n", cariRata(dataMahasiswa));
    fclose(fp);
    return 0;
}

void bubblesort (struct mahasiswa dataMahasiswa[10]){
    int temp,i,j,tempn;
    char tempc[10];
    for(i=0;i<10;i++){
        for(j=0;j<9;j++){
            if(dataMahasiswa[j].nilai<dataMahasiswa[j+1].nilai){
                temp=dataMahasiswa[j].nilai;
                dataMahasiswa[j].nilai=dataMahasiswa[j+1].nilai;
                dataMahasiswa[j+1].nilai=temp;
                strcpy(tempc , dataMahasiswa[j].nama);
                strcpy(dataMahasiswa[j].nama , dataMahasiswa[j+1].nama);
                strcpy(dataMahasiswa[j+1].nama , tempc);
                tempn=dataMahasiswa[j].nim;
                dataMahasiswa[j].nim=dataMahasiswa[j+1].nim;
                dataMahasiswa[j+1].nim=tempn;
            }
        }
    }
}

double cariRata( struct mahasiswa dataMahasiswa[10] )
{
    int count = 0;
    int sum = 0;
    for (int i=0; i<10; i++) {
        sum = sum + dataMahasiswa[i].nilai;
        count++;
    }
    return (sum/count);
}


