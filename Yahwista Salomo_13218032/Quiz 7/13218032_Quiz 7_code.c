#include <stdio.h>
#include <math.h>
//Yahwista Salomo 13218032 QUIZ//

#define pi 3.1415926
#define g 9.8
#define flow 0.001
#define r 0.025

void main(){
float dt = 0.01, t=0, v, h=0, a= pi*r*r, q=0;
FILE *fp = fopen("debit.csv", "w+");
while ((flow-q)>0.000001){
    v = sqrt(2*g*h);
    h += ((flow-q))*dt ;
    q = a*v;
    t += dt;
    fprintf(fp, "%.5f, %.5f \n", t, h);
    }
}
