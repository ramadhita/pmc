#include<stdio.h>
#include<math.h>

float f1 (float x) {
    if ((x>=1) && (x<=3)) {
        return (0.5*(x-1));
    } else {
        return (0);
    }
}

float f2 (float x) {
    if ((x>=-1) && (x<=0)) {
        return (x+1);
    } else if ((x>0) && (x<=1)) {
        return (-x+1);
    } else {
        return (0);
    }
}

int main () {
    FILE *fp;
    fp = fopen ("data.txt", "w+");

    float i, j, c;
    float dt = 0.001;

    for (i=0; i<=5; i+=dt) {
        c = 0;
        for (j=0; j<=i; j+=dt) {
            c += f2(j) * f1(i-j) * dt;
        }
        fprintf (fp, "%f %f\n", i, c);
    }
    fclose (fp);
}