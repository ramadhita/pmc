#include <stdio.h>
#include "konvolusi_lib.h"
/* Yahwista Salomo 13218032
* nama
*/

float x[102], h[102];
float y[203];
// Panjang tiap array



void main() {
  int i = 0, n = 0, k=0;
  float t=(-1);
  while (t <= 4.00){
    if (t<=0) {
        h[i]= (1+t);
        x[i]= 0;
    }
    else if (t>0){
        if (t<=1){
            h[i] = 1-t;
            x[i] = 0;
        }
        else if ((t>1) && (t<=3)) {
            h[i] = 0;
            x[i] = t/2;
        }
    }
    i+=1;
    t+=0.05;
  }
    t=(-1.05)/(0.05);
FILE *fptr;
fptr = fopen("answar.csv","w+");
fprintf(fptr,"t;y\n");
    for (n = 0; t <= 5/(0.05); n++){
        y[n] = 0;
        t+=5;
        if (n>0) fprintf(fptr,"%.3f;%.3f\n",t, y[n-1]);
        for (k=0 ; k <= n ; ++k){
            y[n]+= x[k]*h[n-k];
        }
    }
   fclose(fptr);
}







