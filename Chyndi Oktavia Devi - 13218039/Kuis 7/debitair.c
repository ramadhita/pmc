/*Nama  : Chyndi Oktavia
NIM : 13218039*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    FILE *fp;
    fp=fopen("DebitAir.csv", "w");
    fprintf(fp,"waktu;tinggi;Vskrng\n");
    float A, r, phi, t, h, Vskrng, debit_bocor;
    int Qmasuk;
    Qmasuk=1;//1 liter per sekon
    phi=22/7;
    r=0.25;
    A=phi*r*r;

//    waktupenuh=V/debit;
    for(h=0;h<10;h++){
        while(t>0 && Vskrng<1000){
        h = Vskrng/A;
        t=t+1;
        debit_bocor=(sqrt(2*10*h))*A;
        Vskrng=Vskrng-debit_bocor+Qmasuk;
        fprintf(fp,"%.2f; %.2f; %.2f \n", t, h, Vskrng);
        }

    }
    fclose(fp);
    return 0;
}


