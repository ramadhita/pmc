#include <stdio.h>

int main () 
{
    int e[2][2];
    int e1[2][2];
    int e2[2][2];

    int det_koef_e, det_koef_e1, det_koef_e2;

    e[0][0] = 2;
    e[0][1] = -1;
    e[1][0] = 4;
    e[1][1] = -1;

    e1[0][0] = -2;
    e1[0][1] = -1;
    e1[1][0] = 4;
    e1[1][1] = -1;

    e2[0][0] = 2;
    e2[0][1] = -2;
    e2[1][0] = 4;
    e2[1][1] = 4;

    det_koef_e = e[0][0]*e[1][1] - e[0][1]*e[1][0];
    det_koef_e1 = e1[0][0]*e1[1][1] - e1[1][0]*e1[0][1];
    det_koef_e2 = e2[0][0]*e2[1][1] - e2[1][0]*e2[0][1];

    printf("Titik x = %d\n", det_koef_e1/det_koef_e);

    printf("Titik y = %d", det_koef_e2/det_koef_e);

    return 0;
}