#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

struct data{
    int no;
    int nim;
    char *nama;
    int nilai;
};

int main(){
    char no2[100];
    char nim2[100];
    char nilai2[100];
    char *nama2[100];
    char avg2[100];
    FILE *fp;
    fp = fopen("random.txt", "w+");
    int i;
    int j;
    int sum = 0;
    int tempnilai;
    int tempno;
    int tempnim;
    char *tempnama;
    double avg = 0;
    struct data siswa[10];
    siswa[0].nama = "Rudi";
    siswa[1].nama = "Audi";
    siswa[2].nama = "Judi";
    siswa[3].nama = "Jodi";
    siswa[4].nama = "Budi";
    siswa[5].nama = "Todi";
    siswa[6].nama = "Dodi";
    siswa[7].nama = "Kodi";
    siswa[8].nama = "Yodi";
    siswa[9].nama = "Yudi";
    srand(time(0));
    for (i=0; i<10; i++){
        siswa[i].no = i+1;
        siswa[i].nim = 1321800+i+1;
        siswa[i].nilai = rand() % 50;
        if (siswa[i].nilai < 50){
            siswa[i].nilai += 50;
        }
        sum += siswa[i].nilai;
        fprintf(fp, "%d  %d  %s  %d\n", siswa[i].no, siswa[i].nim, siswa[i].nama, siswa[i].nilai);
    }

    avg = sum/10;
    fprintf(fp, " %f \n", avg);
    printf("Rata-rata = %f\n", avg);
    for (i=0; i<9; i++){
        for (j=i+1; j<10; j++){
            if (siswa[i].nilai < siswa[j].nilai){
                tempnilai =  siswa[i].nilai;
                tempno = siswa[i].no;
                tempnama = siswa[i].nama;
                tempnim = siswa[i].nim;
                siswa[i].nilai = siswa[j].nilai;
                siswa[i].no = siswa[j].no;
                siswa[i].nama = siswa[j].nama;
                siswa[i].nim = siswa[j].nim;
                siswa[j].nilai = tempnilai;
                siswa[j].no = tempno;
                siswa[j].nama = tempnama;
                siswa[j].nim = tempnim;
                
            } 
            
        }
    }
    fprintf(fp, "\n");
    for (i=0; i<10; i++){
        fprintf(fp, "%d  %d  %s  %d\n", siswa[i].no, siswa[i].nim, siswa[i].nama, siswa[i].nilai);
        printf("No= %d  NIM= %d  Nama= %s  Nilai= %d  \n", siswa[i].no, siswa[i].nim, siswa[i].nama, siswa[i].nilai);
        //printf("%d", siswa[i])
    }
     fprintf(fp, "%f \n", avg);
    

}