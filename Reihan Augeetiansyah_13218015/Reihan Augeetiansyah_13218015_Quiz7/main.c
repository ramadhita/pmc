#include <stdio.h>
#include <math.h>

int main()
{
    float h = 0;
    float d = 0.05;
    float dt = 0.1;
    float luas;
    float Q_in = 0.001;
    float Q_out;
    float time = 0;
    float g = 9.8;
    int stop;
    FILE*fp = fopen("Grafik.txt", "w+");
    luas = M_PI*(d/2)*(d/2);
    while (stop == 0)
    {
        Q_out = luas*sqrt(2*g*h);
        h += (Q_in - Q_out)*dt;
        time += dt;
        printf("%f, %f \n", time, h);
        fprintf(fp,"%f, %f \n", time, h);
        if ((Q_in - Q_out) <= 0.000001)
        {
            stop = 1;
        } 
        else{
            stop = 0;
        }
        printf("%f \n", h);
    }

    fclose(fp);

    return(0);
}

