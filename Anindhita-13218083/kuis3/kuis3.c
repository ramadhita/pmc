/*
Anindhita N.
13218083
*/

#include <stdio.h>

struct Mahasiswa {
    char nama[20];
    int nilai;
    char indeks;
};

// input nilai, return indeks nilai
char indeks(int n) {
    if (n > 85) return 'A';
    if (n > 70) return 'B';
    if (n > 55) return 'C';
    if (n > 40) return 'D';
    return 'E';
}

int main() {
    int N;
    printf("Jumlah mahasiswa: ");
    scanf("%d", &N);

    struct Mahasiswa d[N];

    struct Mahasiswa maks;
    struct Mahasiswa min;
    float average = 0;
    int frekuensiIndeks[5] = {0};
    for (int i = 0; i < N; i++){

        // input nama
        printf("Nama: ");
        scanf("%s", d[i].nama);

        // input nilai
        printf("Nilai: ");
        scanf("%d", &d[i].nilai);

        // simpan indeks
        d[i].indeks = indeks(d[i].nilai);

        // cari maks dan min
        if (i == 0) {
            maks = d[0];
            min = d[0];
        } else {
            if (d[i].nilai > maks.nilai) {
                maks = d[i];
            }
            if (d[i].nilai < min.nilai) {
                min = d[i];
            }
        }

        // hitung rata-rata
        average += d[i].nilai / (float) N;

        // tambahkan ke tabel frekuensi indeks
        frekuensiIndeks[(int) d[i].indeks - 65]++;
    }

    printf("\nOUTPUT\n");

    // cetak input
    for (int i = 0; i < N; i++) {
        printf("%d) Nama = %s, Nilai = %d, Indeks = %c\n", i+1, d[i].nama, d[i].nilai, d[i].indeks);
    }
    
    // cari modus
    int modus = 0;
    for (int i = 1; i < 5; i++) {
        if (frekuensiIndeks[i] > frekuensiIndeks[modus]) {
            modus = i;
        }
    }

    // cetak statistik
    printf("Maks: Nama = %s, Nilai = %d\n", maks.nama, maks.nilai);
    printf("Min : Nama = %s, Nilai = %d\n", min.nama, min.nilai);
    printf("Rata-rata = %.2f\n", average);
    printf("Modus Indeks = %c", (char) 65 + modus);

    return 0;
}