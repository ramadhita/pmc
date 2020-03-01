// 		Nama : 	Masrina Vivianna Simanjuntak
//  	NIM  : 18318028
// Deskripsi :Membuat program data 10 mahasiswa mahasiswa yang terdiri dari nama , NIM dan nilai.

#include <stdio.h>
struct Mahasiswa{

    char Nama;

    int Nilai;

    int NIM;

};

double nilairata(struct Mahasiswa n[10]){

    double sum;

    int j;

    for (j=0; j<10; j+=1){

        sum = sum + n[j].Nilai;

    }

    return sum/10;

}

void sortnilai(struct Mahasiswa n[10]){

    int i,j;

    int max;

    struct Mahasiswa temp;

    for (i=0; i<9; i+= 1){

        max= i;                         

        for (j=i+1; j<10; j+= 1){

            if(n[j].Nilai >= n[max].Nilai){               

                max= j; 

            }

        }

        temp = n[max];                     
        n[max] = n[i];

        n[i]= temp;

    }

}