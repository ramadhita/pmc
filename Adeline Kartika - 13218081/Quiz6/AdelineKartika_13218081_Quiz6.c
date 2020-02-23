// Nama : Adeline Kartika Tiku Putri
// NIM  : 13218081
// Quiz 6
// Membuat program menghitung konvolusi dengan 2 fungsi

#include <stdio.h>

// membuat fungsi hasil untuk f1(x) yang merupakan garis dari (1,0) ke (3,1)
double f1 (double t){
    double y;
    if ((t >= 1) && (t <= 3)){
        y = (t-1)*(0.5);
    }
    else{
        y = 0;
    }

    return y;
}

// membuat fungsi hasil untuk f2(x) yang merupakan segitiga dari t=-1 menuju t=1 dengan puncak segitiga di 1
double f2 (double t){
    double y;
    if ((t >= -1) && (t <= 0)){
        y = t + 1;
    }
    else if ((t > 0) && (t <= 1)){
        y = 1 - t;
    }
    else{
        y = 0;
    }

    return y;
}

int main(){
    double i, j, x, h, hasil;
    double dt = 0.001; // ketelitian perhitungan konvolusi

    // mendeklarasi file external dan membukanya
    FILE *fp;
    fp = fopen("Konvolusi.csv", "w");

    printf("Detik; Hasil\n");
    fprintf(fp, "Detik; Hasil\n");

    // looping untuk perhitungan konvolusi
    for (i = 0; i < 5; i+=dt){
        hasil = 0;
        for(j = 0; j <= i; j+=dt){
            x = f1(j);
            h = f2(i-j);
            hasil = hasil + (x*h); // rumus konvolusi
        }
        // mengeprint hasil dari hasil konvolusi
        printf("%.3f; %.3f\n", i, hasil); 
        fprintf(fp, "%.3f; %.3f\n", i, hasil);
    }

    // menutup file external
    fclose(fp);

    return 0;
}
