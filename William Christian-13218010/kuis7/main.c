#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Preparation and Initialization
    FILE * fp = fopen("heightvstime.csv", "w+");
    float time ;
    double height;
    double tetha;
    double radius = 0.025;
    double tembereng;
    double height_out;
    fprintf(fp, "waktu (s), Tinggi (m)\n");
    for (time = 0; time <= 50; time += 0.1){
        height += 0.0001 ;
        if (height < radius){
            tetha = acos((radius - height)/radius)* 2;
            tembereng = (tetha/2*pow(radius,2)) - (0.5 * pow(radius,2)* sin(tetha));
            height_out = sqrt(2*10*(100-height)) / 10 * tembereng;
        }
        else if (height == radius){
            height_out = sqrt(2*10*(100-height)) / 10 * 0.5 * M_PI * pow(radius,2);
        }
        else {
            tetha = acos((height-radius)/radius) * 2;
            tembereng = (tetha/2*pow(radius,2)) - (0.5 * pow(radius,2)* sin(tetha));
            height_out = sqrt(2*10*height) / 10 *(M_PI*pow(radius,2) - tembereng);
        }
        height -= height_out;
        fprintf(fp, "%f, %f\n", time, height);
    }
    return 0;
}
