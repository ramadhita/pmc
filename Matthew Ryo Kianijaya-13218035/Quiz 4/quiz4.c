#include <stdio.h>

void main(){

    // LIBRARY
    double vi = 5; // input voltage = 5 V
    double c = 0.000001; // capacitance = 1 uF
    double r = 10000; // resistanse = 10 kOhm
    const double deltat = 0.0001; // delta time
    double t = 0; // time
    double vo = 0; // output voltage

    FILE *fp; // declare file
    fp = fopen("Data.txt", "w"); // open file to write data

    while(t < 0.2){
        
        vo = (deltat*vi+r*c*vo)/(r*c+deltat); // vo from formula

        // print vo
        fprintf(fp, "%lf\n", vo);

        // increment time by 0.1 ms
        t = t + deltat;
    }

    // close the file
    fclose(fp);

}