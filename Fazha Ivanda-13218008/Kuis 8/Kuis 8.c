// Fazha Ivanda / 13218008
// EL2008 K02
// Kuis 8

#include <stdio.h>
#include <stdlib.h>



int main(){
    int i;
    int a[10][10];
    int j;
    int temp;


    // Mengisi Nilai Matriks
    for (i=0;i<10;i++){
        for(j=0;j<10;j++){
            a[i][j] = (rand()%(10-(-10)+1)) - 10;
        }
    }

    // Mencetak nilai awal matriks
    for (i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     // Penukaran isi elemen matriks

    for (i=0;i<4;i++)
    {
        for (j=i+1;j<9-i;j+=1)
        {
            temp = a[i][j];
            a[i][j] = a[9-i][j];
            a[9-i][j] = temp;
        }
    }

    for (j=0;j<4;j+=1)
    {
        for (i=j+1;i<9-j;i+=1)
        {   
            temp = a[i][j];
            a[i][j] = a[i][9-j];
            a[i][9-j] = temp;
        }
    }
    
    printf("\n");
    
    // Mencetak matriks setelah penukaran elemen

    for (i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}