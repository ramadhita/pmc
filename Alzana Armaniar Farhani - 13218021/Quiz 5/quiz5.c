/* NIM: 13218021
Nama: Alzana Armaniar Farhani
Keterangan: Quiz 5*/

#include <stdio.h>
#include <stdlib.h>
#include "fungsi1.h"

int main(){
    struct mahasiswa M[10];
    double mean;
    int i;
    FILE *f1;
    FILE *f2;
    M[0].nama = "Mia";
    M[1].nama = "Melanie";
    M[2].nama = "Scott";
    M[3].nama = "Charles";
    M[4].nama = "Lili";
    M[5].nama = "Kia";
    M[6].nama = "Rafi";
    M[7].nama = "Citra";
    M[8].nama = "Will";
    M[9].nama = "Budi";
    M[0].NIM = 13218001;
    M[1].NIM = 13218002;
    M[2].NIM = 13218003;
    M[3].NIM = 13218004;
    M[4].NIM = 13218005;
    M[5].NIM = 13218006;
    M[6].NIM = 13218007;
    M[7].NIM = 13218008;
    M[8].NIM = 13218009;
    M[9].NIM = 13218010;
    for (i=0; i<10; i+=1){
        M[i].nilai= (rand() % 51) + 50;
    }
    mean= findMean(M);
    f1= fopen("mahasiswa.csv", "w+");
    for(i=0;i<10;i+=1){
        fprintf(f1, "%d,%d,%s,%d\n", i+1, M[i].NIM, M[i].nama, M[i].nilai);
    }
    fprintf(f1, "%lf", mean);
    fclose(f1);
    sortNilai(M);
    f2= fopen("mahasiswa2.csv", "w+");
    for(i=0;i<10;i+=1){
        fprintf(f2, "%d,%d,%s,%d\n", i+1, M[i].NIM, M[i].nama, M[i].nilai);
    }
    fclose(f2);

    
}
