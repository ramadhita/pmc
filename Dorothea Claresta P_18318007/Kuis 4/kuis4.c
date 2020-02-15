/* KUIS 4
Hari, tanggal   : Selasa, 11 Feb 2020
Nama/NIM        : Dorothea Claresta P/18318007

Membuat grafik output rangkaian rc seri dengan:
Vs = 5 V
R = 10k
C = 1u
*/

#include <stdio.h>
#include <math.h>

int main(){
    // Deklarasi variabel
    double Vs, R, C, t, Vo, Vc, dt;

    // Deklarasi pointer & membuka file
    FILE *fp;
    fp = fopen("kuis4.txt", "w+");  

    // Assign nilai utk tiap variabel
    Vs = 5;
    R = 10000;
    C = 0.000001;
    dt = 0.00001;
    Vc = 0; // Asumsi nilai awal Vc = 0

    // Menghitung tegangan kapasitor untuk setiap waktu
    for(t=0; t<0.07; t+=0.00001) {
        Vo = (((Vc*R*C/dt)+Vs)/((R*C/dt)+1));
        Vc = Vo;
        // Menuliskan t dan Vo pada file
        fprintf(fp, "%lf\t%lf\n", t, Vo);
    }

   fclose(fp);  
}
