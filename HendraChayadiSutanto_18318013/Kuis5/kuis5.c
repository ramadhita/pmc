/*  Kuis                : 5
 *  Nama (NIM)          : Hendra Chayadi Sutanto (18318013)
 *  Nama File           : kuis5.c
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct daftar_mahasiswa{
    char nama[100];
    int nim;
    int nilai;
};

int main(){
    int i, j, x = 0, y = 0;
    char a[100];
    float rata, jumlah;
    struct daftar_mahasiswa mahasiswa[10];

    FILE *fp;
    fp = fopen("kuis5.txt", "w+");

    strcpy(mahasiswa[0].nama, "Wildan1");
    strcpy(mahasiswa[1].nama, "Wildan2");
    strcpy(mahasiswa[2].nama, "Wildan3");
    strcpy(mahasiswa[3].nama, "Wildan4");
    strcpy(mahasiswa[4].nama, "Wildan5");
    strcpy(mahasiswa[5].nama, "Wildan6");
    strcpy(mahasiswa[6].nama, "Wildan7");
    strcpy(mahasiswa[7].nama, "Wildan8");
    strcpy(mahasiswa[8].nama, "Wildan9");
    strcpy(mahasiswa[9].nama, "Wildan10");

    mahasiswa[0].nim = 18318001;
    mahasiswa[1].nim = 18318002;
    mahasiswa[2].nim = 18318003;
    mahasiswa[3].nim = 18318004;
    mahasiswa[4].nim = 18318005;
    mahasiswa[5].nim = 18318006;
    mahasiswa[6].nim = 18318007;
    mahasiswa[7].nim = 18318008;
    mahasiswa[8].nim = 18318009;
    mahasiswa[9].nim = 18318010;

    jumlah = 0;
    for (i = 0; i < 10; i++){
        mahasiswa[i].nilai = (rand() % (100 - 50 + 1) + 50);

        fprintf(fp,"%d\t%s\t%d\n", mahasiswa[i].nim, mahasiswa[i].nama, mahasiswa[i].nilai);
        jumlah += mahasiswa[i].nilai;
    }
    
    rata = jumlah/10;
    fprintf(fp, "\nRata-rata nilai: %.2f\n\n", rata);

    for (i = 0; i < 10; i++){
        for (j = i+1; j < 10; j++){
            if (mahasiswa[i].nilai < mahasiswa[j].nilai){
                x = mahasiswa[i].nilai;
                mahasiswa[i].nilai = mahasiswa[j].nilai;
                mahasiswa[j].nilai = x;

                y = mahasiswa[i].nim;
                mahasiswa[i].nim = mahasiswa[j].nim;
                mahasiswa[j].nim = y;

                strcpy(a, mahasiswa[i].nama);
                strcpy(mahasiswa[i].nama, mahasiswa[j].nama);
                strcpy(mahasiswa[j].nama, a);
            }
        }
    }

    for (i=0; i<10; i++){
        fprintf(fp, "%d\t%s\t%d\n", mahasiswa[i].nim, mahasiswa[i].nama, mahasiswa[i].nilai);
    }

    fclose(fp);
}