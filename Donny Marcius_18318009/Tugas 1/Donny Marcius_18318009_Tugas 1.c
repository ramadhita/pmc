#include <stdio.h>
#include <string.h>

struct data {
  char* nama;
  int nilai;
  char indeks[1];
};

char* ind (int nilai) {
  if (nilai >= 80)
    return "A";
  else if (nilai >= 70)
    return "B";
  else if (nilai >= 65)
    return "C";
  else
    return "D";
}

int main( ) {
  int i, j, max, min, cmax, c;
  float sum, count;
  char* modus;
  struct data daftar[5];

  daftar[0].nama = "Mawar";
  daftar[0].nilai = 67;
  strcpy (daftar[0].indeks, ind(daftar[0].nilai));

  daftar[1].nama = "Melati";
  daftar[1].nilai = 85;
  strcpy (daftar[1].indeks, ind(daftar[1].nilai));

  daftar[2].nama = "Wisteria";
  daftar[2].nilai = 85;
  strcpy (daftar[2].indeks, ind(daftar[2].nilai));

  daftar[3].nama = "Carnation";
  daftar[3].nilai = 70;
  strcpy (daftar[3].indeks, ind(daftar[3].nilai));

  daftar[4].nama = "Lili";
  daftar[4].nilai = 60;
  strcpy (daftar[4].indeks, ind(daftar[4].nilai));

  for (i=0; i<5; i++) {
    printf( "Nama   : %s\n", daftar[i].nama);
    printf( "Nilai  : %d\n", daftar[i].nilai);
    printf( "Indeks : %s\n", daftar[i].indeks);
    printf( "--------------------------------\n");
  }

  max = daftar[0].nilai;
  min = daftar[0].nilai;
  sum = daftar[0].nilai;
  count = 1;

  for (i=1; i<5; i++) {
    if (daftar[i].nilai > max)
      max = daftar[i].nilai;
    if (daftar[i].nilai < min)
      min = daftar[i].nilai;
    sum += daftar[i].nilai;
    count += 1;
  }

  printf ("\nNilai Tertinggi: %d\n", max);
  for (i=0; i<5; i++) {
    if (daftar[i].nilai == max)
      printf ("- %s\n", daftar[i].nama);
  }

  printf ("\nNilai Terendah : %d\n", min);
  for (i=0; i<5; i++) {
    if (daftar[i].nilai == min)
      printf ("- %s\n", daftar[i].nama);
  }

  printf ("\nRata-Rata Nilai = %.2f\n", sum/count);

  for (i=0; i<5; ++i) {
    c = 0;
    for (j=0; j<5; ++j) {
      if (strcmp(daftar[j].indeks, daftar[i].indeks) == 0) {
        c += 1;
      }
    }
    if (c > cmax) {
      cmax = c;
      modus = daftar[i].indeks;
    }
  }

  printf ("\nModus Indeks = %s\n", modus);
}
