#include <stdio.h>
#include <math.h>

// Fungsi f1 yang bernilai x-1 saat 1 <= x <= 3, selain itu bernilai 0
float f1(float x) {
    if ((x >= 1) && (x <= 3)) {
        return (x-1);
    }
    else {
        return 0;
    } 
}

// Fungsi f2 yang bernilai x+1 saat -1 <= x <= 0 dan -x+1 saat 0 <= x <= 1, selain itu bernilai 0
float f2(float x) {
    if ((x >= -1) && (x <= 0)) {
        return (x+1);
    }
    else if ((x > 0) && (x <= 1)) {
        return (-x+1);
    }
    else{
        return 0;
    }
}

int main() {
    //Deklarasi variabel
    float
        x, //domain hasil konvolusi yang diminta soal
        dx = 0.001, //increment pengintegralan
        t, //domain t
        f3; //hasil konvolusi

    //Inisialisasi file eksternal
    FILE *fp_conv;
    fp_conv  = fopen("Convolution.txt","w+");

    //Iterasi pengintegralan
    for (x = 0; x <= 10; x+=dx) {
        //Melakukan konvolusi untuk fungsi f1 dan f2 dalam domain t : 1 <= t <= 3 yang mempunyai nilai, selebihnya 0
        for (t = 1, f3 = 0; t <= 3; t+=dx) {
            f3 += f1(t)*f2(x-t)*dx;
        }
        //Output file external
        fprintf(fp_conv,"%f,%f\n", x, f3);
    }
    fclose(fp_conv);
    return 0;
}

