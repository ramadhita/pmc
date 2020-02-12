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
   FILE *time;
   fp = fopen("test.txt", "w+");
   time = fopen("time.txt", "w+");

    while(v_c < 0.95*v_in){
        v_c += dt * (1/tau) *(v_in - v_c);
        t += dt;
        fprintf(fp, "%lf\n",v_c);
        fprintf(time, "%lf\n",t);
    }
    
    fclose(fp);
    fclose(time);

    return 0;
}