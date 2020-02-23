/*  SOAL 2

    Konvolusi dari f1(x) = (x-1)/2, 1 <= x <= 3
                   f2(x) = 1+x, -1 <= x < 0
                           1-x, 0 <= x <= 1

    Hasil konvolusi f3(x) = Σ f1(t)*f2(x-t)
*/

#include <stdio.h>

double f1(double x);
double f2(double x);

void main(){

    // LIBRARY
    FILE *fp;
    double f3;  // result
    double t;   // time
    double x;   // x

    // ALGORITHM

    // open the result file for writing
    fp = fopen("result.csv", "w");

    // print
    fprintf(fp, "x,f3(x)\n");
    
    // convolve

    x = 0;

    // only need to take data from x = 0 to x = 5
    while (x <= 5){

        // reset convolution result
        f3 = 0;
        // time starts from -∞ to ∞, ±100 would suffice
        t = -100;
        while(t < 101){
            // convolve using the formula
            // f3(x) = Σ f1(t)*f2(x-t)
            f3 = f3 + (f1(t)*f2(x-t));
            
            // increment time by 1s
            t = t + 1;
        }

        // print results to the csv file
        fprintf(fp, "%.3lf,%lf\n", x, f3);

        // increment x by 0.01
        x = x + 0.01;
    }

    // close the file
    fclose(fp);

}

// 1st Function fx1 = (x-1)/2, 1 <= x <= 3
//                    0, otherwise
double f1 (double x){
    if (x >= 1 && x <= 3){
        return ((x-1)/2);
    } else {
        return 0;
    }
}

// 2nd Function fx2 = 1+x, -1 <= x < 0
//                    1-x, 0 <= x <= 1
//                    0, otherwise
double f2 (double x){
    if (x >= (-1) && x < 0){
        return (1+x);
    } else if (x >= 0 && x <= 1){
        return (1-x);
    } else {
        return 0;
    }
}