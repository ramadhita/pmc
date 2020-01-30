#include <stdio.h>
#include <math.h>
int main()
{
    int  first[2][2], kanan[2][1],cof[2][2], minor[2][2],adj[2][2];
    int m,c;
    float deter, invers[2][2],hasil[2][1];



    first[0][0] = -2;
    first[0][1] = 1;
    first[1][0] = -4;
    first[1][1] = 1;

    kanan[0][0] = 2;
    kanan [1][0] = -4;

    minor[0][0] = first[1][1];
    minor[0][1] = first[1][0];
    minor[1][0] = first[0][1];
    minor[1][1] = first[0][0];

    for (c = 0; c < 2; c++){
        for(m = 0; m <2; m++){
            cof[c][m] = pow(-1, c+m) * minor[c][m];
        }
    }

    for (c = 0; c < 2; c++){
        for(m = 0; m <2; m++){
            adj[c][m] = cof[m][c];
        }
      }
deter = (1/((float)(first[0][0]*first[1][1]-first[1][0]*first[0][1])));

  for (c = 0; c < 2; c++){
        for (m = 0; m <2; m++){
            invers[c][m] = deter * (adj[c][m]);
        }
  }

hasil[0][0] = invers[0][0]*kanan[0][0] + invers[0][1]*kanan[1][0];
hasil[1][0] = invers[1][0]*kanan[0][0] + invers[1][1]*kanan[1][0];

    for (c = 0; c < 2; c++){
            printf("%f\n", hasil [c][0]);

    }

return 0;
}
