// Nama : Yasmin Sekar Arum
// NIM  : 13218063
// Kuis 3 : Mencari error dari perhitungan lingkaran menggunakan rumus dan menggunakan pendektan deret rieman
#include <stdio.h>
#include <math.h>

int main(){
    // deklarasi variable yang dugunakan beserta jenisnya;
    double r,r1,Lo,Lo1, Lo2, Delta, Dt, teta;
    int i, t, j;

    // deklarasi nilai awal konstanta yang digunakan
    r = 7;              // nilai jari-jari yang digunakan 
    Lo1 = 0;            // nilai awal untuk looping integral ke 1
    Lo2 = 0;            // nilai awal untuk looping integral ke 2
    r1 = 0;             // niali awal untuk jari jari yang akan dipartisi
    Dt = 0.000001;      // nilai untuk dx dan dteta
    teta = 6.28;
    Lo = (3.14*r*r);    // perhitungan luas lingkaran menggunakan rumus lingkaran biasa

    // looping pertama perhitungan integral r dr dari 0 sampai 7
    // menggunakan pendekatan rieman, dibagi menjadi r*1000.0000, dengan nilai masing masing partisi Dt
    for (i=0; i<(r*1000000); i++){
        Lo1 = Lo1 + (r1* Dt);
        r1 = r1 + Dt;           // nilai r yang selalu bertambah 
    }

    // looping kedua untuk perhitugan integral dteta dari 0 sampai 2 phi 
    // nilai 2 phi = 6.28 rad, sehingga partisinya jadi teta teta*1.000.000
    for (j=0; j<(teta*1000000); j++ )
    {    Lo2 = Lo2 +(Dt);
    }

    Lo2 = Lo2*Lo1;      //nilai akhirnya berdasarkan hasil perkalian integral dt dengan hasil integral sebelumnya
    Delta = Lo-Lo2;     // nilai error yang didapatkan, dengan mengurangkan hasil prehitungan menggunakan rumus dengan pendekatan rieman
    
    printf ("Nilai error perhitungan: %f \n", Delta);   // print error
    printf ("nilai luas dengan menggunakan rumus : %f \n", Lo);     // print hasil perhitungan dengan rumus
    printf ("nilai luas dengan menggunakan rieman : %f", Lo2);        // print hasil perhitungan dengan rieman
    return (0);

}