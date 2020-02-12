

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float Vin, Vot, R, C, dv, dt, t, batas;
    FILE *filetxt;
    
    Vin = 5;
    Vot = 0;
    R = 10000;
    C = 0.000001;
    t = 0;
    dt = 0.000001;
    batas = 4.999;
    
    filetxt = fopen("RC loop.txt", "w");
    
    
    
    while (Vot < batas)
    {
        
        dv = ((Vin-Vot)*dt)/(R*C);
        
        printf("%f\n", Vot);
        fprintf(filetxt, "%f,%f\n", Vot, t);
        
        Vot += dv;
        t += dt;
    }
    return 0;
}
