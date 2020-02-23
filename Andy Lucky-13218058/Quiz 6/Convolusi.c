/*
Quiz 6 : Menghasilkan konvolusi dari 2 persamaan
 f1(x) = ((1/2)*(t-1)).u(t-1).u(3-t)
 f2(x) = (r(t+1)-2r(t-2)).u(t+1).u(1-t)
*/

#include <stdio.h>

double f1(double t);
double f2(double t);

int main(void){
    double X, t;
    double dt = 0.01;
    double dX = 0.001;
    double Value = 0;
    double add = 0;

    FILE *fp;
    fp = fopen("temp/Convo.txt", "w");

    t = 0;
    while (t >= 0 && t <= 5)
    {
        /* code */
        Value = 0;
        for (X = 0; X < t; X+=dX)
        {
            /* code */
            Value += f1(X) * f2(t - X) * dX;
        }

        fprintf(fp,"%lf;%lf \n", t, Value);
        t += dt;
    }
    fclose(fp);
    return (0);
}

double f1(double t)
{
    // Limit bawah 1 dan limit atas 3
    if ((t <= 1) || t >= 3)
    {
        /* code */
        return 0;
    }
    else
    {
        /* code */
        return (t-1)/2;
    }
    
}

double f2(double t)
{
    // Limit bawah -1 dan limit atas 1
    if ((t <= -1) || t >= 1)
    {
        /* code */
        return 0;
    }
    else if (t<0)
    {
        /* code */
        return (t+1);
    }
    else
    {
        /* code */
        return (1 - t);
    }
}