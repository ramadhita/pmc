#include <stdio.h>
#include <stdlib.h>

struct Data{
char nim[8];
char nama[20];
float nilai;
};

void main(){
struct Data skor[50];
int i=1, j=0, dikator=0, angka=0;
float mean = 0;
    FILE *outfile= fopen ("outputUrut.txt", "w");
fprintf(outfile, "data sebelum sorting\n");
fprintf(outfile, "NIM Nama Nilai\n");
while (i<=10){
printf("nim %d ", i);
gets(skor[i].nim);
printf("nama %d ", i);
gets(skor[i].nama);
skor[i].nilai= (rand()%50) + 50;
mean += (skor[i].nilai)/10;
fprintf(outfile, "%d. %s,%s,%.0f\n",i, skor[i].nim, skor[i].nama, skor[i].nilai);
i+=1;

}
fprintf(outfile, "\nrata-rata = %.3f\n\n", mean);
fprintf(outfile, "data setelah sorting\n");
fprintf(outfile, "NIM Nama Nilai\n");
i=1;
while (i<=10){
        if(j>0) {
            fprintf(outfile, "%d. %s,%s,%.0f\n",i, skor[dikator].nim, skor[dikator].nama, skor[dikator].nilai);
            skor[dikator].nilai=0;
            i+=1;
            j=0;
        }
    while (j<=10){
        if (angka < skor[j].nilai) dikator = j;
        j+=1;
        angka = skor[dikator].nilai;
    }
}

}


