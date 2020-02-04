#include <stdio.h>
#include <math.h>

int i;

float riemann (float batas, int n, char f) {
    float sum = 0;
    float delta = batas / n;
    if (f=='1') {
        for (i=1; i<=n; i++) {
            sum += delta;
        }
    }
    else if (f=='x') {
        for (i=1; i<=n; i++) {
            sum += i * delta * delta;
        }
    }
    return (sum);
}

int main () {
    float r;
    int n;
    float luasRumus;
    float luasRiemann;

    printf ("Masukkan r lingkaran dan n riemann (contoh: 5 1000): ");
    scanf ("%f %d", &r, &n);
    luasRumus = M_PI * powf(r, 2);
    luasRiemann = riemann(r, n, 'x') * riemann(2*M_PI, n, '1');
    printf ("Luas Rumus: %f\n", luasRumus);
    printf ("Luas Riemann: %f\n", luasRiemann);
    printf ("Error: %f%%", (luasRiemann-luasRumus)/luasRumus*100);
}