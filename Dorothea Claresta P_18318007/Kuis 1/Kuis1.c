/*Soal Kuis 1 Selasa, 21 Januari 2020
Nama: Dorothea Claresta P
NIM : 18318007

Ada bola dengan kecepatan awal Vo = 50 m/s dan sudut awal 60 derajat.
Buat program:
1. Tracking posisi (x,y) setiap 10 ms
2. Hitung jarak ke tanah lagi
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Deklarasi variabel
    float Vox, Voy, Xm, tmax, t, x, y;

    // Menghitung kecepatan awal komponen x dan y
    Vox = 50 * 0.5;
    Voy = 50 * 0.5 * sqrt(3);

    // Menghitung jarak terjauh bola
    Xm = (2*Vox*Voy)/10;

    // Menghitung waktu tempuh bola sampai kembali ke tanah
    tmax = 2 * Voy / 10;

    // Menghitung posisi bola setiap 10 ms
    t = 0;
    while (t <= tmax)
    {
        x = Vox * t;
        y = (Voy * t) - (0.5 * 10 * t * t);                                                                                                                                                                                                                                                                                          

        printf("Pada t = %.2f, posisi bola adalah x = %.2f, y = %.2f\n", t, x, y);

        t = t + 0.01; 
    }
    
    printf("Jarak bola sampai ke tanah lagi adalah %.2f meter.\n", Xm);

    return 0;

}
