/* Kuis 5
Hari, tanggal   : Kamis, 20 Februari 2020 
Nama            : Dorothea Claresta P
NIM             : 18318007
Deskripsi       : Membuat struct berisi NIM, nama, dan nilai
                  kemudian mencari nilai rata-rata & mengurutkan dari yang terbesar
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct daftar_mahasiswa{
    int nim;
    char nama[50];
    int nilai;
};

int main(){
    // deklarasi variabel
    int i, j, x = 0, y = 0;
    char z[50];
    float rerata, total;
    struct daftar_mahasiswa mahasiswa[10];

    // membuka file untuk dituliskan
    FILE *fp;
    fp = fopen("kuis5.txt", "w+");

    // menentukan nim mahasiswa
    mahasiswa[0].nim = 18318501;
    mahasiswa[1].nim = 18318001;
    mahasiswa[2].nim = 18318002;
    mahasiswa[3].nim = 18318003;
    mahasiswa[4].nim = 18318004;
    mahasiswa[5].nim = 18318005;
    mahasiswa[6].nim = 18318006;
    mahasiswa[7].nim = 18318007;
    mahasiswa[8].nim = 18318008;
    mahasiswa[9].nim = 18318009;

    // menentukan nama mahasiswa
    strcpy(mahasiswa[0].nama, "christy");
    strcpy(mahasiswa[1].nama, "linta");
    strcpy(mahasiswa[2].nama, "winne");
    strcpy(mahasiswa[3].nama, "amel");
    strcpy(mahasiswa[4].nama, "peye");
    strcpy(mahasiswa[5].nama, "uni");
    strcpy(mahasiswa[6].nama, "fey");
    strcpy(mahasiswa[7].nama, "thea");
    strcpy(mahasiswa[8].nama, "matul");
    strcpy(mahasiswa[9].nama, "donny");

    total = 0;
    for (i=0; i<10; i++){
        // randomize nilai mahasiswa
        mahasiswa[i].nilai = (rand() % (100 - 50 + 1) + 50);

        // menuliskan daftar mahasiswa ke file
        fprintf(fp, "%d\t%s\t%d\n", mahasiswa[i].nim, mahasiswa[i].nama, mahasiswa[i].nilai);

        // mencari nilai rata-rata
        total += mahasiswa[i].nilai;
    }

    // mencari nilai rata-rata & menuliskannya ke file
    rerata = total/10;
    fprintf(fp, "\nRata-rata %.2f\n\n", rerata);
    
    // mengurutkan dari nilai terbesar ke terkecil
    for (i=0; i<10; i++){
        for (j=i+1; j<10; j++){
            if (mahasiswa[i].nilai < mahasiswa[j].nilai){
                x = mahasiswa[i].nilai;
                mahasiswa[i].nilai = mahasiswa[j].nilai;
                mahasiswa[j].nilai = x;

                y = mahasiswa[i].nim;
                mahasiswa[i].nim = mahasiswa[j].nim;
                mahasiswa[j].nim = y;

                strcpy(z, mahasiswa[i].nama);
                strcpy(mahasiswa[i].nama, mahasiswa[j].nama);
                strcpy(mahasiswa[j].nama, z);
            }
        }
    }

    // menuliskan struct terurut mengecil ke file
    for (i=0; i<10; i++){
        fprintf(fp, "%d\t%s\t%d\n", mahasiswa[i].nim, mahasiswa[i].nama, mahasiswa[i].nilai);
    }

    fclose(fp);
}
