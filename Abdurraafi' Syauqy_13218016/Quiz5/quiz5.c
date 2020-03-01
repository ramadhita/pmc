// progressive directive
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

// tipe data
int i,j;

// struct untuk data
typedef struct data{
    int No;
    int NIM;
    char Nama[100];
    int Nilai;
} daftar[10],temp[1];
// prosedur agar mengisi nim secara otomatis terurut
void isinim(daftar a){
    int temp=13218000;
    for (i=0;i<10;i++){
        temp = temp + 1;
        a[i].NIM=temp;
    }
}

// prosedur agar mengisi nilai secara random dengan rentang 50-100
void random (daftar a){
    for (i=0;i<10;i++) {
        a[i].Nilai = rand() % 100 + 50;
        if (a[i].Nilai>=100){
            a[i].Nilai=a[i].Nilai-50;
        }
    }
}

// fungsi menghitung rata-rata nilai
double mean(daftar a){
    double rata2,sum;
    rata2 = 0;
    sum = 0;
    for(i=0;i<=9;i++){
        sum = sum + a[i].Nilai;
    }
    rata2 = sum/10;
    return rata2;
}

// program utama
int main(){
    struct data daftar[10];
    struct data temp[1];

    random(daftar);
    isinim(daftar);

    // mengisi data nama secara manual
    strcpy(daftar[0].Nama,"Raafi1");
    strcpy(daftar[1].Nama,"Raafi2");
    strcpy(daftar[2].Nama,"Raafi3");
    strcpy(daftar[3].Nama,"Raafi4");
    strcpy(daftar[4].Nama,"Raafi5");
    strcpy(daftar[5].Nama,"Raafi6");
    strcpy(daftar[6].Nama,"Raafi7");
    strcpy(daftar[7].Nama,"Raafi8");
    strcpy(daftar[8].Nama,"Raafi9");
    strcpy(daftar[9].Nama,"Raafi10");

    // mengisi urutan nomor
    for (i=0;i<10;i++){
        daftar[i].No=i+1;
    }
    
    // membuka file untuk data sebelum terurut
    FILE *fp; 
    char *filename1 = "DataRandom.csv";
    fp = fopen(filename1, "w+");

    // membuat header tabel
    fprintf(fp,"No,NIM,Nama,Nilai\n");

    // memindahkan data ke dalam file
    for (i=0;i<10;i++){
        fprintf(fp,"%d,%d,%s,%d\n",daftar[i].No,daftar[i].NIM,daftar[i].Nama,daftar[i].Nilai);
    }
    fprintf(fp, "rata-rata=%.2f", mean(daftar));
    
    fclose(fp);
    
    // mengurutkan data berdasarkan nilai dari yang tertinggi
    for (j=0;j<=10;j++){
        for (i=0;i<10;i++){
            if(daftar[i+1].Nilai>daftar[i].Nilai) {
                temp[0]=daftar[i+1];
                daftar[i+1]=daftar[i];
                daftar[i]= temp[0];
            }
        }
    }

    // mengatur ulang nomor
    for (i=0;i<10;i++){
        daftar[i].No=i+1;
    }

    // membuka file untuk data setelah terurut
    char *filename = "DataTerurut.csv";
    fp = fopen(filename, "w+");

    // membuat header tabel
    fprintf(fp,"No,NIM,Nama,Nilai\n");

    // memindahkan data ke dalam file
    for (i=0;i<10;i++){
        fprintf(fp,"%d,%d,%s,%d\n",daftar[i].No,daftar[i].NIM,daftar[i].Nama,daftar[i].Nilai);
    }
    fprintf(fp, "rata-rata=%.2f", mean(daftar));

    fclose(fp);
    return 0;
}
