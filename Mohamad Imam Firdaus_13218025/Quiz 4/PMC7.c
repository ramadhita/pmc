#include <stdio.h>
#include <math.h>

double v_c, v_in, k, R, C, tau, time, dt, t;

int main(void)
{
    R = pow(10,4);
    C = pow(10,-6);
    tau = R*C;
    v_c = 0;
    v_in = 5;
    time = 0;

    dt = 0.00001;
    t = 0;

    FILE *fp;
    fp = fopen("voltage.csv", "w+");

    fprintf(fp,"t,Vc\n");

    while(v_c < 0.95*v_in){
        v_c += dt * (1/tau) *(v_in - v_c);
        t += dt;
        fprintf(fp, "%lf,%lf\n", t, v_c);
    }
    
    fclose(fp);

    return 0;
}