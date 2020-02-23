// NAMA     : Agung Dwi Laksana
// NIM      : 13218034
// Tanggal  : 21 Februari 2020
// Program  : Membuat data base dan mengurutkan data base mhs.

#include <stdio.h>
#include <string.h>

int main (void)
{
    typedef struct datas_mhs {
        char nim[9];
        char nama[20];
        int nilai;
        } data_mhs;

    // deklarasi data:
    data_mhs database[10]; //array menyimpan database
    data_mhs temp; //untuk sorting
    int sum = 0,average = 0; // Untuk menghitung rata-rata
    int n = 10;
    int i, j; // For loop
    FILE* fp;

    // open file
    fp = fopen("DataSortingNilaiMhs.csv", "w");

    // input data
    printf("Input data nim mahasiswa dan nama mahasiswa : \n");
    printf("contoh :\nAgung Dwi L\n13218034\n\n");
    for (i = 0; i<10;i++)
    {
        gets(&database[i].nama);
        gets(&database[i].nim);
        database[i].nilai = 50 + (rand()%50);
    }

    // Print data Awal :
        //-> pada layar
    printf("\n\n DATA BASE ");
    printf("\nNo.\t\tNIM\t\tNama\t\t Nilai\n");
    for(i = 0; i <10; i++)
    {
        printf("%d\t\t%s\t%s\t\t%d\n",(i+1),database[i].nim,database[i].nama,database[i].nilai);
    }
        // -> pada excel
    fprintf(fp, "DATA BASE\n");
    fprintf(fp,"No.;NIM;Nama;Nilai\n");
    for(i = 0; i <10; i++)
    {
        fprintf(fp, "%d;%s;%s;%d\n",(i+1),database[i].nim,database[i].nama,database[i].nilai);
    }

    // Mengurutkan data mahasiswa berdasarkan nilai menggunakan bubble sort
    for (i=9; i>=0; i--){
        for (j=0; j<i; j++){
            if(database[j].nilai<database[j+1].nilai){
                temp = database[j];
                database[j] = database[j+1];
                database[j+1] = temp;
            }
        }
    }


    // Print data setelah sorting :
        // -> Pada layar
    printf("\n\n DATA BASE ");
    printf("\nNo.\t\tNIM\t\tNama\t\t Nilai\n");
    for(i = 0; i <10; i++)
    {
        printf("%d\t\t%s\t%s\t\t%d\n",(i+1),database[i].nim,database[i].nama,database[i].nilai);
    }

        // -> Pada dokumen
    // -> pada excel
    fprintf(fp, "DATA BASE (sorted)\n");
    fprintf(fp,"No.;NIM;Nama;Nilai\n");
    for(i = 0; i <10; i++)
    {
        fprintf(fp, "%d;%s;%s;%d\n",(i+1),database[i].nim,database[i].nama,database[i].nilai);
    }

    //Menghitung rata-rata :
    for (i=0; i<n; i++)
    {
        sum = sum + database[i].nilai;
    }
    average = sum/n;
    printf ("Rata-rata nilai mahasiswa adalah : %d",average);
    fprintf(fp, "Rata-rata nilai mahasiswa adalah : %d", average);

    // Menutup file
    fclose(fp);
    return 0;
}

