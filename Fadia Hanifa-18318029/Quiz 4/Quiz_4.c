#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("Quiz 4.csv", "w");

    double Vs = 5.0;
    double C = 0.000001;
    double R = 10000.0;
    double tmax = 0.1;
    double dt = 0.0001;
    double Vc, t, temp;
    Vc = 0;
    t = 0;
    fprintf(fp, "%lf,", t);
    fprintf(fp, "%lf\n", Vc);
    for(double i = dt; i <=tmax; i+=dt) {
        temp = Vc;
        t = i;
        Vc = ((R * C * dt)/((R * C) + dt)) * ((Vs/(R*C)) + (temp/dt));
        fprintf(fp, "%lf,", t);
        fprintf(fp, "%lf\n", Vc);
    }
    fclose(fp);
}