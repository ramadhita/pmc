#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

struct dataNilai {
    int no;
    int nim;
    char *nama;
    int nilai;
};

int main () {
    struct dataNilai data[10];
    float mean = 0;
    int i, j, temp;
    char *ctemp;
    
    FILE *fp;
    fp = fopen ("random.txt", "w+");
    
    //input data
    srand(time(0));
    for (int i=0; i<10; i++) {
        data[i].no = i+1;
        data[i].nim = 13218000 + i;
        data[i].nilai = rand() % 50 + 50;
    }
    data[0].nama = "Budi1";
    data[1].nama = "Budi2";
    data[2].nama = "Budi3";
    data[3].nama = "Budi4";
    data[4].nama = "Budi5";
    data[5].nama = "Budi6";
    data[6].nama = "Budi7";
    data[7].nama = "Budi8";
    data[8].nama = "Budi9";
    data[9].nama = "Budi10";
    
    //mean & input ke file
    fprintf (fp, "Sebelum diurutkan\n");
    for (i=0; i<10; i++) {
        mean += data[i].nilai;
        fprintf (fp, "%d %d %s %d\n", data[i].no, data[i].nim, data[i].nama, data[i].nilai);
    }
    mean = mean / 10;
    fprintf (fp, "\nMean = %f\n\n", mean);

    //sorting
    for (i=0; i<9; i++) {
        for (j=9; j>0; j--) {
            if (data[j].nilai > data[j-1].nilai) {
                temp = data[j].no;
                data[j].no = data[j-1].no;
                data[j-1].no = temp;

                temp = data[j].nim;
                data[j].nim = data[j-1].nim;
                data[j-1].nim = temp;
                
                ctemp = data[j].nama;
                data[j].nama = data[j-1].nama;
                data[j-1].nama = ctemp;

                temp = data[j].nilai;
                data[j].nilai = data[j-1].nilai;
                data[j-1].nilai = temp;
            }
        }
    }

    fprintf (fp, "Setelah diurutkan\n");
    for (i=0; i<10; i++) {
        fprintf (fp, "%d %d %s %d\n", data[i].no, data[i].nim, data[i].nama, data[i].nilai);
    }
    
    fclose (fp);
}