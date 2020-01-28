#include <stdio.h>
#include <math.h>


int main(void)
{
   int a[2][2], inversa[2][2];
   int b[2];
   int c[2];
   int deta;
   
   int i, j;
   
   a[0][0]=-2;
   a[0][1]=1;
   a[1][0]=-4;
   a[1][1]=1;
   
   deta = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
   c[0]=2;
   c[1]=-4;
   
   b[0] = ((2*a[1][1])-((-4)*a[0][1]))/deta;
   b[1] = (((-4)*a[0][0])-(2*a[1][0]))/deta;
   
   printf("deta=%d \n",deta);
   printf("x=%d \n",b[0]);
   printf("y=%d \n",b[1]);
   
   
    
    return 0;
}
