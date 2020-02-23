// Fadia Hanifa S. / 18318029

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// START
// Pembuatan struct siswa
typedef struct Siswa {
    char nama[20];
    char nim[10];
    int nilai;
} siswa;

int main(){
    FILE *fp1 = fopen("Quiz 5.csv", "w+");          // Membuka / membuat file "Quiz 5.csv"
    FILE *fp2 = fopen("Quiz 5_urut.csv", "w+");     // Membuka / membuat file "Quiz 5_urut.csv"
    
    // Deklarasi variabel
    int neff = 10;                  // jumlah isi array
    siswa arr[neff];                // array siswa sebesar neff
    int i, j;                       // index looping
    double sum = 0;                 // inisiasi nilai variabel untuk total nilai menjadi 0

    // Pengisian array nama dan nim
    strcpy(arr[0].nama, "Fey");
    strcpy(arr[0].nim, "18318006");
    strcpy(arr[1].nama, "Maji");
    strcpy(arr[1].nim, "18318010");
    strcpy(arr[2].nama, "Nadhira");
    strcpy(arr[2].nim, "18318033");
    strcpy(arr[3].nama, "Sekti");
    strcpy(arr[3].nim, "18318023");
    strcpy(arr[4].nama, "Aby");
    strcpy(arr[4].nim, "18318027");
    strcpy(arr[5].nama, "Alex");
    strcpy(arr[5].nim, "18318026");
    strcpy(arr[6].nama, "Taya");
    strcpy(arr[6].nim, "18318021");
    strcpy(arr[7].nama, "Adit");
    strcpy(arr[7].nim, "18318024");
    strcpy(arr[8].nama, "San");
    strcpy(arr[8].nim, "18318039");
    strcpy(arr[9].nama, "Jeje");
    strcpy(arr[9].nim, "18318022");

    // Pemasukan nilai dan penghitungan rata - rata
    for (i = 0; i < neff; i ++){     // looping dari 0 sampai neff-1 (sepanjang array)
        arr[i].nilai = (rand() %50 + 51);   // pengisian nilai dengan fungsi rand (hasil rand() dibatasi sampai 49 kemudian ditambah 51 sehingga nilai berkisar pada 50-100)
        sum += arr[i].nilai;                // penghitungan total nilai
    }
    printf("Rata - rata : %2.1lf\n", (sum/neff)); // Mengeluarkan rata - rata di terminal

    // Mengeprint judul tabel pada file
    fprintf(fp1, "No.,NIM,Nama,Nilai");
    fprintf(fp2, "No.,NIM,Nama,Nilai");

    // Pemasukan data pada file "Quiz 5.csv"
    for(i = 0; i < neff; i ++) {            // looping sepanjang jumlah array
        fprintf(fp1, "%d,", (i+1));         // print index i + 1
        fprintf(fp1, "%s,", arr[i].nim);    // print nim pada index ke i
        fprintf(fp1, "%s,", arr[i].nama);   // print nama pada index ke i
        fprintf(fp1, "%d\n", arr[i].nilai); // print nilai pada index ke i                      
    }

    // Mengurutkan siswa berdasarkan nilai (Dengan Bubble Sort)
    siswa temp;                                         // membuat variabel temporary
    for (i = 0; i < (neff - 1); i++){                   // looping dari 0 sampai neff-1 dengan increment 1
        for (j = 0; j < (neff - i - 1); j++){           // looping dari 0 sampai neff-i-1 dengan increment 1
            if (arr[j].nilai < arr[j+1].nilai){         // Jika nilai array pada index j lebih kecil dari dalam array setelahnya
                temp = arr[j];                          // maka array akan ditukar
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Pemasukan data pada file "Quiz 5.csv"
    for(i = 0; i < neff; i ++) {            // looping sepanjang jumlah array
        fprintf(fp1, "%d,", (i + 1));         // print index i + 1
        fprintf(fp1, "%s,", arr[i].nim);    // print nim pada index ke i
        fprintf(fp1, "%s,", arr[i].nama);   // print nama pada index ke i
        fprintf(fp1, "%d\n", arr[i].nilai); // print nilai pada index ke i                                                            
    }

    // menutup file
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}