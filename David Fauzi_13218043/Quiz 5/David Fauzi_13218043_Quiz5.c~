#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Deklarasi fungsi 
void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
void inputdata();
void writebefore();
void sortnilai();
double hitungmean();
void writeafter(double mean);
// Deklarasi struct
struct siswa 
{
    int nomor;
    char nim[100];
    char nama[100];
    int nilai;
    int checked;
};
// Deklarasi variabel global
struct siswa itb[10];
int arr[10];

int main() {
    // Input dan randomize data
    inputdata(itb);
    // Write data sebelum diolah ke txt file
    writebefore();
    // Sorting nilai
    sortnilai();
    // Hitung mean lalu diwrite ke txt file
    writeafter(hitungmean());
    return 0;
}
// Swap 2 integer
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// Bubble Sort sebuah array
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

// Masukan data ke dalam struct array dan random nilai
void inputdata()
{
    // Initialisasi randomizer
    time_t t;
    srand((unsigned) time(&t));
    // Kasi nama 
    strcpy(itb[0].nama,"Mawar");
    strcpy(itb[1].nama,"Melati");
    strcpy(itb[2].nama,"Wisteria");
    strcpy(itb[3].nama,"Carnation");
    strcpy(itb[4].nama,"Lili");
    strcpy(itb[5].nama,"David");
    strcpy(itb[6].nama,"Fauzi");
    strcpy(itb[7].nama,"Reza");
    strcpy(itb[8].nama,"Ian");
    strcpy(itb[9].nama,"William");
    // Kasi nim
    strcpy(itb[0].nim,"13218042");
    strcpy(itb[1].nim,"13218242");
    strcpy(itb[2].nim,"13218342");
    strcpy(itb[3].nim,"13218072");
    strcpy(itb[4].nim,"13218049");
    strcpy(itb[5].nim,"13218342");
    strcpy(itb[6].nim,"13218002");
    strcpy(itb[7].nim,"13218034");
    strcpy(itb[8].nim,"13218023");
    strcpy(itb[9].nim,"13218019");
    // Kasi nomor, random nilai, sama set checked ke 0 
    for(int i=0;i<10;i++)
    {
        itb[i].nomor=i+1;
        int rannum= (rand() %50)+50;
        itb[i].nilai=rannum;
        itb[i].checked=0;
    }
}

// Write data ke dalam file txt 
void writebefore()
{
// Open File 
    FILE* x;
    x=fopen("sortbefore.txt","w");

    //cetak row label
    fprintf(x,"%s,","No");
    fprintf(x,"%s,","Nim");
    fprintf(x,"%s,","Nama");
    fprintf(x,"%s\n","Nilai");
    // Cetak data sebelum ke file txt
    for(int i=0;i<10;i++)
    {
    fprintf(x,"%d,",itb[i].nomor);
    fprintf(x,"%s,",itb[i].nim);
    fprintf(x,"%s,",itb[i].nama);
    fprintf(x,"%d\n",itb[i].nilai);
    }
    // Close 
    fclose(x);
}
// prosedur untuk sorting nilai 
void sortnilai()
{
    for(int i=0;i<10;i++)
    {
    arr[i]=itb[i].nilai;
    }
    bubbleSort(arr,10);
}
// fungsi hitung mean dari nilai dan return nilai mean
double hitungmean()
{
     double mean;
     int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=itb[i].nilai;
    }

    mean=((double)sum)/10;
    return mean;
}
// Write data yang telah di sort tertinggi ke terendah dan rata-rata nilainya ke dalam file .txt
void writeafter(double mean)
{
    int buff;
    FILE* x;
    x=fopen("sortafter.txt","w");
    fprintf(x,"%s,","No");
    fprintf(x,"%s,","Nim");
    fprintf(x,"%s,","Nama");
    fprintf(x,"%s\n","Nilai");  
    for(int j=9;j>=0;j--)
    {
        buff=arr[j];    
        for(int i=0;i<10;i++)
        {
        if((itb[i].nilai==buff)&&(itb[i].checked==0))
        {
        fprintf(x,"%d,",10-j);
        fprintf(x,"%s,",itb[i].nim);
        fprintf(x,"%s,",itb[i].nama);
        fprintf(x,"%d\n",itb[i].nilai);
        itb[i].checked=1;
        }
        }
    }
    fprintf(x,"Mean : %.2lf\n",mean);
    fclose(x);
}