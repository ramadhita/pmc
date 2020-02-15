// Nama     : Agung Dwi Laksana
// NIM      : 13218034
// Program  : "Menghitung tegangan dari C"
// Tanggal  : 15 Februari 2020

#include <stdio.h>

int main (void)
{
    /* Diketahui R = 10kOhm, C = 1 uF dan V = 5V
     * Ditanyakan Vc(t) ?
     */

    // Deklarasi Variable
    FILE* fp;
    const double C = 0.000001;
    const double R = 10000;
    const double V = 5;
    const double dt = 0.001; // pilih dt yang kecil

    double Vc = 0;
    double t;

    // Open File
    fp = fopen("Realtime RC Step Respon.csv","w");

    // Program output
    fprintf(fp,"Berikut hasil tracking tegangan Vc:\n\n");
    fprintf(fp, "Vc;Time\n"); // Asumsi file csv menggunakan delimiter ";"
    while ( Vc < 4.99999) //Diambil batas sedekat mungkin dengan 5
    {
        Vc = (V*dt + Vc*R*C)/(dt+(R*C));
        //Vc = ((0.005) + (Vc*0.01))/0.011;
        t = t + dt;

        fprintf(fp,"%f;%f\n",Vc,t);
    }


    //Menutup File
    fclose(fp);

    return 0;
}
