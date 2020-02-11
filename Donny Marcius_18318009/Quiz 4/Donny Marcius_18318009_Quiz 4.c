#include <stdio.h>
#include <math.h>

int main() {
  double Vi = 5, Re = 10000, Ca = 0.000001, Vo0 = 0, Vo1, t, dt = 0.00001, b, c;

  FILE *fp;
  fp = fopen("/Donny/test.txt", "w+");

  b = 1/(Re*Ca);
  c = Vi/(Re*Ca);

  while (Vo1 < 5) {
    Vo1 = (Vo0 + t*c)/(1 + t*b);
    fprintf (fp, "%f,%f\n", t, Vo1);
    Vo0 = Vo1;
    t += dt;
  }

  fclose(fp);
  return 0;
  }
