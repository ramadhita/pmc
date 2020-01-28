// Nama           : Ian Azarya Aryanto
// NIM            : 13218055
// Kelas          : K02 EL2008

#include <stdio.h>
#define maks 5

// Mendefinisikan structure Mahasiswa
typedef struct Mahasiswa { //Structure data mahasiswa (Nama, Nilai, dan Index)
    char Nama[10];
    int Nilai;
    char Index;
}data; // Mempersingkat nama struct Mahasiswa menjadi data dengan typedef

// Deklarasi fungsi yang digunakan
int Maxim (data array[]);
int Min (data array[]);
float Rata (data array[]);
int Modus (data array[]);

// Main program 
int main ()
{
    data mhs[maks];
    int i,j;
        for(i=0;i<maks;i++)
           {
               printf("Pengisian Data Mahasiswa Ke-%i\n",i+1);
               printf("Nama : ");
               scanf("%s", mhs[i].Nama);
               printf("Nilai : ");
               scanf("%d", &mhs[i].Nilai);
               //Penilaian index : 
               // 100-80 => A
			   // 79-60 => B
			   // 59-40 => C
			   // 39-20 => D
			   // 19-0 => E 
               if(mhs[i].Nilai>=80) mhs[i].Index='A';
               else
               if(mhs[i].Nilai>=60) mhs[i].Index='B';
               else
               if(mhs[i].Nilai>=40) mhs[i].Index='C';
               else
               if(mhs[i].Nilai>=20) mhs[i].Index='D';
               else
               if(mhs[i].Nilai>=0)  mhs[i].Index='E';
               printf("Index : %c \n", mhs[i].Index);
               printf("\n");
            }
    printf("Nilai maksimum dimiliki oleh : \n");
    for (j=0;j<maks;j++) // Mencetak semua mahasiswa dengan nilai maksimum
		{
			if (mhs[j].Nilai == Maxim(mhs))
				printf("- %s = %d \n", mhs[j].Nama, mhs[j].Nilai);
		}
    printf("Nilai minimum dimiliki oleh : \n");	
    for (j=0;j<maks;j++) // Mencetak semua mahasiswa dengan nilai minimum
		{
			if (mhs[j].Nilai == Min(mhs))
				printf("- %s = %d \n", mhs[j].Nama, mhs[j].Nilai);
		}
    printf("Rata-rata nilai : %.2f \n",Rata(mhs)); 
    // Mencetak nilai rata-rata mahasiswa dengan 2 angka di belakang koma
    printf("Modus : %c",Modus(mhs));
    // Mencetak index modus dari data 
	return 0;
}

int Maxim (data array[]){ //Nilai tertinggi dalam data
    int max = array[0].Nilai;
    int j;
    for(j=0;j<maks;j++)
        {
            if (array[j].Nilai >= max) {
                max = array[j].Nilai;}
        }
    return max;
}

int Min (data array[]){ //Nilai terendah dalam data
    int minim = array[0].Nilai;
    int k;
    for(k=0;k<maks;k++)
        {
            if (array[k].Nilai <= minim) {
                minim = array[k].Nilai;}
        }
    return minim;        
}

float Rata (data array[]) { //Mencari rata-rata dari semua nilai mahasiswa
    float sum = 0;
    float mean = 0;
    int l; 
    for(l=0;l<maks;l++)
        {
            sum = sum + array[l].Nilai;
            }
    mean = sum/maks;
    return mean;
}

int Modus (data array[]) //Asumsi modus dalam data hanya satu
	{
	char current_mode;
	int jumlah = 0;
	int i, j;
	for (i = 0; i < maks; ++i) 
	{
      int count = 0;
      for (j = 0; j < maks; ++j) 
		{
			if (array[j].Index == array[i].Index)
			count = count + 1;
		}
      if (count > jumlah) 
		{
			jumlah = count;
			current_mode = array[i].Index;
		}
	}
   return current_mode;
}
