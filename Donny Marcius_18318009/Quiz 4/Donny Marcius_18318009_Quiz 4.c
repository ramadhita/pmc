#include <stdio.h>
#include <math.h>

int main() {
  double Vi = 5, Re = 10000, Ca = 0.000001, Vo0 = 0, Vo1 = 0, t = 0, dt = 0.001, b, c;

  FILE *fp;
  fp = fopen("/Donny/Donny Marcius_18318009_Quiz 4.txt", "w+");

  c = 1/(Re*Ca);
  b = Vi/(Re*Ca);

  while (Vo1 < 4.99999999) {
    if (t < dt) {
      Vo1 = 0;
    }
    else {
      Vo1 = (Vo0 + dt*b)/(1 + dt*c);
    }
    fprintf (fp, "%f,%f\n", t, Vo1);
    t += dt;
    Vo0 = Vo1;
  }

  fclose(fp);
  return 0;
  }
