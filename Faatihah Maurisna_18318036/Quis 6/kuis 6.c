#include<stdio.h>

void convolve(float* x, int lenx, float* h, int lenh, float* y, int* leny) {
  int i,j;
  *leny=lenx+lenh-1;

  for (i = 0; i < *leny; i++)
  {
      *y=0;
      for ( j = 0; j < i+1; j++)
      {
          *y+=*(x+j) * *(h+i-j);
      }
      y++;
  }

}

int main()
{
    float x[50];
    float y[50];
    float h[50];
    int lenx;
    int leny;
    int lenh;
    int i;

    scanf("%d",&lenx);
    for ( i = 0; i < lenx; i++)
    {
        scanf("%f",&x[i]);
    }

    scanf("%d",&lenh);

    for ( i = 0; i < lenh; i++)
    {
        scanf("%f",&h[i]);
    }
    convolve(x,lenx,h,lenh,y,&leny);
    for(i=0;i<leny;i++)
    {
        printf("%5.0f",y[i]);
    }

    return 0;

    /*int t=4;
    FILE*hai;
    hai=fopen("konvol", "w");
    for(i=0; i<t; i++)
    {
        x= i+1;
        fprintf(konvol, "%d; %f\n", x, y[i]);
    }
    fclose(hai);*/
}
