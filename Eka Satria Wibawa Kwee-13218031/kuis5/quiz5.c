#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef struct scoreData
{
    int no;
    int nim;
    char nama[20];
    float nilai;
} scoreDataType;

int main(){
    scoreDataType table[10];
    scoreDataType nice[10];
    scoreDataType sort[10];
    int i,j,loc;
    char name[20];
    float sum,avg,min;
    FILE *data;
    FILE *sorted;

    srand(time(0));
    for (i = 0;i<10;i++){
        table[i].no = i+1;
        table[i].nim = 13218001+i;
        table[i].nilai = (float)((rand()%(100+1-50))+50);
    }
    strcpy(table[0].nama,"Clement");
    strcpy(table[1].nama,"Claire");
    strcpy(table[2].nama,"Caleb");
    strcpy(table[3].nama,"Callie");
    strcpy(table[4].nama,"Clara");
    strcpy(table[5].nama,"Chase");
    strcpy(table[6].nama,"Cole");
    strcpy(table[7].nama,"Claude");
    strcpy(table[8].nama,"Clark");
    strcpy(table[9].nama,"Collin");

    data = fopen("data.csv","w");
    fprintf(data,"no,nim,nama,nilai\n");
    for (i = 0;i<10;i++){
        fprintf(data,"%d,%d,%s,%f\n", table[i].no,table[i].nim,table[i].nama,table[i].nilai);
    }
    fclose(data);

    for (i=0;i<10;i++){
        sum += table[i].nilai;
    }
    avg = sum/10;

    for(i = 0; i<10;i++){
        min = -1;
        loc = -1;
        for (j = 0;j<10;j++){
            //printf("sss %d",j);
            if(min < table[j].nilai){
                loc = j;
                min = table[j].nilai;
            }
        }
        //printf("asdasd %d %d \n",i,loc);
        sort[i].no = i+1;
        sort[i].nim = table[loc].nim;
        strcpy(sort[i].nama,table[loc].nama);
        sort[i].nilai = table[loc].nilai;
        table[loc].nilai = -1;
     }

    sorted = fopen("sorted.csv","w");
    fprintf(sorted,"no,nim,nama,nilai\n");
    for (i = 0;i<10;i++){
        fprintf(sorted,"%d,%d,%s,%f\n", sort[i].no,sort[i].nim,sort[i].nama,sort[i].nilai);
    }
    fprintf(sorted,"avg= %f",avg);
    fclose(sorted);
}