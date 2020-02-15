#include<stdio.h>
#include<math.h>

int main()
{
    FILE *fp;
    fp = fopen("Rangkaian.csv", "w+");

    float dt = 0.00001;
    float vc = 0;
    float vc_sebelum = 0;
    float vs = 5;
    float r = 10000;
    float c = 0.000001;
    float i = 0;
    float t = 0;

    
    vc = ((vs*dt)+(vc_sebelum*r*c))/(r*c+dt);
    
    while(vc-vc_sebelum>=0.00001)
    {
        fprintf(fp, "%f, ",vc);
        fprintf(fp, "%f \n",t);
        t += dt;
        vc_sebelum = vc;
        vc = ((vs*dt)+(vc_sebelum*r*c))/(r*c+dt);
    }

    fclose(fp);
    return(0);
}