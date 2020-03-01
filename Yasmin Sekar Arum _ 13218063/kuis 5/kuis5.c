// Nama : Yasmin Sekar Arum
// NIM  : 13218063
// Kuis 5

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// Struct daftar yang digunakan, berisi identitas mahasiswa
struct Daftar{
    int No;
    int NIM;
    char *Nama;
    int Nilai;
};
// program utamanya
int main(){
    //deklarasi tipe variable yang digunakan
    struct Daftar mhs[10], simpan;
    int i, j,x, t, rata ;
    //membuka file fp1 = hasil penyimpanan data awal
    FILE *fp1;
    fp1 = fopen("Belum-Urut.csv", "w+");
    //membuka file fp2 = hasil penyimapanan data akhir setelah diurutkan
    FILE*fp2;
    fp2 = fopen("Sudah-Urut.csv", "w+");

    rata =0;
    //Looping Pengisian no Absensi mahasiswa
    for (i=0; i<10; i++){
        (mhs[i].No) = (i+1);
    }
    //Penaman Mahasiswa
    mhs[0].Nama = "Yasmin";
    mhs[1].Nama = "Sekar";
    (mhs[2].Nama)= "Arum";
    (mhs[3].Nama)= "Alzana";
    (mhs[4].Nama)= "Sarah";
    (mhs[5].Nama)= "Alyaa";
    (mhs[6].Nama)= "Tsabita";
    (mhs[7].Nama)= "Armaniar";
    (mhs[8].Nama)= "Farhani";
    (mhs[9].Nama)= "Melia";

    //looping pemberian NIM pada Mahasiswa
    for (i=0; i<10; i++){
        (mhs[i].NIM) = (13218060+i);
    }
    //menulis pada file .csv
    fprintf (fp1,"No, NIM, Nama Mahasiswa, Nilai Mahasiswa \n");
    fprintf (fp2,"No, NIM, Nama Mahasiswa, Nilai Mahasiswa \n");

    //Looping pemasukkan nilai random untuk Mahasiswa
    for (i=0; i<10; i++){
        mhs[i].Nilai = rand() % 50 +51;
        rata = (rata + mhs[i].Nilai);
        //mencetak nilai pada layar
        printf("%d ", (mhs[i].Nilai));
        //Menulis nilai dan data pada file fp1
        fprintf(fp1," %d, %d, %s, %d \n",i+1, mhs[i].NIM, mhs[i].Nama, mhs[i].Nilai);
    //
    }
    //perhitungan nilai rata-rata
    rata = (rata/10);

    //Looping untuk mengurutkan Nilai antar mahasiswa
    for (i=0; i<10; i++){
        x = i;  //insiasi nilai awal
        for(j=i+1; j<10; j++){
            if((mhs[j].Nilai)>(mhs[x].Nilai)){ //syarat untuk mengurutkan dari nilai terbesar
                x = j;                         //penyimpanan hasil Urut
            }
        }
        //proses pengurutan
        simpan = mhs[i];
        (mhs[i])= (mhs[x]);
        mhs[x] = simpan;
        //menulis pada file fp2 hasil urut yang dilakukan
        fprintf (fp2,"%d,%d, %s, %d\n", mhs[i].No, mhs[i].NIM, mhs[i].Nama, mhs[i].Nilai);
    }
//menulis nilai rata-rata
fprintf(fp2,"Hasil Rata-Ratanya Adalah %d", rata);
//menutup file yang sudah di buka
fclose(fp1);
fclose(fp2);
return 0;
}
