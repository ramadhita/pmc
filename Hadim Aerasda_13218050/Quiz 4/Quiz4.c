#include<stdio.h>
#include<string.h>

double Vco,I;
int i = 0;
double R = 10000;
double C = 0.000001;
double Vs = 5;
double Vc = 0;
double t = 0;
double dt = 0.0005;

int main (){  
    FILE *fp; 
    char *filename = "Data.csv";
   
   /* open for writing */
   fp = fopen(filename, "w+");
   if( fp == NULL ) {
      printf("%s: failed to open. \n", filename);
      return -1;
    } else {
        printf("%s: opened in write mode.\n", filename);
    }

    //Process Data
    I = Vs/R;
    fprintf(fp,"NO,Vc(V),Time(ms)\n");
    while (( (Vc <= 5)&& (Vs - Vc)>=dt)){
        Vco = Vc;
        Vc = Vco + (((Vs-Vco)*dt)/(R*C));
        i ++;
        t = t + dt;
        fprintf(fp,"%d,%.3f,%.3f\n",i,Vc,(t*1000));
    }

    //Close Data
    if( !fclose(fp) )
      printf("%s: closed successfully.\n", filename);
    return 0;
}