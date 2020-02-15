#include<stdio.h>
#define dt 0.0001

float v(float t)
{
    float c;
    if (t <= 0)
    {
        c = 0;
    }
    else
    {
        c = (v(t-dt) + ((5/(10*0.00001))*dt))/(1+(1/(10*0.00001)*dt));
    }
    return c;
}

void main()
{
    float t;
    FILE*infile;
    infile = fopen("tran.csv","w");
    for (t = 0; t < 0.0023; t+=dt)
    {
        fprintf(infile,"%f, %f\n", t, v(t));
    }
    fclose(infile);
}
