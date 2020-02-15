//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   11 Februari 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 4

/*Program untuk menghitung nilai tegangan output kapasitor per interval waktu*/

//Kondisi rangkaian pada soal
#include <stdio.h>
#define R 10000
#define C 0.000001
#define Vs 5
#define dt 0.001

int main(void)
{
    double Vo_buffer, Vo[200], time_constant;
    int t;

    //Membuka file 13218044_tegangan_output.csv
    FILE *fp;
    fp = fopen("13218044_tegangan_output.csv", "w+");

    Vo[0] = 0;
    Vo_buffer = 0;
    t = 1;

    printf("%f\n", Vo[0]);

    time_constant = R * C;              //Konstanta waktu yang bernilai RC

    //Looping while dilakukan sampai t=200 karena pada waktu tersebut, tegangan pada output sudah bernilai mendekati 5
    while (t <= 200)
    {
        Vo_buffer = (Vs*dt + Vo_buffer*time_constant) / (dt + time_constant);
        Vo[t] = Vo_buffer;
        printf("%f\n", Vo[t]);
        t = t + 1;
    }

    t = 0;

    //Menulis isi array Vo pada file eksternal .csv
    for (t=0; t<=198; t=t+1)
    {
        fprintf(fp, "%f,", (t*0.001));
        fprintf(fp, "%f\n", Vo[t]);
    }

    fclose(fp);
    return(0);
}
