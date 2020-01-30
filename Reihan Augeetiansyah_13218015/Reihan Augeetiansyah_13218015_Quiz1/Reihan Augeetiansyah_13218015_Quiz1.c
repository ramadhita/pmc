#include<stdio.h>
#include<math.h>

int main ()
{
    const int Voy = 43.33;
    const int Vox = 25;
    const int g = 10;

    double x,y,time;
    x = 0;
    y = 0;
    time = 0;

    while (y >= 0)
    {
        printf("Posisi x = %f ",x);
        printf("Posisi y = %f\n",y);
        time += 0.01;
        y = (Voy*time) - (0.5*g*time*time);
        if (y >= 0)
            {
                x = Vox*time;
            }
        else
        {
            x = x;
        }
    }
    printf("Jarak Terjauh Sumbu x = %f ",x);
    return(0);
}
