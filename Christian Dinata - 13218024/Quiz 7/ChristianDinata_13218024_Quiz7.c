#include<stdio.h>
#include<math.h>


void main(){
    float plus,minus;
    float debit = 0.001;//m^3/s
    float vol_c = 0;
    float r= 0.025; //m
    float h1 = 0;
    float t = 0;
    FILE *fp;
    fp = fopen("Hasil.txt", "w+");
    plus = debit *0.1;
    minus = M_PI*r*r*sqrt(2*9.8*h1)*0.1;
    while( t <100);
        vol_c += plus - minus;
        h1 = vol_c;
        plus = debit*0.1;
        minus = M_PI*r*r*sqrt(2*9.8*h1)*0.1;
        fprintf(fp,"%f %f\n",t,h1);
        t+=0.1;
    }
    fclose(fp);
}