#include <stdio.h>
#include <stdlib.h>

int main()
{
  float vo_sebelum=0;
  float vo;
  float delta = 0.00001;
  vo = (5 + (0.01*vo_sebelum/delta))/(1+(0.01/delta));
  FILE *fp;
  fp = fopen("C:/Users/Lenovo/Desktop/tmp/test.txt", "w+");
  while (vo-vo_sebelum>=0.00001 && vo<=5)
  {
      printf("%f \n",vo);
      fprintf(fp, "%f\n",vo);
      vo_sebelum = vo;
      vo = (5 + (0.01*vo_sebelum/delta))/(1+(0.01/delta));

  }
  fclose(fp);
  return 0;
}
