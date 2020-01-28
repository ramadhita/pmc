/*
Anindhita N.
13218083
*/

#include <stdio.h>
#include <math.h>

#define pi 3.14159
#define g 9.80665

float angle0 = pi/3; /*60 derajat*/
float v0 = 50; /*50 m/s*/
float delta_t = 0.01; /*10 ms*/

int main() {
  float vx = v0 * cos(angle0);
  float vy0 = v0 * sin(angle0);
  float x = 0, y = 0, t = 0;

  do {
    printf("t = %.3fs: x = %.3fm, y = %.3fm\n", t, x, y);
    t += delta_t;
    x = vx * t;
    y = vy0 * t - g * t * t / 2;
  } while (y >= 0);
  
  float xmax = vy0/g * 2 * vx;
  printf("x max = %.3fm\n", xmax);

  return 0;
}