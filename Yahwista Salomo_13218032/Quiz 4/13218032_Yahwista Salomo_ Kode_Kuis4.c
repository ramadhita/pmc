#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fp;
    fp = fopen("datis.csv", "w+");
    float v=5,vc=0,t=0,dt=0.0001,i=0.0005,c=0.000001,dvc=0,r=10000;
    while (vc <= 4.96){
        printf(fp,"%f,%f\n", t, vc);
        dvc=i*dt/c;
        vc+=dvc;
        i=(v-vc)/r;
        t += 0.01;
    }
}
