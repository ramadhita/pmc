#include <stdio.h>

float x(float x);
float h(float x);
float y(float x);

int main(void)
{
    FILE *fp;
    fp = fopen("convolution.csv", "w+");
    fprintf(fp,"t,y\n");

    float t = 0;
    float dt = 0.001;

    while(t<5){
        fprintf(fp, "%lf,%lf\n", t, y(t));
        t += dt;
    }

    fprintf(fp, "\n%lf",y(2));
    
    fclose(fp);

    return 0;
}

float x(float x)
{
    float a;

    if((x>=1)&&(x<=3)){
        a = (x - 1)/2;
    } else {
        a = 0;
    }

    return a;
}

float h(float x)
{
    float a;

    if((x>=-1)&&(x<0)){
        a = x + 1;
    } else if((x>=0)&&(x<=1)) {
        a = 1 - x;
    } else {
        a = 0;
    }

    return a;
}

float y(float t)
{
    float dt = 0.01;
    float fx;
    float tau;
    
    tau = 0;
    while(tau<5){
        fx += x(tau)*h(t-tau)*dt;
        tau += dt;
    }

    return fx;
}