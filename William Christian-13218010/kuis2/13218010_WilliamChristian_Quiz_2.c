#include <stdio.h>

int main()
{
  // inisialisasi
  int m, n, p, c, d;
  float delta, detx, xcoor, ycoor;
  int first[2][2], second[2];
  // input user
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);

  printf("Enter number of rows of second matrix\n");
  scanf("%d", &p);


printf("Enter elements of second matrix\n");

    for (c = 0; c < p; c++)
        scanf("%d", &second[c]);
 // Crammer Rule
 // Determining Delta
 delta = first[0][0] * first[1][1] - first[0][1] * first[1][0];

 // Determining DeltaX
 detx = second[0] * first[1][1] - first[0][1] * second[1];

 // Determining the Point
 xcoor = detx / delta ;
 ycoor = first[0][0] * xcoor - second[0];

 // output
 printf("Titik Potongnya adalah:\n");
 printf("Koordinatx:\n");
 printf("%f\n", xcoor);
 printf("Koordinaty:\n");
 printf("%f\n", ycoor);

  return 0;
}
