/* sudut 60 , kecepatan awal= 50m/s 
program:
1. Tracking posisi (x,y) setiap 10 ms
2. Hitung jarak ke tanah lagi
*/

#include <stdio.h>
#include <math.h>
#define sudut 1.0472 /* mengubah 60 derajat menjadi radian */
#define Vo 50
#define g 10

int main()
{ 
      double posisiX,
             posisiY, 
             t;

        t=0;
        posisiY = Vo*t*sin(sudut)-0.5*g*t*t; /*posisi Y ketika t=0 adalah 0 */
        posisiX = Vo*t*cos(sudut); /*posisi X ketika t=0 adalah 0 */

    while (posisiY >= 0)
    {
        t = t + 0.01;
        posisiY = Vo*t*sin(sudut) - (0.5*g*t*t);
        posisiX = Vo*t*cos(sudut);
        printf("posisi (X,Y) saat %f adalah (%f, %f)\n",t, posisiX, posisiY);
    }
    printf("posisi jarak terpanjang adalah %f\n", posisiX);
    return (0);
    
}
