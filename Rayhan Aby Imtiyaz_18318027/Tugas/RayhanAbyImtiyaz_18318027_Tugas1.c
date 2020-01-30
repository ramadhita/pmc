#include <stdio.h>
#include <string.h>

typedef struct siswa { /* Membentuk struct siswa */
    char nama[10];
    int nilai;
    char indeks;
} siswa ;

char indeks(int x) {  /* Fungsi penentuan indeks berdasarkan nilai*/
    if (x >= 80) {
        return('A');
    }
    else if (x >= 70) {
        return('B');
    }
    else if (x >= 60) {
        return('C');
    }
    else if (x >= 50) {
        return('D');
    }
    else 
        return('E');
}

int main(void) {
    /* Mengisi struct siswa dalam array s */
    struct siswa s[5];
        strcpy(s[0].nama, "Mawar"); 
        strcpy(s[1].nama, "Melati");
        strcpy(s[2].nama, "Wisteria");
        strcpy(s[3].nama, "Carnation");
        strcpy(s[4].nama, "Lili");
        s[0].nilai = 67;
        s[1].nilai = 85;
        s[2].nilai = 85;
        s[3].nilai = 70;
        s[4].nilai = 60;
    
    /* Deklarasi parameter untuk statistik nilai */
    int min = s[0].nilai; 
    int max = s[0].nilai;
    char nama_min[10];
    char nama_max[10];
    strcpy(nama_max, s[0].nama);
    strcpy(nama_min, s[0].nama);
    int sum;
        sum = s[0].nilai;
    float mean;

    int i;
    for (i = 1; i <=4 ; i++) {
        /* Penentuan nilai minimum */
        if (s[i].nilai < min) {
            min = s[i].nilai;
            strcpy(nama_min, s[i].nama);
        }
        /* Penentuan nilai maksimum */
        if (s[i].nilai > max) {
            max = s[i].nilai;
            strcpy(nama_max, s[i].nama);
        }
        /* Penentuan jumlah data untuk menghitung rata-rata */
        sum += s[i].nilai;
    }
    /* Menentukan rata-rata */
    mean = sum/5.0;

    /* Output yang ditampilkan */
    for (i = 0; i <=4; i++) {
        printf("%d| %s %d %c \n",i+1, s[i].nama, s[i].nilai, indeks(s[i].nilai));
    }

    printf("\nNilai rata-rata : %f \n",mean);
    printf("Nilai minimum : %d - %s \n",min,nama_min);
    printf("Nilai maksimum : %d - %s \n",max,nama_max);

    return(0);
}
