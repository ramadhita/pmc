#include <stdio.h>
#include <math.h>

int main ()
{

float x, y, t, xm;
float a = 0;
   t =  2*50*0.5*sqrt(3)/10;
   xm = 50 * 0.5 * t;
   printf("Sebuah bola dilempar dengan sudut 60 derajat dengan kecepatan awal 50 m/s, berikut posisinya menurut perpindahan waktu \n");
   do  {
      x = 50 * 0.5 * a;
      y = (50*0.5*sqrt(3)*a) - (0.5*10*a*a);
      printf("posisi x : %f\n", x);
      printf("posisi y : %f\n", y);
      printf("posisi saat detik ke%f\n", a);
      a += 0.01;
   } while( a <= t );
   printf("x maximum: %f\n", xm);
   
   return 0; 
}
