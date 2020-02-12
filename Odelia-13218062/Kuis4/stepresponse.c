#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp;
    fp = fopen ("sr.txt", "w+");

    double Vc, deltat, t, i, R, C, Vi ;
    Vc=0;
    t=0;
    R=10000;
    C=0.000001;
    Vi=5;
    deltat=0.001;
    
    for (i=0; i<0.2; i=i+deltat)
    {
        char tv[6];
        char Vcv[6];

        sprintf (tv, " %.4f ", t);
        fprintf (fp, tv);
        sprintf (Vcv, " %f\n", Vc);
        fprintf (fp, Vcv);

        Vc=Vc+((1/(R*C))*(Vi-Vc)*deltat);
        t=t+deltat;
    }

    fclose (fp);
}