#include <stdio.h>
#include <math.h>

int main() {
  double i, f1 = 0, f2 = 0, m = 0.001, Lr, Ls;

  for (i=0; i<=7; i += m) {
    f1 += m*i;
  }

  for (i=0; i<=2*M_PI; i += m) {
    f2 += m;
  }

  Lr = f1*f2;
  Ls = M_PI*7*7;

  printf ("Luas lingkaran dengan riemann = %f\n", Lr);
  printf ("Luas lingkaran sebenarnya     = %f\n", Ls);
  printf ("Error = %.2f%c", 100*fabs(Lr-Ls), '%');
  return 0;
  }
