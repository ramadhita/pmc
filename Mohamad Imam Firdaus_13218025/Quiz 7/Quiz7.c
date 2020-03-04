#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void){
    double t = 0;
    double dt = 0.001;
    double v = 0;
    double dv;
    double h = 0;
    double debit_keran = 0.001;
    double dia_lubang = 0.05;
    double luas_lubang = M_PI * dia_lubang * dia_lubang / 4;
    double g = 10;
    double luas_bejana = 1;

    printf("Mulai");

    FILE *fp;
    fp = fopen("volume.csv", "w+");

    fprintf(fp,"t,dv,V\n");

    do {
        h = v / luas_bejana;
        dv = (debit_keran - sqrt(2*g*h*luas_lubang*luas_lubang)) * dt;
        v += dv;
        t += dt;
        fprintf(fp, "%.14Lf,%.14Lf,%.14Lf\n", t, dv, v);
    }while(dv > 1e-12);
    
    printf("\nSelesai");

    fclose(fp);

    return 0;
}