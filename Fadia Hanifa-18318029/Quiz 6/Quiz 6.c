// Fadia Hanifa S. / 18318029

#include <stdio.h>
#include <math.h>

double f1(double x){                    // fungsi f1
    if ((x >= 1) && (x <= 3)){          // pada 1 <= x <= 3 fungsi bernilai x - 1
        return (x - 1);
    }
    else {                              // otherwise 0
        return 0;
    }
}

double f2(double x){                    // fungsi f2
    if ((x >= -1) && (x <= 1)){         // fungsi memiliki nilai pada -1 <= x <= 1
        if ((x >= 0) && (x <= 1)){      // ketika 0 <= x <= 1 fungsi bernilai 1 - x
            return (1 - x);
        }
        else {                          // ketika -1 <= x <= 0 fungsi bernilai x + 1
            return (x + 1);
        }
    }
    else {                              // otherwise 0
        return 0;
    }
}

int main(){
    // Persiapan file external
    FILE *fp = fopen("Quiz 6.csv", "w+");     // membuka atau membuat file "Quiz 6 .csv"

    // Deklarasi Variabel
    int b = 10;                         // batas atas x
    int a = 0;                          // batas bawah x
    double d = 0.01;                    // increment dari x
    double x, t, y;                     // deklarasi x dan t sebagai index looping dan y sebagai placeholder nilai f3

    fprintf(fp, "x,f3\n");              // menge-print judul tabel pada csv

    // Proses Konvolusi
    for (x = a; x <= b; x += d){        // looping dari batas bawah a sampai batas atas d dengan increment d
        y = 0;                          // mereset nilai y menjadi 0
        for (t = 1; t <= 3; t += d){    // looping 1<=t<=3 dengan increment d. Diluar batas tersebut, f1(t) = 0
            y += f1(t) * f2(x-t) * d;   // konvolusi dengan rumus f3 = sum(f1(t) * f2(x-t) * d)
        }
        fprintf(fp, "%lf,", x);         // memasukan nilai x dan y/f3 kedalam file
        fprintf(fp, "%lf\n", y);
    } 
    fclose(fp);                         // menutup file
    return 0;
}