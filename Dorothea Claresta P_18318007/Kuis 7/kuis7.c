/* Kuis 6
Nama        : Dorothea Claresta P
NIM         : 18318007
Deskripsi   : Bak memiliki volume 1m3, ada air masuk 1 liter/detik,
              di bawah bak ada lobang yang diameternya 5 cm.
*/

#include <stdio.h>
#include <math.h>

int main(){
    // Deklarasi variabel
    float Qin, Qout, Abak, Alubang, Vol, h, t;

    Qin = 1000;                     // Debit air masuk
    Abak = 10000;                   // Luas penampang bak
    Alubang = 3.1415*2.5*2.5;       // Luas lubang

    FILE *fp;
    fp = fopen("kuis7.txt", "w+");

    h = 0;
    t = 0;
    // Menghitung ketinggian pada setiap waktu (dihitung dalam satuan cm dan second)
    while ((h<100) &&(t<15)){
        Qout = sqrt(2*980*h);               // kecepatan air keluar dari lubang sqrt(2*g*h)
        Vol = (Qin*t)-(Qout*t*Alubang);     // Vol = Volume masuk - Volume keluar
        h += Vol/Abak;                      
        t += 0.01;
        fprintf(fp, "%f\t%f\n", t, h);
    }

    fclose(fp);
    return 0;
}
