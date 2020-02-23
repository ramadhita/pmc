/*f1(t) = 1/2(t-1) -> (t=1 sampai t=3)
f2(t) = (t+1) -> (t=-1 sampai t=0)
      = (1-t) -> (t=0 sampai t=1)*/

#include <stdio.h>


float f1_t (float t){ //persamaan f1(t)
    float f1;
    if (t>=1 && t<=3)
    {
        f1=0.5*(t-1);
    }
    else
    {
        f1=0;
    }
    return (f1);
}

float f2_t (float t){ //persamaan f2(t)
    float f2;
    if (t>=-1 && t<=0)
    {
        f2 = t+1;
    }
    else if (t>0 && t<=1)
    {
        f2 = -t+1;
    }
    else
    {
        f2 = 0;
    }
    return (f2);
}

int main(){
    FILE *konv;
    konv = fopen ("konvolusi.txt", "w+");

    float tao,t;
    float f3_t;

    for (t=1; t<=5; t += 0.01) 
    {
        f3_t = 0;
        for (tao=0; tao<=t; tao += 0.01)
        {
            f3_t += (f1_t(tao) * f2_t(t-tao) * 0.01);
        }
        fprintf (konv, "%f %f\n", f3_t, t);
    }
    fclose(konv);


}
