#include<stdio.h>

float f1 (float t){
    if (t >= 1 && t <= 3) {
        return (0.5*(t-1));
    }
    else{
        return 0;
    }
}

float f2 (float t){
    if (t >= -1 && t <= 0){
        return (t+1);
    }
    else if (t > 0 && t<=1 ){
        return (1-t);
    }
    else {
        return 0;
    }
}

int main(){
    FILE *fp;
    fp = fopen ("quiz5.txt", "w+");
    float i,j, i1;
    float dt = 0.001;
    float f3;
    float len_f3 = 6;

    for (i=0; i<len_f3; i+=dt){
        f3 = 0;
        for (j=0; j<=i; j+=dt){
            f3 += (f1(j) * f2(i-j) * dt);
        }
        fprintf(fp, "%f %f\n", i, f3);
    }
    fclose(fp);
}