/*Nama         :Michael Kresna Putra
NIM           :13218066
Tanggal       :22 Februari 2020

/*Program untuk menghitung hasil konvolusi dan memplot grafiknya pada file csv*/
#include<stdio.h>
#include<string.h>
#include<math.h>

double f1(double t);
double f2(double t);
double konvolusi(double i, double j);
double dt=0.001;

double f1(double t){
    if (t>1 && t<3){
        return ((0.5*t)-0.5);
    }
    else{
        return 0;
    }
}

double f2(double t){
    if (t>-1 && t<0){
        return(t+1);
    }
    else if (t>0 && t<1){
        return (1-t);
    }
    else{
        return 0;
    }
}

double konvolusi(double i, double j){
    double f3;

    f3=f1(j)*f2(i-j)*dt;
    return(f3);
}

int main(){
    FILE *fptr;
    fptr = fopen("konvolusi.csv","w+");
    double i,j;
    double f3;
    
    
    for (i=0;i<5;i+=dt){
        f3=0;
        for (j=0;j<=i;j+=dt){
            f3+=konvolusi(i,j);
        }
        fprintf(fptr,"%lf,",i);
        fprintf(fptr,"%lf\n",f3);
    }
    fclose(fptr);
    return(0);
}