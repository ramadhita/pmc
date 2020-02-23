#include<stdio.h>


//dilakukan konvolusi dengan pendekatan diskrit
 float fungsi1(int x)
 {
     float hasil;
     hasil = (0.5*x) -0.5;
     return hasil;
 }
 float fungsi2(int x,int y ,int z)
 {
     float hasil;
     int i;
    if (x < (z-1) )
    {
        hasil = 0;
    }
    else if (x == z-1 )
    {
        hasil = 1;
    }
    else
    {
        hasil = 0;
    }
     return hasil;
 }
int main()
{
    FILE *fp;
    fp = fopen("konvolusi.txt","w+");
    int i,j;
    float arr1[10],  arr2[10], arr3[10];


    for(i= 0;i < 10; i++)
{
    arr3[i] = 0;
    arr2[i] = 0;
    arr1[i] = 0;
}
    for(i = 0;i < 3; i++)
    {
        arr1[i+1]= fungsi1(i+1);
        arr2[i]= fungsi2(i,0,3-2 );
    }

for(i = 0; i < 6;i++)
{
    for (j = 0; j <= i;j++)
    {
      arr3[i] += arr1[j]*arr2[i-j];
    }
}

fprintf(fp,"f(x)\t\t x\n");
for (i = 0;i <6; i++)
{
    fprintf(fp,"%f\t %d\n", arr3[i],i);
}
fclose(fp);
return 0;
}
