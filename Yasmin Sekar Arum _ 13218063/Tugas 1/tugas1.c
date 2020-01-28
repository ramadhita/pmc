//Nama : Yasmin Sekar Arum / 13218063
#include <stdio.h>
#include <string.h>

struct Peserta
{
    int Nilai;
    char Nama[100];
    char Indeks[2];
};


void Cari (int X, struct Peserta K[7])
{
    int n;
    for (n=0; n<6; n++){
       if( K[n].Nilai == X){
           printf("%s \n", K[n].Nama);
       }
       else {
       }
    }
}

int main()
{
    struct Peserta PesertaK[7];
    
    strcpy(PesertaK[0].Nama, "Mawar");
    strcpy(PesertaK[1].Nama, "Melati");
    strcpy(PesertaK[2].Nama, "Wisteria");
    strcpy(PesertaK[3].Nama, "Carnation");
    strcpy(PesertaK[4].Nama, "Lili");
    PesertaK[0].Nilai= 67;
    PesertaK[1].Nilai= 85;
    PesertaK[2].Nilai= 85;
    PesertaK[3].Nilai= 70;
    PesertaK[4].Nilai= 60;

    int i,n, t1, t2, y, k, j, max;
    float t;
    char Y22;
    t=0;t1=PesertaK[0].Nilai;t2=PesertaK[0].Nilai;


    for (i=0; i<6; i++){
        if (PesertaK[i].Nilai == 67){
           strcpy (PesertaK[i].Indeks,"C");}
        else if(PesertaK[i].Nilai == 85){
            strcpy (PesertaK[i].Indeks, "A");}
        else if(PesertaK[i].Nilai == 70){
           strcpy (PesertaK[i].Indeks, "B");}
        else if (PesertaK[i].Nilai == 60){
            strcpy(PesertaK[i].Indeks,"D");}
    }

    for (n=0; n<5; n++){
        t = t + PesertaK[n].Nilai;
        if (PesertaK[n].Nilai>= t1){
            t1 = PesertaK[n].Nilai;
        }
        else
        {
        }
        if (t2>= PesertaK[n].Nilai){
            t2 = PesertaK[n].Nilai;
        }
        else {
        }
    }

    printf ("Modus Indeksnya ialah ");

    for (n=0; n<4; n++){
        y = 1;
        k = 0;
        for (j = n + 1; j < 4; j++)
        {
            if (PesertaK[n].Indeks == PesertaK[j].Indeks) {
                y=y+1;
            }
            max = y;
        }
        
        if ((y >= max) && (max != 2)) {
            k = n-1;
        }
    }
    printf("%s \n", PesertaK[k].Indeks);
    printf("Hasil Maks : %d,\n", t1);
    Cari (t1, PesertaK);
    printf("Hasil Min : %d \n", t2);
    Cari (t2, PesertaK);
    printf("Nilai rata-rata : %.2f", t/5);

    return(0);
}