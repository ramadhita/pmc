#include <stdio.h>
#include <math.h>

int main()
{
    double volmasuk, g, r, h, t, luaspenampanglingkaran, debitkeluar, dt, pi, dv;
    int off;

    FILE *filedebit;						//membuat file
	filedebit = fopen("debit.csv","w+");    //membuka file

    g = 10;                                 //g = 10 m/s2
	volmasuk = 0.001;                       //air masuk volumenya 0.001 m3
	r = 0.025;                              //jari-jari = 0.025 m
	debitkeluar = 0;                        //initial state
	pi = 3.14;                              //nilai pi
    dt = 0.5;                               //dt = 0.5
    h = 0;                                  //initial state
    off = 0;                                //initial state

    luaspenampanglingkaran = pi*r*r;        //luas penampang lingkaaran

    while (off==0)                          //iterate
    {
        debitkeluar = sqrt(2*g*h)*luaspenampanglingkaran;       //debit = v*A
        dv = volmasuk - debitkeluar;                            //selisih volume
        if (dv>0.000001)
        {
            h = h + dv*dt;
            t = t+dt;
            fprintf(filedebit, "%.5f;%.5f\n", h, t);            //menulis data ke dalam file
            off = 0;
        }
        else
        {
            off = 1;
        }
    }
    fclose(filedebit);                                          //menutup file
    return (0);
}
