#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("C:/Users/Raka/Desktop/Latihan 4/tinggi_air.txt", "w");
    fp2 = fopen("C:/Users/Raka/Desktop/Latihan 4/param_t.txt", "w");

    // Deklarasi variabel yang digunakan
    float a_in = 10000;
    float a_out = 3.14*2.5*2.5;
    float grav = 9.8;
    float height = 0;

    float t = 0;

    // Proses untuk mendapatkan visualisasi grafik
    while (height <= 100)
    {
        // Dibawah ini merupakan persamaan perubahaan ketinggian air terhadap waktu
        height = 0.5*((a_out/a_in)*sqrt(2*grav)*t);
        
        fprintf(fp1, "%f\n", height);
        fprintf(fp2, "%f\n", (t/1000));

        t += 0.1;
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}