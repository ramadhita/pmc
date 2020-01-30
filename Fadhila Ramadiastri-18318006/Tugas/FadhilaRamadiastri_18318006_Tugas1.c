#include <stdio.h>
#include <string.h>

//Membuat program untuk mencari nilai min maks dan rata-rata dari nilai mahasiswa

struct data_nilai
{

    char nama[20];
    int nilai;

};
// Struktur yang akan dibuat

char indeks(int score)
// Fungsi untuk memunculkan indeks berdasarkan nilai mahasiswa
{

    if((score >=0) && (score <50))
    {
        return('E');
    }
    else if((score >= 50) && (score < 65))
    {
        return('D');
    }
    else if((score >= 65) && (score < 70))
    {
        return('C');
    }
    else if((score >= 70) && (score < 80))
    {
        return('B');
    }
    else if((score >= 80) && (score <= 100))
    {
        return('A');
    }
        
}

int main()
// Program utama
{
    int i;
    float total;
    float average;
   

    struct data_nilai data[5];
    
    strcpy(data[0].nama, "Mawar");
    data[0].nilai = 67;

    strcpy(data[1].nama, "Melati");
    data[1].nilai = 85;

    strcpy(data[2].nama, "Wisteria");
    data[2].nilai = 85;

    strcpy(data[3].nama, "Carnation");
    data[3].nilai = 70;

    strcpy(data[4].nama, "Lili");
    data[4].nilai = 60;

    

    printf("%s",data[0].nama);
    printf("    %d",data[0].nilai);
    printf("    %c \n",indeks(data[0].nilai)); // Pemanggilan fungsi indeks
    
    printf("%s",data[1].nama);
    printf("    %d",data[1].nilai);
    printf("    %c \n",indeks(data[1].nilai));

    printf("%s",data[2].nama);
    printf("    %d",data[2].nilai);
    printf("    %c \n",indeks(data[2].nilai));

    printf("%s",data[3].nama);
    printf("    %d",data[3].nilai);
    printf("    %c \n",indeks(data[3].nilai));

    printf("%s",data[4].nama);
    printf("    %d",data[4].nilai);
    printf("    %c \n",indeks(data[4].nilai));
    

    int max;
    int min;
    // Mendeklarasikan variabel nilai maks dan min
    
    char max_nama[20];
    char min_nama[20];

    max = data[0].nilai;
    min = data[0].nilai;

    strcpy(max_nama ,data[0].nama);
    strcpy(min_nama, data[0].nama);

    for (i=0; i<=4; i++)
    {
        if(data[i].nilai>max)
        {
            max = data[i].nilai;
            strcpy(max_nama, data[i].nama);
        }
        if(data[i].nilai<min)
        {
            min = data[i].nilai;
            strcpy(min_nama, data[i].nama);
        }
        
    }

   

   total = data[0].nilai + data[1].nilai + data[2].nilai + data[3].nilai + data[4].nilai;
   // Total adalah total nilai semua mahasiswa

   average = total / 5;
    //rata-rata nilai mahasiswa

   printf("Maksimum : %s %d \n", max_nama, max);
   printf("Minimum : %s %d \n", min_nama, min);
   printf("RAta-rata nilai adalah %f \n", average);
  
  return 0;  
}


