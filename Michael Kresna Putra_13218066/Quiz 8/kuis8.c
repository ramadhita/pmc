/* Nama     : Michael Kresna Putra
NIM         : 13218066
Tanggal     : 8 Maret 2020
Deskripsi   : Menswap elemen-elemen pada matriks */

#include <stdio.h>
#include <string.h>
#include <math.h>

void swap (int list[10][10]);
void randomize(int list[10][10]);
int i,j,temp;


int main(){
    int list[10][10];
    
    randomize(list); //merandomize list dari batas -10 sampai 10
    printf("Matriks awal: \n");
    printf("\n");
    for (i=0; i<10; i++){ // print matrix
        for (j=0; j<10; j++){
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    swap(list); //melakukan pertukaran
    
    printf("Matriks keluaran :\n");
    printf("\n");
    for (i=0; i<10; i++){ //print matrix
        for (j=0; j<10; j++){
            printf(" %d ", list[i][j]);
        }
        printf("\n");
    }


    return(0);
}

void swap(int list[10][10]){
    for (i=0; i<=9; i++){
        for (j=0; j<=9; j++){
            if (i!=j){ //agar diagonal tidak tersentuh
                if(i+j<9){//agar tidak dilakukan double swap
                    if (i>j){ //pertukaran matrix A dan B
                        temp=list[i][j];
                        list[i][j]=list[i][9-j];
                        list[i][9-j]=temp;
                    }
                    else{ //pertukaran matrix C dan D
                        temp=list[i][j];
                        list[i][j]=list[9-i][j];
                        list[9-i][j]=temp;
                    }
                }
            }
        }
    }
}

void randomize(int list[10][10]){
    for (i=0; i<=9; i++){
        for (j=0; j<=9; j++){
            list[i][j]=((rand()%21)-10);
        }
    }
}

