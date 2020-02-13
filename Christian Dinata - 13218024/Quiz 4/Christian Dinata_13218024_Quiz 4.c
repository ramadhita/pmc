#include<stdio.h>
#define Vi  5
#define r  10000
#define c  0.000001

double f(double vo){
        return ( (Vi - vo)/(r*c) );
    }   

int main(){
    // Ic = C dVo/dt
    // Vo = 1/c * int I dt 
    // I = (Vi - Vo)/R
    FILE *fp;
    fp = fopen("test.txt", "w+");
    
    double hasil;
    double vo = 0;
    double i;
    double dx = 0.0001;


    for (i=0; i<0.1; i+=dx){
        char t2[6];
        char vo2[6];
        vo = vo + ( f(vo) * dx );
        printf("t= %lf s, Vo= %lf V\n", i, vo);
        sprintf (t2, "%lf ", i);
        fprintf (fp, t2);
        sprintf (vo2, "%lf\n", vo);
        fprintf (fp, vo2);
    }
      fclose(fp);
}
