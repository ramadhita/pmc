#include <stdio.h>
#include <string.h>

typedef struct Siswa {
    char nama[10];
    int nilai;
    char indeks;
} siswa;

/* Penilaian
    A > 80
    B 70 - 80
    C 61 - 69
    D <= 60 */
char in(int a) {
    if (a > 80) {
        return('A');
    }
    else if ((a <=80) && (a >= 70)) {
        return('B');
    }
    else if ((a <70) && (a > 60)) {
        return('C');
    }
    else {
        return('D');
    }
}


int main() {
    int i, j;
    char char_mod;
    // inisialisasi data
    int neff = 5;
    siswa arr[neff];
    strcpy(arr[0].nama, "Mawar");
    arr[0].nilai = 67;
    strcpy(arr[1].nama, "Melati");
    arr[1].nilai = 85;
    strcpy(arr[2].nama, "Wisteria");
    arr[2].nilai = 85;
    strcpy(arr[3].nama, "Carnation");
    arr[3].nilai = 70;
    strcpy(arr[4].nama, "Lili");
    arr[4].nilai = 60;

    // mencari indeks berdasarkan nilai
    for (i = 0; i < (neff); i ++) {
        arr[i].indeks = in(arr[i].nilai);
    }

    // mencari nilai minimum, maksimum, dan total nilai
    int n_min = 0;                      // inisialisasi index dari nilai minimum
    int n_max = 0;                      // inisialisasi index dari nilai maksimum
    float sum = arr[0].nilai;           // inisialisasi sum
    for (i = 1; i < (neff); i ++) {
        if (arr[i].nilai < arr[n_min].nilai) {          // mencari indeks dari nilai minimum   
            n_min = i;
        }
        if (arr[i].nilai > arr[n_max].nilai) {          // mencari indeks dari nilai maksimum
            n_max = i;
        }
        sum = sum + arr[i].nilai;                       // mencari sum dari data
    }
        float mean = sum/neff;          // perhitungan rata - rata
    
    // mencari modus dari data
    int modus = 0;                                      // inisialisasi jumlah modus
    for (i = 0; i < (neff); i ++) {
        int temp = 0;                                   // inisialisasi variabel untuk menghitung jumlah indeks
        for (j = 0; j < neff; j ++) {
            if (arr[i].indeks == arr[j].indeks) {       // perhitungan jumlah dari tiap indeks
                temp = temp + 1;
            }
        }
        if (temp > modus) {                             // pencarian modus
            modus = temp;
            char_mod = arr[i].indeks;                   // assign indeks dari modus
        }
    }

    // display
    // display list
    for (i = 0; i < neff; i ++) {
        printf("%d| ", (i+1));
        printf("%s ", arr[i].nama);
        printf("%d ", arr[i].nilai);
        printf("%c\n", arr[i].indeks);
    }
    printf("Nilai minimum = %d\n", arr[n_min].nilai);
    printf("Siswa dengan nilai minimum:\n");
    for (i = 0; i < (neff); i ++) {
        if (arr[i].nilai == arr[n_min].nilai) {
            printf("%s\n", arr[i].nama);
        }
    }
    printf("Nilai maksimum = %d\n", arr[n_max].nilai);
    printf("Siswa dengan nilai maksimum:\n");
    for (i = 0; i < (neff); i ++) {
        if (arr[i].nilai == arr[n_max].nilai) {
            printf("%s\n", arr[i].nama);
        }
    }
    printf("Rata - rata = %2.2f \n", mean);
    printf("Modus = %c", char_mod);
    printf(" (%d orang)\n", modus);
    return(0);
}