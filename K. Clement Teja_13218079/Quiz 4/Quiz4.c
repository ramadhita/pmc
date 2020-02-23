/******************************************************************************

Mencari step response rangkaian RC dengan Vi = 5u(t), R = 10kOhm, C = 1uF.

K. Clement Teja
13218079

*******************************************************************************/

#include <stdio.h>

void main()
{//kamus lokal  
    double Vo_t = 0;     // tegangan saat t
    double Vo_to = 0;    // tegangan saat t-delta_t
    float delta_t = 0.001;
    float t = 0;        // waktu
    float R = 10000;    // resistansi
    double C = 0.000001;// kapasitansi
    float Vi = 5;       // tegangan input
    FILE *fp;

//proses dan display
    fp = fopen("data.txt", "w+");

    while (Vo_t < 4.999999)
    {   
        /* Keluaran ke dalam file data.txt disimpan dalam bentuk seperti .csv */
        fprintf(fp, "%.3f,%.5lf\n", t, Vo_t);   
       
        Vo_t = (Vi + ((R*C*Vo_to)/delta_t)) / (1 +((R*C)/delta_t));
        Vo_to = Vo_t;
        t += delta_t;
    }
  
    fclose(fp);
}