// Nama : Yasmin Sekar Arum
// NIM  : 13218063
// Kuis 4


#include <stdio.h>
#include <math.h>

int main (){

    FILE *fp;                       //membuat pointer kke file
    fp = fopen("test.csv", "w");

    //membuat/membuka file test.cvs
    //deklarasi tipe variables
    double V2, t, R, C,V, tmaks;
    double Vs = 5;                  //nilai tegangan input
    R = 10000;                      //resistor yang digunakan pada rangkaian
    C = 0.000001;                   //nilia kapasitor pada rangkaian
    V2 = 0;                         //nilai awal V0
    V = 0;                          //nilai awal V pengganti

    tmaks = ((Vs*R*C)/(Vs-(0.99*Vs)));// perhitunagn nilai t maksimum

    //looping untuk mendapatkan data, dengan delta t yang digunakan 0.001s
    for(t=0; t<tmaks; t=(t+0.001)){
        //perhitungan nilai V(t)
        V = (((Vs/(R*C))+(V2/0.001))/((1/(R*C))+(1/0.001)));
            V2 = V;                   //mengganti nilai V2 dengan hasil perhitungan x
            printf ("%lf, %lf \n",V2, t);       //mencetak nilai pada layar
            fprintf (fp,"%lf,%lf\n",V2, t);    //menyimpan nilai pada excel/tipe file yang tadi di buka
    }
    fclose(fp);                         //menutup file yang dibuka
    return(0);
}
