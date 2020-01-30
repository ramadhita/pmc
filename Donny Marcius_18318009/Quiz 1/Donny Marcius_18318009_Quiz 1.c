#include <stdio.h>
#include <math.h>

int main() {
  double t = 0, sdt = 60, v0 = 50, x = 0, y = 0;

  x = v0 * cos(sdt * M_PI/180) * t;
  y = v0 * sin(sdt * M_PI/180) * t - 5 * pow(t, 2);

  while (y >= 0) {
    printf ("Posisi saat t=%.2f s: (%.2f, %.3f)\n", t, x, y);
    t += 0.01;
    x = v0 * cos(sdt * M_PI/180) * t;
    y = v0 * sin(sdt * M_PI/180) * t - 5 * pow(t, 2);
  }

  printf ("Posisi saat t=%.2f s: (%.2f, %.3f)\n\n", (2*v0*sin(sdt*M_PI/180)/10), (pow(v0, 2)*sin(2*sdt* M_PI/180)/10), 0);

  printf ("Jarak terjauh = %.2f saat t = %.2f s.", (pow(v0, 2)*sin(2*sdt* M_PI/180)/10), (2*v0*sin(sdt*M_PI/180)/10));
}
