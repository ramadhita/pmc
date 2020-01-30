/** Apria wati 13218028**/
#include<stdio.h>

struct data {
    char *Nama;
    int   Nilai;
    char  Index;
};

struct Pencarian {
    int     Max;
    int     Min;
    float   Mean;
};

char INDEX(int skor) {
    char indexx;
    if (skor >= 80) {
        indexx = 'A';
    }
    else if ((skor >= 70) && (skor < 80)) {
        indexx = 'B';
    }
    else if ((skor > 60) && (skor < 70)){
        indexx = 'C';
    }
    else {
        indexx = 'D';
    }
    return (indexx);
};

char modus(struct data mhs[5]) {
    int i;
    int A=0,B=0,C=0,D=0;
    char modus;
        for (i=0; i<5; i++){
            if (mhs[i].Index = 'A'){
                A += 1;
            }
            else if(mhs[i].Index = 'B'){
                B += 1;
            }
             else if (mhs[i].Index = 'C'){
                C += 1;
            }
            else if(mhs[i].Index = 'D'){
                D += 1;
            }
        }
        if((A>B) && (A>C) && (A>D)){
            modus = 'A';
        }
        else if ((B>A) && (B>C) && (B>D)){
            modus = 'B';
        }
        else if((C>A) && (C>B) && (C>D)){
            modus = 'C';
        }
        else{
            modus = 'D';
        }
    printf("Modus dari indeks adalah %c", modus);
};

struct Pencarian statistik (struct data mahasiswa[5]){
    int Max = mahasiswa[0].Nilai;
    int Min = mahasiswa[0].Nilai;
    float Mean = mahasiswa[0].Nilai;
    int i;
    float sum = 0;
    struct Pencarian hasil;

    for(i=0; i<5; i++){
        if (mahasiswa[i].Nilai > Max){
            Max= mahasiswa[i].Nilai;
        }
        if (mahasiswa[i].Nilai < Min){
            Min = mahasiswa[i].Nilai;
        }
        sum = sum + mahasiswa[i].Nilai;
    }
    Mean = sum/5;
    hasil.Max = Max;
    hasil.Min = Min;
    hasil.Mean = Mean;

    return (hasil);
}

int main () {
    struct  data mhs[5];
    struct  Pencarian hasil;

    mhs[0].Nama = "Mawar";
    mhs[0].Nilai = 67;
    mhs[0].Index = INDEX(mhs[0].Nilai);
    
    mhs[1].Nama = "Melati";
    mhs[1].Nilai = 85;
    mhs[1].Index = INDEX(mhs[1].Nilai);

    mhs[2].Nama = "Wisteria";
    mhs[2].Nilai = 85;
    mhs[2].Index = INDEX(mhs[2].Nilai);

    mhs[3].Nama = "Carnation";
    mhs[3].Nilai = 70;
    mhs[3].Index = INDEX(mhs[3].Nilai);

    mhs[4].Nama = "Lili";
    mhs[4].Nilai = 60;
    mhs[4].Index = INDEX(mhs[4].Nilai);

    hasil = statistik (mhs);
    int i,j;

    for (i=0; i<5; i=i+1) {
        if (mhs[i].Nilai == hasil.Max) {
            printf ("Yang memiliki nilai max %d adalah %s\n", hasil.Max, mhs[i].Nama);
        }
    }
    for (j=0; j<5; j=j+1) {
        if (mhs[j].Nilai == hasil.Min) {
            printf ("Yang memiliki nilai min = %d adalah %s\n", hasil.Min, mhs[j].Nama);
        }
    }
    printf ("Nilai rata-rata kelima mahasiswa adalah %f\n", hasil.Mean);
    modus(mhs);
}



