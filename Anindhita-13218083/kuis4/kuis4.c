// Kuis 4
// Anindhita N.
// 13218083

#include <stdio.h>

int main(){
    // setup file to write
    FILE *fp;
    fp = fopen("kuis4.txt", "w+");

    // declare and assign
    float vo = 0;
    float vs = 5;
    float r = 100000;
    float c = 0.000001;
    float delta = 0.0005;

    // print t, vo
    for (int i = 0; i < 1000; i++){
        // dv = slope
        float dv = (vs - vo)/(r * c);
        vo +=  dv * delta;
        float t = delta * i;
        printf("%f: %f\n", t, vo);
        fprintf(fp, "%f,%f\n", t, vo);
    }

    fclose(fp);
    return 0;
}
