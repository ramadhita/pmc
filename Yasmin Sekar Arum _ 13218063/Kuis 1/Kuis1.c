/*  Nama    : Yasmin Sekar Arum
    NIM     : 13218063
    Quis 1, 21 Januari 2020 */


#include <stdio.h>
#include <math.h>
#define Vo 50           // nilai kecepatan awalnya
#define teta 1.047      // nilai sudut dalam radian (60)
#define g 10            // nilai perceptan gravitasi yang digunakan (m/s2)

int main() {

    double hasilx, hasily, hasilA, hasily0, waktu, waktuakhir; // tipe variable yang digunakan

    waktu = 0;                              //nilai waktu pada awal mulai
    waktuakhir = 2*Vo*1000*sin(teta)/g;    //perhitungan waktu maksimum yang ditempuh hingga y = 0

    while (waktu <= waktuakhir){                            //bagian looping untuk perhitungan posisi setiap 10 ms, saat belum jatuh
        printf ("Pada saat waktu %f s \n", waktu/1000);     // mencetak waktu saat ini
        hasilx =  Vo*cos(teta)*waktu/1000;                 //proses perhitungan jarah sumbu x
        printf ("   Jarak sumbu x ialah :%f m \n", hasilx); 
        hasily = ((Vo*sin(teta)*waktu/1000)-(0.5*g*waktu*waktu/1000000)); // proses perhitungan jarak sumbu y
        printf ("   Jarak sumbu y ialah :%f m \n", hasily);
        waktu = waktu + 10; // proses penambahan waktu (dalam satuan ms)

    }

     if (waktu>= waktuakhir){ // proses saat sudah melebihi waktu maksimum
         printf ("jarak tempuhnya %f m", g*Vo*cos(teta)*waktuakhir/10000); // proses menampilkan dan perhitungan jumlah jarak sumbu x yang ditempuh
    }
      return (waktu);
}


