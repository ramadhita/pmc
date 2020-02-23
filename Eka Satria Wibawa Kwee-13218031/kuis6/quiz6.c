#include <stdio.h>

float getF1(float time){
    if(time > 3 || time < 1){
        return 0;
    }else{
        return (time-1)/2;
    }
}

float getF2(float time){
    if(time >=-1 && time <= 0){
        return time+1;
    } else if(time > 0 && time <=1){
        return 1-time;
    }else{
        return 0;
    }
}

int main(){
    double dt = 0.0001;
    double k,n,y;
    double pos_x,pos_h,stop;
    double length_x = 3;
    FILE *output;
    stop = 0;
    n = 0;
    output = fopen("output.csv","w");
    fprintf(output,"t,y\n");
    for(n = 0; n < 6;n += dt){
        y = 0;
        for(k=0;k<length_x;k+=1){
            pos_x = k;

            pos_h = n-k;
            y += getF1(pos_x)*getF2(pos_h);
        }
        fprintf(output,"%lf,%lf\n",n,y);
    }
}