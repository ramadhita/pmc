#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{
   char *nama;
   int NIM;
   int nilai;
};

int main()
{
   FILE *infile1;
   FILE *infile2;
   int i, j, k, l, m, n;
   int x;
   float mean, jml;
   struct data mahasiswa[10];
   struct data temp;
   infile1 = fopen("before.txt", "w+");
   infile2 = fopen("after.txt", "w+");
   mahasiswa[0].nama = "Adit";
   mahasiswa[0].NIM =  18318001;
   mahasiswa[1].nama = "Bakugo";
   mahasiswa[1].NIM =  18318002;
   mahasiswa[2].nama = "Todoroki";
   mahasiswa[2].NIM =  18318003;
   mahasiswa[3].nama = "Kirishima";
   mahasiswa[3].NIM =  18318004;
   mahasiswa[4].nama = "Uraraka";
   mahasiswa[4].NIM =  18318005;
   mahasiswa[5].nama = "Jiro";
   mahasiswa[5].NIM =  18318006;
   mahasiswa[6].nama = "Yaoyorozu";
   mahasiswa[6].NIM =  18318007;
   mahasiswa[7].nama = "Tsuyu";
   mahasiswa[7].NIM =  18318008;
   mahasiswa[8].nama = "Mina";
   mahasiswa[8].NIM =  18318009;
   mahasiswa[9].nama = "Midoriya";
   mahasiswa[9].NIM =  18318010;
   for (i = 0; i < 10; i++)
   {
      x = rand();
      while ((x < 50) || (x > 100))
      {
         x = rand();
      }
      mahasiswa[i].nilai = x;
   }
   for (m = 0 ; m < 10 ; m++)
   {
      fprintf(infile1, "%s %d %d\n", mahasiswa[m].nama, mahasiswa[m].NIM, mahasiswa[m].nilai);
   }
   for (l = 0 ; l < 10 ; l++)
   {
      jml = jml + mahasiswa[l].nilai;
   }
   mean = jml/10;
   fprintf(infile1,"Rata-Rata %f", mean);
   for (j = 0 ; j < 10 ; j++)
   {
      for (k = 0 ; k < 10 ; k++)
      {
        if (mahasiswa[j].nilai > mahasiswa[k].nilai)
        {
            temp.nama = mahasiswa[j].nama;
            mahasiswa[j].nama = mahasiswa[k].nama;
            mahasiswa[k].nama = temp.nama;
            temp.nilai = mahasiswa[j].nilai;
            mahasiswa[j].nilai = mahasiswa[k].nilai;
            mahasiswa[k].nilai = temp.nilai;
            temp.NIM = mahasiswa[j].NIM;
            mahasiswa[j].NIM = mahasiswa[k].NIM;
            mahasiswa[k].NIM = temp.NIM;
        }
      }
   }
   for (n = 0 ; n < 10 ; n++)
   {
      fprintf(infile2, "%s %d %d\n", mahasiswa[n].nama, mahasiswa[n].NIM, mahasiswa[n].nilai);
   }
   fprintf(infile2,"Rata-Rata %f", mean);
   fclose(infile1);
   fclose(infile2);
}
