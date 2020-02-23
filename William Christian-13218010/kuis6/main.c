#include <stdio.h>
// Deklarasi variabel
// Array yang akan dikonvolusikan: f1 dan f2, serta hasil konvolusi f3
float f1[7], f2[5];
float f3[59];
// Panjang tiap array
int length_f1, length_f2, length_f3;

int main() {
  // Open File
  FILE * fp;
  fp = fopen("output.csv", "w+");
  // Input
  float f1[] = {0, 0, 0, 0.25, 0.5, 0.75, 1};
  length_f1 = 7;
  float f2[] = {0, 0.5, 1, 0.5, 0};
  length_f2 = 5;

  // Melakukan konvolusi antara f1 dengan f2 dan menyimpannya pada f3
  int k;
  int l;
  length_f3 = length_f1 + length_f2 - 1;
  for (k = 0; k <= length_f1 - 1; k++){
    for (l = k; l <= k + length_f2 - 1 ; l++ ){
        *(f3 + l) += (*( f1 + k ) *  *(f2+l-k) );
    }
  }
  // Mencetak isi array ke file output
  int m;
  float x = -1;
  fprintf(fp, "x, f3\n");
  for (m = 0; m <= length_f3 - 1; m++){
    fprintf(fp, "%.1f, %.3f\n",x, *(f3 + m));
    x += 0.5;
  }
  return 0;
}
