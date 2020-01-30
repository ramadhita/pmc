#include <stdio.h>
#include "Tugas1.h"

int main(void)
{
    int jumlah, n, i;
    int total_indeks[5] = {0, 0, 0, 0, 0};
    char char_indeks[5] = "ABCDE";
    {
        /* code */
        printf("Jumlah data mahasiswa :  ");
        scanf(" %d", &jumlah);
    }
    while (jumlah <= 0)
        ;

    data mahasiswa[jumlah];

    // Input Data
    for (int i = 0; i < jumlah; i++)
    {
        /* code */
        n = i + 1;
        mahasiswa[i] = input(n);
    };

    //Sorting
    for (int i = 0; i < jumlah; i++)
    {
        /* code */
        for (int j = i; j < jumlah; j++)
        {
            if (mahasiswa[i].nilai < mahasiswa[j].nilai)
            {
                swap(&mahasiswa[i], &mahasiswa[j]);
            };
        }
    };

    // Nilai tertinggi
    max_nilai(mahasiswa, jumlah);

    // Nilai terendah
    min_nilai(mahasiswa, jumlah);

    // Average
    average(mahasiswa, jumlah);

    //Modulus Indeks
    modulus(mahasiswa, jumlah, total_indeks, char_indeks);

    return (0);
}