#include <stdio.h>
#include <stdlib.h>

float f1(float x)
{
    float hasil;
    if ((x>=1) && (x<=3))
    {
        hasil = (0.5*x - 0.5);
    }
    else
    {
        hasil = 0;
    }
    return (hasil);
}
float f2(float y)
{
    float result;
    if ((y>=-1) && (y<=0))
    {
        result = y + 1;
    }
    else if (y>=0 && y<=1)
    {
        result = 1-y;
    }
    else
    {
        result = 0;
    }
    return (result);
}

int main ()
{
    float x = 0;
    float konvolusi;
    float t;
    FILE*fp;
    FILE*fp2;
    fp=fopen("konvolusi.txt","w");
    fp2=fopen("waktu.txt","w");
    while (x<=4)
    {
        konvolusi = 0;
        t = -10;
        while (t>=-10 && t<=10)
        {
            konvolusi = konvolusi + (f1(t)*f2(x-t)*0.01);
            t = t + 0.01;
        }
        fprintf(fp,"%f\n",konvolusi);
        fprintf(fp2,"%f\n",x);
        x = x + 0.01;
    }
    fclose(fp);
}


