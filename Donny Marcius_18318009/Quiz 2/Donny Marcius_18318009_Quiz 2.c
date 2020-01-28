// Donny Marcius / 18318009
// Latihan mencari nilai x dan y dari SPLDV

#include <stdio.h>
#include <math.h>

int main() {
  double a[2][2] = {
    {-2, 1},
    {-4, 1}
  };

  double b[2][1] = {
    {2},
    {-4}
  };

  double c[2][1] = {
    {0},
    {0}
  };

  double trans[2][2], inv[2][2], det, x, y;
  int i, j;

  printf ("y = 2x + 2\n-2x + y = 2\n\n");
  printf ("y = 4x - 4\n-4x + y = -4\n\n");

  // cari determinan
  det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

  // matriks transpose
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
      trans[i][j] = a[j][i];
    }
  }

  // inverse matriks
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
      inv[i][j] = pow(-1, i+j)*trans[abs(i-1)][abs(j-1)]/det;
    }
  }

  // nilai x dan y
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
      c[i][0] += inv[i][j]*b[j][0];
    }
  }

  printf ("(x, y) = (%.1f, %.1f)", c[0][0], c[1][0]);

  return 0;
}
