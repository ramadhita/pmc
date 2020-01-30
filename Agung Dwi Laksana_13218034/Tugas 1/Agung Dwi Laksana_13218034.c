// Nama     : Agung Dwi Laksana
// NIM      : 13218034
// Program  : Olah Data Indeks dan Nilai Mahasiswa
// Tanggal  : 28 Januari 2020

#include <stdio.h>
#define MAX 5
    // Banyak data yang diinput

    // Membuat structure
    struct data
    {
        char Nama[10];
        int Nilai;
        char Indeks;
    };

    // Deklarasi implisit procedure dan fungsi
    void Indeks_counter (int Nilai, char *Indeks);
    int Max_finder (struct data database[MAX]);
    int Min_finder (struct data database[MAX]);
    double Average (struct data database[MAX]);
    char Modus_finder (struct data database[MAX]);

// Program Utama
int main (void){

    // Deklarasi variabel database
    struct data database[MAX];

    // Input nilai awal
    strcpy (database[0].Nama, "Mawar");
    database[0].Nilai   = 67;

    strcpy (database[1].Nama, "Melati");
    database[1].Nilai   = 85;

    strcpy (database[2].Nama, "Wisteria");
    database[2].Nilai   = 85;

    strcpy (database[3].Nama, "Carnation");
    database[3].Nilai   = 70;

    strcpy (database[4].Nama, "Lili");
    database[4].Nilai   = 60;


    //Hitung indeks dari tiap-tiap mahasiswa
    for (int i=0; i<MAX; i=i+1){
        Indeks_counter(database[i].Nilai, &database[i].Indeks);
    }

    // Mencetak Indeks mahasiswa
    printf("Database Indeks Mahasiswa Sebagai Berikut : \n\n");
    for (int i=0; i<MAX; i=i+1){
        printf ("Nama  : %s \n", database[i].Nama);
        printf ("Nilai : %d \n", database[i].Nilai);
        printf ("Indeks: %c \n", database[i].Indeks);
        printf ("\n");
    }

    // Mencetak Maksimum, Minimum, Rata-rata Nilai dan Modus dari Indeks
    printf( "Nilai Maksimum dari Mahasiswa adalah %d \n",
           Max_finder(database));
    printf( "Nilai Minimum dari Mahasiswa adalah %d \n",
           Min_finder(database));
    printf ( "Nilai Rata-rata dari Mahasiswa adalah %.1f \n",
            Average(database));
    printf ( "Indeks yang sering muncul (Modus) adalah %c \n",
            Modus_finder(database));
return 0;
}

// Procedure menentukan indeks
    void Indeks_counter (int Nilai, char *Indeks){
        if (Nilai >= 80){
            *Indeks = 'A';
        } else if ((Nilai < 80) && (Nilai >= 70)){
            *Indeks = 'B';;
        } else if ((Nilai < 70) && (Nilai >= 60)){
            *Indeks = 'C';
        } else {
            *Indeks = 'D';
        }
    }

    // Fungsi menetukan nilai maksimum mahasiswa
    int Max_finder (struct data database[MAX]){
        int max = 0;
        for (int i = 0; i < MAX; i=i+1){
            if (max < database[i].Nilai){
                max = database[i].Nilai;
            }
        }
        return max;
    }

    // Fungsi menetukan nilai minimum mahasiswa
    int Min_finder (struct data database[MAX]){
        int min = 100;
        for (int i = 0; i < MAX; i=i+1){
            if (min > database[i].Nilai){
                min = database[i].Nilai;
            }
        }
        return min;
    }

    // Fungsi untuk menghitung rata-rata
    double Average (struct data database[MAX]){
        int count = 0;
        int sum = 0;
        for (int i = 0; i < MAX; i++){
            sum   = sum + database[i].Nilai;
            count = count + 1;
        }
        return (sum/count);
    }

    // Fungsi untuk meencari modus dari indeks
    char Modus_finder (struct data database[MAX]){
        int Modus = 0;
        int indeks_modus;
        struct {
            char Indeks;
            int Banyaknya;
            } Data_indeks[4];

        Data_indeks[0].Indeks = 'A';
        Data_indeks[1].Indeks = 'B';
        Data_indeks[2].Indeks = 'C';
        Data_indeks[3].Indeks = 'D';

        Data_indeks[0].Banyaknya = 0;
        Data_indeks[1].Banyaknya = 0;
        Data_indeks[2].Banyaknya = 0;
        Data_indeks[3].Banyaknya = 0;

        // Menghitung banyak tiap indeks
        for (int i=0; i<MAX; i=i+1){
            for (int j=0; j<4; j = j+1){
                if (database[i].Indeks == Data_indeks[j].Indeks){
                    Data_indeks[j].Banyaknya = Data_indeks[j].Banyaknya + 1;
                }
            }
        }

        //Cari maksumum
        for (int j=0; j<4; j = j+1){
            if (Modus < Data_indeks[j].Banyaknya){
                    indeks_modus = j;
                    Modus = Data_indeks[j].Banyaknya;
            }
        }

        return Data_indeks[indeks_modus].Indeks;
     }
