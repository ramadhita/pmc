// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		:


//KUIS 4 Mencari tegangan output pada rangkaian RC
#include <stdio.h>

int main() {

double vi, r, c, vo; //mendeklarsikan variable
double deltat, vo_awal, t ;

FILE *fp;
fp =fopen("rangkaian.txt", "w+"); //membuat file untuk ditulis kedalamnya

vi = 5;             //tegangan sumber, kapasitor, resistor dan perubahan waktu
c = 0.000001;
r = 10000;
deltat = 0.001;

vo_awal  = 0;
vo = 0;
t=0;


while (vo < 4.999)
{
   vo = ((vi*deltat) + (r*c*vo_awal))/((r*c)+deltat);   //rumus yang diturunkan dari persamaan differensial
   vo_awal = vo;
   fprintf(fp, "%.3lf,%.3lf\n", t, vo);                        //menuliskan besarnya tegangan setiap waktu pada file
   t+=0.001;
}

    fclose(fp);                  //menutup file
    return 0;
}
