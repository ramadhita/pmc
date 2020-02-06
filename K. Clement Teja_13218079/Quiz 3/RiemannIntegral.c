#include <stdio.h>
float IntegralRiemann(float func(float x), float batas_atas, float batas_bawah)
{   
    float sum = 0;
    float n_partisi = 500;                                  // banyaknya partisi
    float step = (batas_atas - batas_bawah) / n_partisi;    // Δx
    int i;
    
    for (i = 0; i < (n_partisi); i++)
    {
        sum += func(step * (i + 0.5)) * step;               //midpoint riemann sum [f(x) * Δx]
    }
    return sum;
}