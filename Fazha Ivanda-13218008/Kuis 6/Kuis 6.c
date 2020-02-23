// Fazha Ivanda 13218008
// EL2008 K02

#include <stdio.h>

int main(){
    // Variabel yg digunakan 
    double x[501];
    double h[501];
    double y[501];
    int i,j;
    FILE *fp;
    char *filename = "konvolusi.txt";

    // Memasukkan nilai fungsi pertama x(t) dengan dt = 0.01
    for (i=0;i<301;i++){
        if (i<=100){
            x[i] = 0;
        }
        else{
            x[i] = 0.01 * (i-1) / 2;
        }
    }
    // Memasukkan nilai fungsi kedua h(t) dengan dt = 0.01
    for (i=0;i<201;i++){
        if (i<= 100){
            h[i] = 0.01 * i;
        }
        else{
            h[i] = 0.01 * (200-i);}
    }

    // Mengisi nilai array x dan h yang tidak memiliki nilai fungsi dengan 0
    for (i=302;i<501;i++){
        x[i] = 0;
    }
    for (j=202;j<501;j++){
        h[j] = 0;
    }

    // Menghitung nilai integral konvolusi dan memasukkannya ke array y
    for(i=0;i<501;i++){
        y[i] = 0;
        for (j=0;j<=i;j++){
            y[i] = y[i] +0.01 * (x[j]*h[i-j]);
        }
    }
    // Membuka file
    fp = fopen(filename, "w");
    // Mencetak hasil konvolusi ke file
    for (i=0;i<501;i++){
        printf("%lf \n",y[i]);
        fprintf(fp, "%lf\n",(0.01*i));
    }
    for (i=0;i<501;i++){
        fprintf(fp, "%lf\n",y[i]);
    }
    // Menutup file
    fclose(fp);

    
}

