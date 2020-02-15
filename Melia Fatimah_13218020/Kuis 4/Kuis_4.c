#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define R 10000
#define C 0.000001
#define Vs 5

int main(){

    FILE *data;

    data = fopen("data.csv", "w");

    double V, V_awal, Vbefore, t=0, t_akhir;
    
    printf("V saat t<0: ");
    scanf("%lf", &V_awal);
    printf("t pengukuran: ");
    scanf("%lf", &t_akhir);
    
    Vbefore = V_awal;
    for (t = 0.01; t <= t_akhir ; t += 0.01){
        V = (Vs*(0.01)+(R*C*Vbefore))/((R*C) + 0.01);
        Vbefore = V;
        printf("%lf\n", Vbefore);
        fprintf (data, "%f,%f\n", Vbefore, t);
    }

    fclose(data);

    return(0);
}