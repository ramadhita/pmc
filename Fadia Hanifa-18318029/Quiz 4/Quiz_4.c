#include <stdio.h>
int main() {
    // inisiasi file
    FILE *fp;           
    fp = fopen("Quiz 4.csv", "w");                                          // open or create csv file
    
    // inisiasi variabel
    double Vs = 5.0;
    double C = 0.000001;
    double R = 10000.0;
    double tmax = 0.1;
    double dt = 0.0001;
    double Vc, t, temp;
    
    // Hitung Vc
    Vc = 0;                                                                 // Vc awal diketahui 0
    t = 0;                                                                  
    fprintf(fp, "%lf,", t);                                                 // input data ke file external
    fprintf(fp, "%lf\n", Vc);
    for(double i = dt; i < = tmax; i += dt) {                               // looping dari t = dt sampai t = tmax
        temp = Vc;                                                          // menyimpan data Vc(t-dt)                                            
        t = i;                                                              // menyimpan data t
        Vc = ((R * C * dt)/((R * C) + dt)) * ((Vs/(R*C)) + (temp/dt));      // perhitungan Vc
        fprintf(fp, "%lf,", t);                                             // input data ke file 
        fprintf(fp, "%lf\n", Vc);
    }
    fclose(fp);                                                             // menutup file
    return(0);
}
