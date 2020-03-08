#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int A[10][10];
    int i,j,temp;
    FILE *fp;
    char *filename = "data.csv";
    //Random Nilai
        for (i = 0; i < 10; i++) { 
            for (j = 0;  j< 10; j++){
                A[i][j] = (rand() % (10 - -10 + 1)) + -10;
            }
        }
    //Read File
        fp = fopen(filename, "w");
        if( fp == NULL ) {
            printf("%s: failed to open. \n", filename);
            return -1;
        } 
        else {
            printf("%s: opened in write mode.\n", filename);
        }
    //Output Matriks Awal
        fprintf(fp,"Matriks A sebelum ditukar\n");
        for (i = 0; i < 10; i++){
            fprintf(fp,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",A[0][i],A[1][i],A[2][i],A[3][i],A[4][i],A[5][i],A[6][i],A[7][i],A[8][i],A[9][i]);
        }
    //Menukar Isi Matriks
        for (i=0;i<10;i++){
            for (j=0;j<10;j++){
                if((i!=j)&&((i+j)<9)){
                    if(j<i){
                        temp = A[i][j];
                        A[i][j] = A[i][9-j];
                        A[i][9-j] = temp;
                    }
                    else{
                        temp = A[i][j];
                        A[i][j] = A[9-i][j];
                        A[9-i][j] = temp;
                    }
                }
            }
        }
    //Ouput Matriks yang sudah ditukar
        fprintf(fp,"Matriks A setelah ditukar\n");
        for (i = 0; i < 10; i++){
            fprintf(fp,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",A[0][i],A[1][i],A[2][i],A[3][i],A[4][i],A[5][i],A[6][i],A[7][i],A[8][i],A[9][i]);
        }
    //close data
        if( !fclose(fp) ){
            printf("%s: closed successfully.\n", filename);
        }
return 0;
}