#include<stdio.h>
#include<math.h>

int main()
{
    double r, pi, luas1, luas2, dx, dr, y, i, j, galat;
	
	pi = 3.14;
    r = 7;
    y = 0;
    dr = 0.001;
    dx = 0.001;
    luas2 = 0;
	
	//menghitung luas lingkaran dengan hitungan menggunakan rumus biasa
    luas1 = pi*r*r; 
	
	//menghitung luas lingkaran dengan teknik pengintegralan
    for(i=0; i<=pi; i=i+dx)
    {
        luas2 = luas2+(y*dx);
        y = 0;
        for (j=0; j<=r; j=j+dr)
        {
            y = y+(dr*r);
        }
    }

	galat = luas1-luas2;
	printf("Luas lingkaran dengan hitungan rumus adalah %lf\n", luas1);
	printf("Luas lingkaran dengan pengintegralan adalah %lf\n", luas2);
    printf("Galat pengukuran adalah : %lf\n", galat);
    return(0);
}