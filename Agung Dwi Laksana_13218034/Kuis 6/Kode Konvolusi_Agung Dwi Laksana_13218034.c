// Nama     : Agung Dwi Laksana
// NIM      : 13218034
// Program  : Konvolusi 2 buah fungsi

#include <stdio.h>

// Deklarasi variabel global
float t[102], h[102];
FILE *fp;
int i, j;
//Array menyimpan waktu, f1, f2 dan hasil
    /*Diketahui fungsi sebagai berikut :
        f1 = 0.5t - 0.5, 1 < t < 3

        f2 =    t + 1, -1 < t < 0
                1 - t,  0 < t < 1
    */

// Prototype fungsi
float f1(float t);
float f2(float t);


// Program utama
int main(void)
{
    // Get_time
    // Konvolusi terjadi pada detik ke 1 - 5
    t[0] = -1.08; // satuan detik
    for (i = 1; i<102; i++)
    {
        t[i] = t[i-1] + 0.08;
    }

    // Get_diskrit dari fungsi
    for (i = 0; i<102; i++)
    {
        for (j = 0; j<101; j++)
        {
            h[i] = h[i] + (f1(t[j])*(f2(t[i] - t[j])));
        }
    }

    // Open file
    fp = fopen("Data konvolusi.csv","w");

    // Cetak data ke file
    fprintf(fp, "DATA KONVOLUSI FUNGSI\n\n");
    fprintf(fp, "Fungsi_1; Fungsi_2; Hasil Konvolus; Waktu\n");
    for (i = 0; i < 102; i++)
    {
        fprintf(fp, "%.2f;%.2f;%.2f;%.2f\n", f1(t[i]), f2(t[i]), h[i], t[i]);
    }

    // tutup file
    fclose (fp);
    return 0;
}


// Definisi fungsi
float f1(float t){
    if ((t>1)&&(t<3))
        return ((0.5*t)-0.5);
    else
        return 0;
}

float f2(float t){
    if ((t>-1)&&(t<0))
    {
        return (t+1);
    } else if ((t>0)&&(t<1))
    {
        return (1-t);
    } else
    {
        return 0;

    }
}

