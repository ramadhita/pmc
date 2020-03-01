#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    float conv=0;
    float x,t;

    FILE *konvolusi;

    konvolusi = fopen("konvolusi.csv", "w");

    for (x = 0; x <= 5; x+=0.01){
        conv = 0;
        for (t = 0; t <= 10; t +=0.01){
            if ((t>=1)&&(t<=3)) {
                if ((x-t)<=0 && (x-t)>=-1){
                    conv += ((0.5*t)-0.5)*((x-t)+1);
                }
                else if ((x-t)>0 && (x-t)<=1){
                    conv += ((0.5*t)-0.5)*(1-(x-t));
                }            
            else{
                conv += 0;
                }
            }
        }
    fprintf (konvolusi, "%f\n", conv);
    }
    
    fclose(konvolusi);
    return(0);
}