/******************************************************************************

Soal :
Cari f(x) = konvolusi f1(x) dan f2(x)
    f1(x) = {1 <= x <= 3: x/2-1/2, otherwise: 0}
    f2(x) = {-1 <= x < 0: x+1, 0 <= x < 1: 1-x, otherwise: 0}

K. Clement Teja
13218079

*******************************************************************************/

#include <stdio.h>

/* Fungsi f1(x) */
float func_1(float x) // f1(x) = {1 <= x <= 3: x/2-1/2, otherwise: 0}
{   
    if ((x >= 1) && (x <= 3))
    {
        return ((x/2) - (1/2));
    }
    else
    {
        return 0;
    }
}

/* Fungsi f2(x) */
float func_2(float x) // f2(x) = {-1 <= x < 0: x+1, 0 <= x < 1: 1-x, otherwise: 0}
{   
    if ((x >= -1) && (x < 0))
    {
        return (x + 1);
    }
    else if ((x >= 0) && (x < 1))
    {
        return (1 - x);
    }
    else
    {
        return 0;
    }
}

int main()
{   float area = 0;         // f(t)
    float t;
    float tau;              // τ
    float delta_tau = 0.1;  // dτ ≅ Δτ = 0.1

    FILE *fp;

/* Proses dan Display */
    fp = fopen("convolution.txt", "w+");
    fprintf(fp, "time, area\n"); 
    
    for (t = -1; t < 5; t += delta_tau)             // dipilih -1 <= t < 5 karena f(t) baru memiliki nilai saat 0 <= t < 4 
    {                                                                           // sehingga f(t) terlihat jelas pada grafik
        for (tau = 1; tau <= 3; tau += delta_tau)   // dipilih 1 <= τ <= 3 karena f(τ) baru memiliki nilai saat 1 <= t <= 3
        {
            area += func_1(tau) * func_2(t - tau) * delta_tau; // f1(t)*f2(t-τ)*Δτ
        }
        fprintf(fp, "%.1f,%.3f\n", t, area); 
        area = 0;
    }
    fclose(fp);
    return 0;
}