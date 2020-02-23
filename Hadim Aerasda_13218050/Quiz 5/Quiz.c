#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Mahasiswa
{
    int no;
    char nama[20];
    int NIM;
    int nilai;
};
int i,j;

int main(){
    //Inisiasi
        FILE *fp;
        struct Mahasiswa data[10];
        struct Mahasiswa tmp;
        char *filename = "data.csv";
        double mean,sum;
        sum=0;

    //nomor
        data[0].no = 1;
        data[1].no = 2;
        data[2].no = 3;
        data[3].no = 4;
        data[4].no = 5;
        data[5].no = 6;
        data[6].no = 7;
        data[7].no = 8;
        data[8].no = 9;
        data[9].no = 10;
    //NIM
        data[0].NIM = 12345701;
        data[1].NIM = 12345702;
        data[2].NIM = 12345703;
        data[3].NIM = 12345704;
        data[4].NIM = 12345705;
        data[5].NIM = 12345706;
        data[6].NIM = 12345707;
        data[7].NIM = 12345708;
        data[8].NIM = 12345709;
        data[9].NIM = 12345709;
    //Nama
        strcpy(data[0].nama, "Bedu");
        strcpy(data[1].nama, "Bedul");
        strcpy(data[2].nama, "Cecep");
        strcpy(data[3].nama, "Asap");
        strcpy(data[4].nama, "Pandu");
        strcpy(data[5].nama, "Budi");
        strcpy(data[6].nama, "Kiki");
        strcpy(data[7].nama, "Thompson");
        strcpy(data[8].nama, "Albert");
        strcpy(data[9].nama, "Edison");
    //Nilai
        for (i = 0; i < 10; i++) { 
            data[i].nilai = (rand() % (100 - 50 + 1)) + 50;     
        }
    
    //Read File
        fp = fopen(filename, "w");
        if( fp == NULL ) {
            printf("%s: failed to open. \n", filename);
            return -1;
        } 
        else {
            printf("%s: opened in write mode.\n", filename);
        }
    //Write Data
        fprintf(fp,"Data belum diurut\n");
        fprintf(fp,"No,NIM,NAMA,NILAI\n");
        for (i = 0; i < 10; i++)
        {
            fprintf(fp,"%d,%d,%s,%d\n",data[i].no, data[i].NIM, data[i].nama, data[i].nilai);
            sum += data[i].nilai;
        }
        mean = (float)sum/10;
        fprintf(fp,"Rata-rata = %f",mean);
    //Sort data
        for (i = 0; i < 10; i++)                     //Loop for descending ordering
        {
            for (j = 0; j < 10; j++)             //Loop for comparing other values
            {
                if (data[j].nilai < data[i].nilai)                //Comparing other array elements
                {
                    tmp.nilai       = data[i].nilai;  //Using temporary variable for storing last value
                    tmp.NIM         = data[i].NIM;
                    strcpy(tmp.nama, data[i].nama);         
                    data[i].nilai   = data[j].nilai;            //replacing value
                    data[i].NIM     = data[j].NIM;
                    strcpy(data[i].nama, data[j].nama);
                    data[j].nilai   = tmp.nilai;                //storing last value
                    data[j].NIM   = tmp.NIM;
                    strcpy(data[j].nama, tmp.nama);
                }
            }
        }
    //Write Data 2
        fprintf(fp,"\n");
        fprintf(fp,"Data sudah diurut\n");
        fprintf(fp,"No,NIM,NAMA,NILAI\n");
        for (i = 0; i < 10; i++)
        {
            fprintf(fp,"%d,%d,%s,%d\n",data[i].no, data[i].NIM, data[i].nama, data[i].nilai);
            sum += data[i].nilai;
        }
    //close data
        if( !fclose(fp) ){
            printf("%s: closed successfully.\n", filename);
        }
return 0;
}
