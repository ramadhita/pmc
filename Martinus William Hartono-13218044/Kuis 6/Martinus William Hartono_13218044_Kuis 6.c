//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   20 Februari 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 6

/*Program untuk melakukan konvolusi satu dimensi dari dua buah fungsi*/

#include<stdio.h>

double f1(double t);
double f2(double t);
void convolve (double x, FILE *fp);
void printToFile(FILE *fp, double x, double t);

double f3[1000];
double dt=0.001,t;

int main(void)
{
    FILE *fp;
    fp = fopen("convolution.csv", "w+");

    for(t=0;t<10;t=t+dt)
    {
        convolve(t, fp);
    }

    fclose(fp);
    return(0);
}

void convolve(double x, FILE *fp)
{
    double result=0, bound;
    int i=0;
    for(bound=0; bound<10; bound=bound+dt)
    {
        result = result + f1(bound) * f2(x-bound) *dt;
    }
    f3[i] = result;

    printf("%f, ", t);
    printf("%f\n", f3[i]);
    printToFile(fp, f3[i], t);
    i=i+1;
}

void printToFile(FILE *fp, double x, double t)
{
    fprintf(fp, "%f,", t);
    fprintf(fp, "%f\n", x);
}

double f1(double t)
{
    if (t>1 && t<3)
    {
        return (0.5*t - 0.5);
    }
    else
    {
        return 0;
    };
}

double f2 (double t)
{
    if (t>-1 && t<0)
    {
        return(t + 1);
    }
    else if (t>0 && t<1)
    {
        return(-t + 1);
    }
    else
    {
        return 0;
    };
}
