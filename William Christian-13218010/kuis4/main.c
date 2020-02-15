#include <stdio.h>
#include <stdlib.h>

void main()
{   // FILE I/O
    FILE * fp;
    fp = fopen("rc.txt","w");
    // Input
    float vs = 5;
    float res = 10000;
    float cap = 0.00001;
    float time;
    float    i ;
    float v_diff;
    float curr = 5/10000;
    float time_diff = 0.001;
    float vc;
    time = (5*res*cap);
    fprintf(fp, "vc,time\n");
    while (i <= time){
        v_diff = (curr * time_diff)/cap;
        vc += v_diff;
        curr = (5-vc)/res;
        i += time_diff;
        fprintf(fp, "%f,%f\n", vc, i);
    }
    fclose(fp);



}
