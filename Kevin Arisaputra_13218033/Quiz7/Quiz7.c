#include<stdio.h>
#include<math.h>

int main () {    
    FILE *fp;
    fp = fopen ("data.txt", "w+");

    double i;
    double h = 0;
    double dt = 0.1;
    double t = 0;
    char t1[8];
    char h1[8];

    for (t=0; t<=200; t+=dt) {
        sprintf (t1, "%.4f ", t);
        fprintf (fp, t1);
        sprintf (h1, "%f\n", h);
        fprintf (fp, h1);

        h += 1E-3*dt - M_PI*6.25E-4*sqrt(2*10*h) * dt;
    }

    fclose (fp);
}