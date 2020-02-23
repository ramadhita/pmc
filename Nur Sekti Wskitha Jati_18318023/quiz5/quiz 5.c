#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define x 18318001

typedef struct univ{
    int NIM;
    char nama[100];
    int nilai;
} mhs[10];

int main(){
    struct univ mhs[10];
    mhs[0].NIM = x;
    strcpy(mhs[0].nama,"thaya");
    mhs[1].NIM = x+1;
    strcpy(mhs[1].nama,"aby");
    mhs[2].NIM = x+2;
    strcpy(mhs[2].nama,"san");
    mhs[3].NIM = x+3;
    strcpy(mhs[3].nama,"fay");
    mhs[4].NIM = x+4;
    strcpy(mhs[4].nama,"fadia");
    mhs[5].NIM = x+5;
    strcpy(mhs[5].nama,"jeje");
    mhs[6].NIM = x+6;
    strcpy(mhs[6].nama,"maji");
    mhs[7].NIM = x+7;
    strcpy(mhs[7].nama,"rara");
    mhs[8].NIM = x+8;
    strcpy(mhs[8].nama,"melia");
    mhs[9].NIM = x+9;
    strcpy(mhs[9].nama,"nadhira");

    for (int i=0; i<10; i++){
        mhs[i].nilai = (rand()%50)+50;
    }

    float sum = 0.0;
    for (int i=0; i<10; i++){
        sum += (mhs[i].nilai)/1.0;
    }
    float rata = sum/10;

    FILE *fileku1;
    fileku1 = fopen("before.csv","w");
    for (int i=0; i<10; i++){
        fprintf(fileku1, "%d; %d; %s; %d\n", (i+1), mhs[i].NIM, mhs[i].nama, mhs[i].nilai);
    }
    fprintf(fileku1, "rata-ratanya %f", rata);
    fclose(fileku1);

    for (int i=0; i<9; i++){
        for (int j=0; j<(9-i); j++){
            if (mhs[j].nilai<mhs[j+1].nilai){
                struct univ temp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = temp;
            }
        }
    }


    FILE *fileku2;
    fileku2 = fopen("after.csv","w");
    for (int i=0; i<10; i++){
        int n = i+1;
        fprintf(fileku2, "%d; %d; %s; %d\n", n, mhs[i].NIM, mhs[i].nama, mhs[i].nilai);
    }
    fprintf(fileku2, "rata-ratanya %f", rata);
    fclose(fileku2);
}
