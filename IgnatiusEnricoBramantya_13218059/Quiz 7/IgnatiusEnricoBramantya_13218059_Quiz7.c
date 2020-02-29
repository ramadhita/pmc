//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Quiz 7 - Tabung Air Bocor
//Date  : Selasa, 25 Februari 2020

#include <stdio.h>
#include <math.h>

//Parameter dibawah merupakan soal dari yagn diketahui
#define diameter 0.5     //0.5 dm
#define volumedasar 1000    
#define pi 3.14    //batas yang ditetapkan di soal
#define gravitasi 1000 //dm2

void main(void) {

    FILE *fpt;
    //fileoutput
    fpt = fopen("grafik-tinggi-waktu.csv","w+");
    double   debitbocor,kecepatanbocor,volume, tinggi, waktu, luaslubang, debitlubang, debitair,luaspermukaan; 
    
    //deklarasi variabel
    int i;
    tinggi = 0;
    luaslubang = pi * diameter/2 * diameter/2 ; //dm2
    luaspermukaan =  10 * 10; //pi 5dm * 5dm
    debitair = 1; //dm3/t
    volume = 0; 
    //Semua satuan dalam dm
    i =0;
    //Looping pengukuran ketinggan air tiap waktu pada tabung
    while((volume<=1000) && (i<5000))
    {
        kecepatanbocor = sqrt(2 * 10 * tinggi); //dm2 * dm   
        debitbocor = luaslubang * kecepatanbocor ; //dm2 * dm/s
        volume += (debitair-debitbocor); //(dm3 - dm3)
        tinggi = volume / luaspermukaan; //dm3/dm2
        printf("Kecepatan Bocor (%lf) Volume : %lf, Tinggi : %lf, Waktu : %d \n", kecepatanbocor, volume, tinggi, i);
        fprintf(fpt,"%d,%lf\n", i, tinggi);
        i++;
    }
    //Total waktu yang dibutuhkan untuk mengisi air
    printf("\nWaktu yang dibutuhkan : %d sekon \n", i);
    fprintf(fpt,"\n Waktu yang dibutuhkan : %d sekon\n", i);
    printf("---------------------------------------------------------------\n");
    printf("Debit pengisian menjadi konstan 3000 sekon karena debit input menjadi sebanding dengan debit bocor setelah kira - kira 3000 sekon \n", i);
    printf("Tabung tidak akan pernah terisi hingga penuh \n", i);
    printf("---------------------------------------------------------------\n");

    fclose(fpt);

   return; 
}
   
