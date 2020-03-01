//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Quiz 5 - Struct and Sorting : Nama Nim Nilai Mahasiswa
//Date  : Selasa, 20 Februari 2020

#include <stdio.h>	
#include <math.h>
#include <string.h>

struct DATA                                         //Deklarasi Struct
{ 
char name[50];
int nim; 
int nilai; 
int nomor; 
};

int
main(void)
{
   FILE *fpt;                                                    //Deklarasi file eksternal
   fpt = fopen("output.txt", "w+");
    if((fpt = fopen("output.txt", "w+")) == NULL) {             //Skema cek apakah file output ada.
        printf("\nERROR - Cannot open the designated file\n");
    }
    else
    {
    struct DATA mhs[12];                                    //INisialisasi Variabel dengan Struct
    struct DATA temp;
    char masukkan[100];
    int i; char sampah[10];
    int j,k;
    for (i = 0; i<10 ; i++)
    {
        mhs[i].nomor = i;                                   // Proses pengulangan untuk input nama dan nim
        printf("Masukkan Nama orang ke %d : ",i);
        gets(masukkan);
        strcpy(mhs[i].name, masukkan);
        printf("Masukkan nim orang ke %d : ",i);
        scanf("%d", &mhs[i].nim);
        mhs[i].nilai = ((rand()% (50+1)) + 50);
        printf("Batas INPUT ke  %d \n", i);                 //Batas pengecekkan input nilai agar dapat diketahui dengan jelas 
        gets(sampah);                                      // dan tidak overlap

    }


    printf ("NO | NAMA | NIM | NILAI \n" );                     // Pencetakkan data awal sebelum disorting
    for (i = 0; i<10 ; i++)
    {
        printf("%d | %s | %d | %d \n", mhs[i].nomor+1,mhs[i].name,mhs[i].nim, mhs[i].nilai);
         fprintf(fpt,"%d | %s | %d | %d \n", i+1,mhs[i].name,mhs[i].nim, mhs[i].nilai);    
    }
    

          // SKema Sorting dengan Insertion sort
    
    for (i=0 ; i<9; i++ )
    {
        for (j =i+1 ; j<10 ; j++)
        {
            if (mhs[i].nilai < mhs[j].nilai) 
            {
                temp = mhs[j];
                mhs[j] = mhs[i];
                mhs[i] = temp;
               
            }
        }

    }
    printf("---Hasil Sorting Nilai Terurut Mengecil--- \n");
    fprintf(fpt,"\n\n-- Hasil Sorting Nilai Terurut Mengecil-- \n---------------------------------------\n");
    printf ("NO | NAMA | NIM | NILAI \n" );
    for (i = 0; i<10 ; i++)                                                     // Pencetakkan nilai akhir yang sudah disort ke layar dan ke file output
    {
        printf("%d | %s | %d | %d \n", i+1,mhs[i].name,mhs[i].niRATAm, mhs[i].nilai);
       fprintf(fpt,"%d | %s | %d | %d \n", i+1,mhs[i].name,mhs[i].nim, mhs[i].nilai); 
    }
    
    float rata, count;                                                 //Menghitung nilai rata - rata
    rata = 0; count = 0;
    for (k = 0; k<10 ; k++)

    {
       rata = rata + mhs[k].nilai;
       count ++;  
    }

   fprintf(fpt,"\n*Rata - Rata Nilai Mahasiswa = %f \n", (rata/count));         //Menuliskan nilai rata- rata ke file output
   fclose(fpt);
    }
    return (0);

}

