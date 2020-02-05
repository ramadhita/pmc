
#include <stdio.h>
#include <math.h>
#define PI 3.1415



int main()
{
    int jml_partisi, r;
    double luas, luas_partisi, fx, i, luas_manual, error;
    
    jml_partisi = 700;
    
    r = 7;
    luas = 0;
    
    luas_manual = PI*r*r;
    
    for (i=0;i<=700;i+=1)
    {
        fx = sqrt(pow(7,2)-pow((i/100),2));
        luas_partisi = fx*0.01;
        luas = luas + luas_partisi;
    }

    luas = luas*4;
    
    printf("Luas lingkaran dengan r=7 menggunakan riemann kiri = %f \n", luas);
    printf("Luas pi(r)^2 = %f \n", luas_manual);
    
    error = ((luas-luas_manual)/luas*100);
    
    printf("error = %f", error);
    return 0;
}
