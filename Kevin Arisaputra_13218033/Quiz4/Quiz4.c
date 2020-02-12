#include<stdio.h>

float f (float x) {
    float R = 1E+4;
    float C = 1E-6;
    return ((5-x)/(R*C));
}

int main () {
    FILE *fp;
    fp = fopen ("data.txt", "w+");
    
    double i;
    double Vo = 0;
    double dx = 0.0001;
    double t = 0;
    char t1[8];
    char Vo1[8];

    for (i=0; i<=0.1; i+=dx) {
        sprintf (t1, "%.4f ", t);
        fprintf (fp, t1);
        sprintf (Vo1, "%f\n", Vo);
        fprintf (fp, Vo1);

        t = t + dx;
        Vo = Vo + f(Vo)*dx;
    }

    fclose (fp);
}