#include <stdio.h>
#define ArrVal 200

int main()
{
    FILE *outfile;
    float resistor = 10000, capacitor = 0.000001, vi = 5, vo[ArrVal] = {0}, delta = 0.001;
    int i;

    vo[0] = 0;
    outfile = fopen("output.txt", "w");
    fprintf(outfile, "%f\n", vo[0]);
    printf("%f\n", vo[0]);

    for ( i = 1; i < ArrVal; i++)
    {
        vo[i] = ((5 + resistor*capacitor*vo[i-1]/delta)/(1+(resistor*capacitor/delta)));
        printf("%f\n", vo[i]);
        fprintf(outfile, "%f\n", vo[i]);
    }
    
    fclose(outfile);
    
    /*

        I = C dVo/dt = (Vi-Vo)/R
            RC dVo/dt + Vo - Vi = 0
            RC ((Vo(t + delta)-Vo(t))/(delta)) + Vo - 5 = 0
            Vo = 5 - RC/delta (Vo(t) - Vo(t-delta))
            Vo + RC.Vo/delta = 5 + RC.Vo(t-delta)/delta
            Vo (1+RC/delta) = 5 + Rc.Vo(t-delta)/delta
            Vo = (5 + RC.Vo(t-delta)/delta) / (1+Rc/delta)
    
        t-a = delta t

        Vo = Vc/(Vc + Vr)
    */
    


    return (0);
}