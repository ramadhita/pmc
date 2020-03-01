/* Keran 1l/ detik
*   Volume awal 1m3
*   Bocor diameter 5cm didasar tangki
*   
*/ 

#include<stdio.h>
#include <math.h>

int main(void){
    // Q = V/t = A.v
    double gravitasi = 10;
    double phi = 3.1415926;
    double VIn = 0.001; // m3/s
    double tinggi = 0, volume = 0;
    double dV = 0, dt = 0.1;
    double A = 0;
    double Vout = 0;
    double time = 0;
    double R = 0.025;
    double tempV = 0;
    double n_check = 0;

    FILE *fp;

    A = R * R * phi;
    fp = fopen("temp/quiz7.txt", "w");

    while (((roundl(tempV * 100000) != roundl(volume * 100000)) || n_check < 10) && (volume <= 1))
    {
        fprintf(fp, "%lf;%lf \n", time, tinggi);
        /* code */
        tinggi = volume;
        if (n_check < 10)
        {
            /* code */
            n_check++;
        }
        else
        {
            /* code */
            n_check = 0;
            tempV = volume;
        }
        
        Vout = sqrt(2*gravitasi*tinggi);
        dV = (VIn * dt);
        dV -= A * Vout * dt;
        volume += dV;
        time += dt;
    }
    fclose(fp);
    return (0);
}
