#include <stdio.h>
#include <stdlib.h>

int main() {
float r, n, i;
float area = 0;
const float pi = 3.14159265359;

printf("Masukkan nilai jari-jari:"); scanf("%f", &r);
printf("Masukkan nilai kerapatan:"); scanf("%f", &n);

float curR = r/n, width = r/n;

for (i=1 ; i <= n; i++){
    area += curR*width;
    curR += r/n;
}
float curA = area, result = 0;
width = 2*pi/n;

for (i=1; i<=n; i++){
    result += curA*width;
}

printf("hasil pendekatan riemann : %f\n", result);
printf("hasil rumus biasa : %f\n", pi*r*r );
printf("persen beda: %f",(((result-(pi*r*r))*100/(pi*r*r))));
printf("%c", '%');
}
