/* EL2208 Praktikum Pemecahan Masalah dengan C
*Modul       :
*Percobaan   : 
*Hari/Tanggal: Thursday/20-02-2020
*Nama/NIM    : Oktavianus Irvan Sitanggang/13218071
*Asisten/NIM : 
*Nama File   : main.c
*Deskripsi   : 
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int createRand(int a, int b){
    return (int)(a + (rand()*(b-a)/RAND_MAX));
}
#define no(a) (a).no
#define nim(a) (a).nim
#define nama(a) (a).nama
#define nilai(a) (a).nilai

typedef struct{
    int no;
    int nim;
    char nama[8];
    int nilai
}mahas;

void printMahas(mahas a, FILE *out);
int main(){
    mahas mahasiswa[10];
    FILE *out;
    FILE *in;
    in = fopen("in.txt","w");
    out = fopen("out.txt", "w");
    char arrNama[10][100] = {"Sia", "Lala", "Oir","Papa"
                            ,"Nana", "Gaga", "Caca", "Permen"
                            ,"Chiki", "Chuki"};
    int i = 0;
    for (;i<10;i++){
        strcpy(nama(mahasiswa[i]),arrNama[i]);
        no(mahasiswa[i])=i+1;
        nilai(mahasiswa[i])=createRand(50,100);
        nim(mahasiswa[i]) = 13218000 + (createRand(1,1000));
        printMahas(mahasiswa[i], in);
    }
    int j;
    float val =  0;
    for (i= 0; i < 10; i++){
        val += (float)(nilai(mahasiswa[i]));
    }
    val /= 10;
    printf("rata rata = %f", val);
    mahas mahasBuff;
    for (i =0; i < 10; i++){
        for (j = i; j < 10; j++){
            if (nilai(mahasiswa[i]) < nilai(mahasiswa[j])){
                mahasBuff = mahasiswa[i];
                mahasiswa[i] = mahasiswa[j];
                mahasiswa[j] = mahasBuff;
            }
        }
        printMahas(mahasiswa[i], out);
    }

    fclose(out);
    return 0;
}

void printMahas(mahas a, FILE *out){
    fprintf(out, "%d %d %s %d \n", no(a),nim(a),nama(a),nilai(a) );
}