#include <stdio.h>

#define sin60 0.866
#define cos60 0.5

int main(){
    float velo, posX, posY, dist, time = 0;

    scanf("%f", &velo);

    while (1){
        posX = (0.01 * time) * velo * cos60;
        posY = ((0.01 * time) * velo * sin60) - (0.5 * 10 * (0.01 * time) * (0.01 * time));
        
        if (posY < 0){
            break;
        }

        printf("%0.f0 ms X = %.03f Y = %0.3f\n", time, posX, posY);
        time++;
    }

    dist = velo * velo * sin60 / 10;
    printf("Jarak terjauh adalah %0.3f", dist);

    return 0;
}