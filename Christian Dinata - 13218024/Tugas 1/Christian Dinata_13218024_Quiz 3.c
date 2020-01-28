#include<stdio.h>
#include<string.h>

struct data{
    char *nama;
    int nilai;
    char *index;
};

int max (struct data mahasiswa[5]){
    int i;
    int j;
    int maks = 0;
    int cntdblmaks = 1;

    for (i=0;i<5;i++){
        if (mahasiswa[i].nilai > maks){
            maks = mahasiswa[i].nilai;   
        }
        else if (mahasiswa[i].nilai == maks){
            cntdblmaks = cntdblmaks + 1; 
             
        }
        else{
            cntdblmaks = cntdblmaks;
            
        }
    }
    printf("Nilai Maksimum ada %d yaitu:", cntdblmaks);
    i = 1;
    for (j=0;j<5;j++){
        if (maks == mahasiswa[j].nilai){
            printf("%d(%s)", maks, mahasiswa[j].nama);
            while (i<cntdblmaks){
                printf(" dan ");
                i = i+1;
            }
        }       
    }
}     
int min (struct data mahasiswa[5]){

    int i;
    int cntdblmin = 1;
    int j;
    int minim = mahasiswa[0].nilai;
    for (i=1;i<5;i++){
        if (mahasiswa[i].nilai < minim){
            minim = mahasiswa[i].nilai;
        }
        else if (mahasiswa[i].nilai == minim){
            cntdblmin = cntdblmin + 1;
        }
        else{
            minim = minim;
        }
    }

    printf("Nilai Minimum ada %d yaitu:", cntdblmin);
    i = 1;
    for (j=0;j<5;j++){
        if (minim == mahasiswa[j].nilai){
            printf("%d(%s)", minim, mahasiswa[j].nama);
            while (i<cntdblmin){
                printf(" dan ");
                i = i+1;
            }
        }       
    }
}

float avg (struct data mahasiswa[5]){
    int i;
    float sum = 0;
    float avg = 0;
    float cnt = 0;
    for (i=0;i<5;i++){
        sum = sum + mahasiswa[i].nilai;
        cnt = cnt+1;
        avg = sum/cnt;
    }
    printf("Nilai Rata-rata:%f", avg);
}

char modus (struct data mahasiswa[5]){
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    char Modus;
    for (i=0;i<5;i++){
        if(mahasiswa[i].index = "A"){
            A = A + 1;
        }
        else if(mahasiswa[i].index = "B"){
            B = B + 1;
        }
        else if (mahasiswa[i].index = "C"){
            C = C + 1;
        }
        else if(mahasiswa[i].index = "D"){
            D = D + 1;
        }
    }
    if ((A>B) && (A>C) && (A>D)){
        Modus = 'A';
    }
    else if ((B>A) && (B>C) && (B>D)){
        Modus = 'B';
    }
    else if((C>A) && (C>B) && (C>D)){
        Modus = 'C';
    }
    else{
        Modus = 'D';
    }
    printf("Modus:%c", Modus);
}

int main(){
    char moduss;
    int rataan;
    int minimum;
    int maksimum;
    int i;
    struct data mahasiswa[5];
    mahasiswa[0].nama = "Mawar";
    mahasiswa[0].nilai = 67;

    mahasiswa[1].nama = "Melati";
    mahasiswa[1].nilai = 85;

    mahasiswa[2].nama = "Wisteria";
    mahasiswa[2].nilai = 85;

    mahasiswa[3].nama = "Carnation";
    mahasiswa[3].nilai = 70;

    mahasiswa[4].nama = "Lili";
    mahasiswa[4].nilai = 60;

    for (i=0;i<5;i++){
        if (mahasiswa[i].nilai>=80){
            mahasiswa[i].index = "A";
        }
        else if ((mahasiswa[i].nilai<80) && (mahasiswa[i].nilai>=70)){
            mahasiswa[i].index = "B";
        }
        else if((mahasiswa[i].nilai<70) && (mahasiswa[i].nilai>=61)){
            mahasiswa[i].index = "C";
        }
        else{
            mahasiswa[i].index = "D";
        }
    }


    maksimum = max(mahasiswa);
    printf("\n");
    minimum = min(mahasiswa);
    printf("\n");
    rataan = avg(mahasiswa);
    printf("\n");
    moduss = modus(mahasiswa);
}

