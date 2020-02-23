#include<stdio.h>

int main(){
    float dt = 0.1;
    float konvo = 0;
    FILE *fileku;
    fileku = fopen("hasilkonvolusi.csv","w");
    for (float t = 0; t<=4; t+= dt){
        if (t<=2){
            konvo = 0.5*t*t/3;
        }else if((t>2)&& (t<=3)){
            konvo = 0.5*2*1-0.5*(t-2)*(t-2);
        }else{
            konvo = 0.5*(2-t)*(4-t);
        }
        fprintf(fileku, "%f; %f\n", t, konvo);
    }
}
