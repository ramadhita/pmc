#include <stdio.h>
#include <math.h>

int bocor (int h) {
  int g = 10;
  return ((1/4)*M_PI*pow(0.05, 2)*sqrt(2*g*h));
}

int main() {
  float t = 0, dt = 0.01, h = 0; // h dalam meter, t dalam sekon

  FILE *fp;
  fp = fopen("/Donny/Donny Marcius_18318009_Quiz 6.txt", "w+");

  while (h < 1) {
    h = (0.001 - bocor(h))*t;
    t += dt;
    fprintf (fp, "%.2f %.10f\n", t, h);
  }

  fclose(fp);
  return 0;
}
