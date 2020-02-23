#include <stdio.h>
#include <stdlib.h>
struct student {
        int no;
        int nim;
        char nama[15];
        int nilai;
    };
int main()
{
FILE * fp;
fp = fopen("output.txt", "w");
struct student data[10];
// Mengisi Daraset
int i;
int sum;
float avg;
//srand(time(0));
for (i = 0; i < 10; i++){
    data[i].no = i + 1;
    data[i].nim = (rand() % (13218080 - 13218010 + 1)) + 13218010;
    strcpy(data[i].nama, "Mawar");
    data[i].nilai = (rand() % (100 - 50 + 1)) + 50;
    fprintf(fp,"%d %d %s %d\n", data[i].no, data[i].nim, data[i].nama, data[i].nilai );
    sum += data[i].nilai;
}
// Menghitung rata-rata nilai
avg = sum / 10;
fprintf(fp,"Rata - rata nilai = %f\n", avg);
int j;
int temp1;
char temp2[15];
int temp3;
// sorting
for (i = 0; i <= 9; i++){
    for (j = 0; j <= 9; j++){
        if (data[j].nilai < data[i].nilai){
            // temp
            temp1 = data[i].nim;
            strcpy(temp2, data[i].nama);
            temp3 = data[i].nilai;
            // i to j
            data[i].nim = data[j].nim;
            strcpy(data[i].nama, data[j].nama);
            data[i].nilai = data[j].nilai;
            // j to i
            data[j].nim = temp1;
            strcpy(data[j].nama, temp2);
            data[j].nilai = temp3;
        }
    }
}
for (i = 0; i < 10; i++){
        fprintf(fp,"%d %d %s %d\n", data[i].no, data[i].nim, data[i].nama, data[i].nilai );
}


fclose(fp);

    return 0;
}
