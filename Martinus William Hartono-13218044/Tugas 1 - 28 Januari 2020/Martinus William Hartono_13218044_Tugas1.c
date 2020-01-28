//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   28 Januari 2020
//EL2008 - Pemecahan Masalah dengan C

/*Program untuk mencari modus, maksimum, minimum, dan nilai rata-rata dari suatu data kelas*/

#include <stdio.h>
#include <string.h>
#include "martin_function.h"

//DEFINISI FUNCTION DAN PROCEDURE
char input_indeks(int x);
void cari_rata(struct Student x[5]);
void maksimum_minimum(struct Student x[5]);
void cari_modus(struct Student x[5]);

//ALGORITME UTAMA
int main(void)
{
    int i;                              //variabel incremental

    //Inisialisasi
    struct Student s[5];
        strcpy(s[0].Nama, "Mawar");
        strcpy(s[1].Nama, "Melati");
        strcpy(s[2].Nama, "Wisteria");
        strcpy(s[3].Nama, "Carnation");
        strcpy(s[4].Nama, "Lili");

        s[0].Nilai = 67;
        s[1].Nilai = 85;
        s[2].Nilai = 85;
        s[3].Nilai = 70;
        s[4].Nilai = 60;

        //Proses memasukkan nilai indeks dari fungsi input_indeks
        for(i=0; i<=4; i=i+1)
        {
            s[i].Indeks = input_indeks(s[i].Nilai);
        }

        //OUTPUT
        printf("MODUS INDEKS\n");
        cari_modus(s);

        printf("\nNILAI MAKSIMUM DAN MINIMUM\n");
        maksimum_minimum(s);

        printf("\nNILAI RATA-RATA\n");
        cari_rata(s);
    return(0);
}
