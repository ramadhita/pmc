#include <stdio.h>
#include "Tugas1.h"

int main(void) {
    int jumlah, n, i;
    
    do
    {
        /* code */
        printf("Jumlah data mahasiswa :  ");
        scanf(" %d", &jumlah);
    } while (jumlah <=0);

    data mahasiswa[jumlah];
    
    // Input Data 
    for (int i = 0; i < jumlah; i++)
    {
        /* code */
        n = i+1;
        mahasiswa[i] = input(n);
    };

    //Sorting
    for (int i = 0; i < jumlah; i++)
    {
        /* code */
        for (int j = i; j < jumlah; j++)
        {
            if(mahasiswa[i].nilai < mahasiswa[j].nilai){
                swap(&mahasiswa[i], &mahasiswa[j]);
            };
        }
    };

    // Nilai tertinggi
    int temp = mahasiswa[0].nilai, k = 0;
    printf("Nilai tertinggi = %d, dengan nama : ", temp);
    do
    {
        /* code */
        printf(" %s", mahasiswa[k].name);
        k += 1;
        
        if (mahasiswa[k].nilai >= temp)
        {
            printf(", ");
        }
        else
        {
            printf(". \n");
        }
        
    } while (mahasiswa[k].nilai >= temp && k <= (jumlah-1));

    // Nilai terendah
    temp = mahasiswa[jumlah-1].nilai;
    k = jumlah - 1 ;
    printf("Nilai terendah = %d, dengan nama : ", temp);
    do
    {
        /* code */
        printf(" %s", mahasiswa[k].name);
        k -= 1;

        if (mahasiswa[k].nilai > temp || jumlah == 1)
        {
            printf(". \n");
        }
        else
        {
            printf(", ");
        }

    } while (mahasiswa[k].nilai <= temp && k > 0);

    // Average
    double average = 0;
    for (int s = 0; s < jumlah; s++)
    {
        /* code */
        average += mahasiswa[s].nilai;
    }
    average /= jumlah;
    printf("Nilai rata-rata : %4.2lf \n", average);
    

    //Modulus Indeks
    int total_indeks[5];
    char inde[5] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < jumlah; i++)
    {
        switch (mahasiswa[i].indeks)
        {
        case 'A':
            /* code */
            total_indeks[0] += 1;
            break;
        case 'B':
            /* code */
            total_indeks[1] += 1;
            break;
        case 'C':
            /* code */
            total_indeks[2] += 1;
            break;
        case 'D':
            /* code */
            total_indeks[3] += 1;
            break;
        case 'E':
            /* code */
            total_indeks[4] += 1;
            break;
        default:
            break;
        }
    }
    
    int maks = 0;
    for (int i = 0; i < 5; i++)
    {
        if(maks < total_indeks[i]){
            maks = total_indeks[i];
        }
    }
    
    printf("Indeks Modulus dengan total : %d adalah :", maks);

    for (int i = 0; i < 5; i++)
    {
        if(maks = total_indeks[i]){
            printf(" %c", inde[i]);
        }
    }
    return (0);
}