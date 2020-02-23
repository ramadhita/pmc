#include <stdio.h>
#include <stdlib.h>

struct student
{
    int nim;
    char nama[1024];
    int nilai;
};
void swap (struct student *a, struct student *b)
{
    struct student student_temp = *a;
    *a = *b;
    *b = student_temp;
}
int main()
{
    FILE *fp;
    char *filename = "Database.txt";
    int i, j;
    float avg, jumlah = 0;

    //proses insialisasi data mahasiswa
    struct student st[10];
    //1
    st[0].nim = 13218003;
    strcpy(st[0].nama, "Zulfikar");
    //2
    st[1].nim = 13218045;
    strcpy(st[1].nama, "Faiz");
    //3
    st[2].nim = 13218013;
    strcpy(st[2].nama, "Rhesa");
    //4
    st[3].nim = 13218083;
    strcpy(st[3].nama, "Yasmin");
    //5
    st[4].nim = 13218025;
    strcpy(st[4].nama, "Indra");
    //6
    st[5].nim = 13218027;
    strcpy(st[5].nama, "Yoga");
    //7
    st[6].nim = 13218108;
    strcpy(st[6].nama, "Fawaz");
    //8
    st[7].nim = 13218060;
    strcpy(st[7].nama, "Danu");
    //9
    st[8].nim = 13218002;
    strcpy(st[8].nama, "Dhanu");
    //10
    st[9].nim = 13218041;
    strcpy(st[9].nama, "Ilham");

    //persiapan file dan memasukkan nilai secara random dari rentang 50-100
    fp = fopen(filename, "w");
    fprintf(fp, "Nim Nama Nilai\n");
    for (i = 0; i < 10; i++)
    {
        st[i].nilai = (rand()%(100-50+1)) + 50;
        fprintf(fp, "%d %s %d\n", st[i].nim, st[i].nama, st[i].nilai);
    }

    //rata-rata dengan cara menghitung jumlah nilai keseluruhan siswa dan dibagi 10
    for (i =0; i <10; i++)
    {
        jumlah += st[i].nilai;
    }
    avg = jumlah/10.0;
    printf("%lf", avg);
    fprintf(fp, "Rata-rata : %lf\n", avg);

    //sorting (bubble sort) lalu memprint hasil yang telah disort ke file yang sama
    for (i = 0; i < 9; i += 1)
    {
        for (j = 0; j < 10-i-1; j += 1)
        {
            if (st[j].nilai < st[j+1].nilai)
            {
                swap(&st[j], &st[j+1]);
            }
        }
    }
    fprintf(fp, "Nilai telah disort \n");
    for (i = 0; i < 10; i++)
    {
        fprintf(fp, "%d %s %d\n", st[i].nim, st[i].nama, st[i].nilai);
    }
    fclose(fp);
}


