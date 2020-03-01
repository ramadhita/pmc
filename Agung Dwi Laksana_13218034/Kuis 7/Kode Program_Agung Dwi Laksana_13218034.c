// NAMA     : Agung Dwi Laksana
// Nama     : Agung Dwi Laksana
// NIM      : 13218034
// Deskripsi: Program menampilkan hasil tracking volume dari pipa yang diisi dan bocor

#include<stdio.h>
#include<math.h>

// Diketahui, suatu bak berukuran 1m x 1m x 1m mula-mula kosong
//              diisi dengan keran dengan debit 1 liter/detik
//              bagian bawah bak berlubang dengan diameter 50cm

// Deklarasi variable global
float Vin, Vout; // volume akhir dari bak
float Vt = 0;
float speed;
float debit = 0;
float t;
const float dt = 0.01;
int Steady; // Boolean
FILE* fp;

int main(void)
{
    // Write File
    fp = fopen("Tracking Volume Bak bocor.csv","w");
    fprintf(fp,"DATA TRANCKING VOLUME BAK BOCOR\n");
    fprintf(fp,"Volum(m^3);Time(s)\n");

    // Hitung Volume Input:
    Vin =  0.001*(dt); // Vt = Vo + dV*dt

    do
    {
    // Volume Output
        speed = sqrt(2*10*Vt);  // (2*g*h)^0.5 dengan h == volum
        debit = (0.05*0.05*3.14)*speed; // A x speed
        Vout = debit*dt;

    // Volume akhir
        // Vt = Vo + Vin - Vout
        Vt = Vt + Vin - Vout;
        t = t + dt;


    // Write to file
        fprintf(fp, "%f;%.3f\n", Vt,t);

        // Steady State Chceker
            // -> Volume bak dikatakan dalam kondisi setimbang apabila
            //    pertambahan volume bak semakin mengecil
        if ((Vin - Vout)<0.000000001)
        {
            Steady = 1;
        } else Steady = 0;

    } while ((Vt < 1)&&(Steady == 0));
}
