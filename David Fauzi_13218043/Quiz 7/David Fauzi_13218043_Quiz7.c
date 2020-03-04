#include <stdio.h>
#include <math.h>
void writeToTxt(FILE *fp,double x,double t);
int main()
{
    FILE *fp;
    fp=fopen("datatext.txt","w+");
    double qin=0.001;
    double A=3.14*(2.5*0.01)*(2.5*0.01);
    double qtot=0;
    double Abak=1;
    double vol=0;
    double h=0;
    double vout=sqrt(2*10*h);
    double t=0;
    int cond=0;
     while((vol<1)&&(t<200))
     {
        vout=sqrt(2*10*h);
        qtot=qin-(vout*A);
        vol+=qtot;
        h=vol/Abak;
        printf("t: %lf, vol: %lf, h:%lf , vout: %lf \n",t,vol,h,vout);
        fprintf(fp,"%lf,%lf\n",t,vol);
        t++;
     }    
    return 0;
}
