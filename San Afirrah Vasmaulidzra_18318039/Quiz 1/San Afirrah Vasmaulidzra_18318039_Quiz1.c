#include <stdio.h>
#include<math.h>


int main(void){
    double t, posisix, posisiy;
    double tmax, sins, coss, vo, gravitasi;

    sins = 0.866;
    coss = 0.5;
    vo = 50;
    gravitasi = 10;
    t = 0;
    tmax = ((2*vo*sins)/gravitasi);

    while(t<= tmax) {
        posisix = (vo*t*coss);
        posisiy = (vo*t*sins)-((gravitasi*t*t)/2);
        printf("waktu = %lf\n", t);
        printf("posisi (%lf, %lf) \n", posisix, posisiy);
        t = t + 0.01;
    }
    return 0;
}
