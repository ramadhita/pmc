#include <stdio.h>
#include <math.h>

// Abdurraafi' Syauqy
// 13218016
// Tugas 1
int i, j, maks, posmaks, min, posmin, mod ;
double sum, rata2;

typedef struct data{
    char* Nama;
    int Nilai;
    char Indeks;
} daftar[5];

char NA(int a){
    if ((a>=80) && (a<=100)){
        return 'A';
    } else if ((a>=70) && (a<80)){
        return 'B';
    } else if ((a>=60) && (a<70)){
        return 'C';
    } else if ((a>=50) && (a<60)){
        return 'D';
    } else {
        return 'E';
    }
}

int maximum(daftar a){
    maks = a[0].Nilai;
    posmaks = 0;
    for (i=0;i<=4;i++){
        if (a[i].Nilai > maks){
            maks = a[i].Nilai;
            posmaks = i;
        }
    }
    return posmaks;
}

int minimum(daftar a){
    min = a[0].Nilai;
    posmin = 0;
    for (i=0;i<=4;i++){
        if (min > a[i].Nilai){
            min = a[i].Nilai;
            posmin = i;
        }
    }
    return posmin;
}

double mean(daftar a){
    rata2 = 0;
    sum = 0;
    for(i=0;i<=4;i++){
        sum = sum + a[i].Nilai;
    }
    rata2 = sum/5;
    return rata2;
}

int modus(daftar a) {
    for (i=0; i <= 3; i++) {
       for (j=i+1; j <= 4; j++) {
           if (a[i].Nilai == a[j].Nilai) {
               mod = a[i].Nilai;
           }
       }
    }
    return mod;
}


int main () {
    struct data daftar[5];

    daftar[0].Nama = "Mawar";
    daftar[1].Nama = "Melati";
    daftar[2].Nama = "Wisteria";
    daftar[3].Nama = "Carnation";
    daftar[4].Nama = "Lili";
    
    daftar[0].Nilai = 67;
    daftar[1].Nilai = 85;
    daftar[2].Nilai = 85;
    daftar[3].Nilai = 70;
    daftar[4].Nilai = 60;

    for (i=0;i<=4;i++){
        daftar[i].Indeks = NA(daftar[i].Nilai);
    }
    for (i=0;i<=4;i++){
        printf(daftar[i].Nama);
        printf(" %c \n", daftar[i].Indeks);
    }
    printf("Pemilik nilai tertinggi adalah ");
    printf(daftar[maximum(daftar)].Nama);
    printf(" dengan nilai %d", maks);
    printf("\n");
    printf("Pemilik nilai terendah adalah ");
    printf(daftar[minimum(daftar)].Nama);
    printf(" dengan nilai %d", min);
    printf("\n");
    printf("Rata-rata nilai adalah %.2f \n", mean(daftar));
    printf("Modus = %d", modus(daftar));
    return 0;
}

