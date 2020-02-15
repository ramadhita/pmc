#include <stdio.h>
#include <math.h>

int main()
{   
    // Variabel untuk Menyimpan file
    FILE *fp;
    fp = fopen("rangkaian.txt", "w");

    // Deklarasi Variabel
    double vi = 5;
    double vo = 0;
    double C = 0.000001;
    double R = 10000;
    double dx = 0.001;
    double i, fx;
    double t = 0;

    // Variabel Integer ke String
    char tp[7];
    char Vot[7];

    // Mencari turunan dari Vo
    for(i=0; i<= 0.08; i+=dx){
        fx = ((5-vo)/(R*C));
        vo = vo + fx*dx;
        
        t = t + dx;
        
        sprintf (tp, "%lf ", t);  // meng-assign string dengan integer
        fprintf (fp, tp);         // menuliskan t kedalam file
        sprintf (Vot, "%f\n", vo);// meng-assign string dengan integer
        fprintf (fp, Vot);        // menuliskan Vo kedalam file
    }
    fclose (fp);
}
