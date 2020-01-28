#include <stdio.h>
#include <math.h>

#define v 50
int main(){
    float x, y;
    float tmax = 2*v*0.5*sqrt(3)/10*1000;
    int t = 10;
    while(t<=tmax){
        x = v*t*0.5/1000;
        y = (v*t*0.5*sqrt(3)/1000) - (0.5*10*t*t/1000000);
        printf("posisi bola pada koordinat (%f, %f)\n", x, y);
        t += 10;
    }
    float xmax = (2*v*v*0.5*sqrt(3))/20;
    printf("Jarak terjauh bola ketika mencapai tanah adalah %f\n", xmax);
}
