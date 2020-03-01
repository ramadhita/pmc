#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 


struct data{
   char *nama;
   int NIM;
   int nilai;
};
int main()
{
   FILE *fp1;
   FILE *fp2;
   int i,j,k,l,m,n;
   int x;
   float avg,sum;
   struct data mahasiswa[10];
   struct data temp;
   fp1 = fopen("belum.txt", "w+");
   fp2 = fopen("sudah.txt", "w+");
   mahasiswa[0].nama = "Mawar";
   mahasiswa[0].NIM =  13218001;
 
   mahasiswa[1].nama = "Melati";
   mahasiswa[1].NIM =  13218002;
    
   mahasiswa[2].nama = "Wisteria";
   mahasiswa[2].NIM =  13218003;
    
   mahasiswa[3].nama = "Carnation";
   mahasiswa[3].NIM =  13218004;
    
   mahasiswa[4].nama = "Lili";
   mahasiswa[4].NIM =  13218005;

   mahasiswa[5].nama = "Apri";
   mahasiswa[5].NIM =  13218006;

   mahasiswa[6].nama = "Christian";
   mahasiswa[6].NIM =  13218007;
    
   mahasiswa[7].nama = "Andy";
   mahasiswa[7].NIM =  13218008;
    
   mahasiswa[8].nama = "Ari";
   mahasiswa[8].NIM =  13218009;

   mahasiswa[9].nama = "Sebas";
   mahasiswa[9].NIM =  13218010;

   for(i = 0; i<10; i++){
      x = rand();
      while((x<50)||(x>100)){
         x = rand();
      }
      mahasiswa[i].nilai = x;
   }
   for(m=0; m<10; m++){
      fprintf(fp1,"%s %d %d\n", mahasiswa[m].nama, mahasiswa[m].NIM, mahasiswa[m].nilai);
   }
   for(l = 0; l<10; l++){
      sum = sum + mahasiswa[l].nilai;
   }

   avg = sum/10;
   
   fprintf(fp1,"avg %f", avg);
   for(j = 0; j<10; j++){
      for(k = 0; k<10; k++){
      if(mahasiswa[j].nilai>mahasiswa[k].nilai){
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
   for(n=0; n<10; n++){
      fprintf(fp2, "%s %d %d\n", mahasiswa[n].nama, mahasiswa[n].NIM, mahasiswa[n].nilai);
   }
   fprintf(fp2,"avg %f", avg);
   fclose(fp1);
   fclose(fp2);
   return 0;
}