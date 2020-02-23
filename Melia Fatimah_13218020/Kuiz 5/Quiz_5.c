#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data{
    int nim, no;
    char *nama;
    int nilai;
};

int main(){
    
    int i, j, sum=0;
    FILE *sebelum;
    sebelum = fopen("sebelum.txt", "w");

    struct data mhsw[10], tmp;
    
    mhsw[0].nama = "Melia";
    mhsw[1].nama = "Fatimah";
    mhsw[2].nama = "Yasmin";
    mhsw[3].nama = "Sekar";
    mhsw[4].nama = "Arum";
    mhsw[5].nama = "Rara";
    mhsw[6].nama = "alzana";
    mhsw[7].nama = "rafif";
    mhsw[8].nama = "jeje";
    mhsw[9].nama = "sekti";
    mhsw[0].nim = 13218001;
    mhsw[1].nim = 13218002;
    mhsw[2].nim = 13218003;
    mhsw[3].nim = 13218004;
    mhsw[4].nim = 13218005;
    mhsw[5].nim = 13218006;
    mhsw[6].nim = 13218007;
    mhsw[7].nim = 13218008;
    mhsw[8].nim = 13218009;
    mhsw[9].nim = 13218010;
    
    fprintf (sebelum, "Data awal:\n");

    for(i = 0; i < 10 ; i++){
        mhsw[i].no = i+1;
        mhsw[i].nilai = rand()%51+50;
        sum = sum + mhsw[i].nilai;
        fprintf (sebelum, "%d   %d  %s  %d\n", mhsw[i].no, mhsw[i].nim, mhsw[i].nama, mhsw[i].nilai);
    }

    fprintf (sebelum, "\nData setelah di sort: \n");


    for (i = 0; i < 10; i++) {   // loop n times - 1 per element
        for (j = 0; j < 9 - i ; j++) { // last i elements are sorted already
            if (mhsw[j].nilai < mhsw[j + 1].nilai) {  // swop if order is broken
                tmp = mhsw[j];
                mhsw[j] = mhsw[j + 1];
                mhsw[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        mhsw[i].no = i+1;
        fprintf (sebelum, "%d   %d  %s  %d\n", mhsw[i].no, mhsw[i].nim, mhsw[i].nama, mhsw[i].nilai);
    }

    printf("%d", sum/10);
    fprintf (sebelum, "\n");
    fprintf (sebelum, "Nilai rata-rata : %d", sum/10);
    fclose(sebelum);
    return(0);
    
}