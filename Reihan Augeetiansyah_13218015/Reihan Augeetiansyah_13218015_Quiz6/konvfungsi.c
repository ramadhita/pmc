#include<stdio.h>
#include <math.h>

double f1(double t)
{
    if ((t >= 1)&& (t <= 3))
    {
        return((0.5*t)-0.5);
    }
    else
    {
        return (0);
    }
    
}

double f2(double t)
{
    if ((t >= -1)&& (t<=0))
    {
        return(1+t);
    }
    else if ((t >= 0) && (t <= 1))
    {
        return(1-t);
    }
    else
    {
        return(0);
    }  
}

int main()
{

    double t,r;
    double dr,dt;
    double conv;


    FILE*fp;
    fp = fopen("Konvolusi.txt","w+");
    t = 0;
    dt = 0.001;
    dr = 0.001;

    while (t <= 10)
    {
        //integral
        conv = 0;
        for (r = -10; r <10; r+=dr)
        {
            conv += f1(r)*f2(t-r)*dr;
        }
        t += dt;
        printf("%lf ,",t);
        printf("%lf \n",conv);
        fprintf(fp,"%lf ,",t);
        fprintf(fp,"%lf \n",conv);
    }
    fclose(fp);

return(0);
}