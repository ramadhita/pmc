//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Quiz 3
//Date  : Selasa, 4 Februari 2020
#include <stdio.h>
#define N 1000000
#define pi 3.14159265359

void main(void) {
 float i, a, b, sum = 0, c, d, area = 0;
 d = 2 * 3.14159265359;
 c = 0;
 printf(
   "This program will integrate a function of circle between two boundary radius.");
 printf("Enter the first boundary limit: \n" );
 scanf("%f", &a);
 printf("Enter the second boundary limit: \n");
 scanf("%f", &b);
 if (a > b) {
  i = a;
  a = b;
  b = i;
 }

 for (i = a; i < b; i += (b - a) / N) {
  /* Define your function below, and include the suitable header files */
  sum += i * (b - a) / N;
 }

 printf("////Value of integration is: %.10f \n", sum);


 for (i = c; i < d; i += (d - c) / N) {
  /* Define your function below, and include the suitable header files */
  area += sum * (d - c) / N;
 }

 printf("////Value of second integration is: %.10f \n", area);

float areadasar;
b = 7;
areadasar = pi * b * b;
 printf("////Hasil dengan rumus dasar : %.10f", areadasar);



}
