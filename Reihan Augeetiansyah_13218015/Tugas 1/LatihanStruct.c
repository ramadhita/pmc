#include<stdio.h>
#include<math.h>
#include<string.h>

struct daftar
{
    char Nama[100];
    int Nilai;
    char indeks;
};


float average(struct daftar * data)
{
    float rata;
    int i;
    for (i = 0; i<5; i = i+1)
        {
            rata = rata + data[i].Nilai;
        }
    rata = rata/5;
    return(rata);
}
int main()
{
    struct daftar data[5];
    char c_indeks;
    int i,g;
    float avg;
    int max,min,p_max, p_min;
    int maxcount,count,loc;

    strcpy(data[0].Nama,"Mawar");
    strcpy(data[1].Nama,"Melati");
    strcpy(data[2].Nama,"Wisteria");
    strcpy(data[3].Nama,"Carnation");
    strcpy(data[4].Nama,"Lili");
    data[0].Nilai = 67;
    data[1].Nilai = 85;
    data[2].Nilai = 85;
    data[3].Nilai = 70;
    data[4].Nilai = 60;

    // Ngasih Indeks
    for (i = 0; i<5; i = i+1)
    {
        if (data[i].Nilai >= 80)
        {
            c_indeks = 'A';
        }
        else if (data[i].Nilai >= 70)
        {
            c_indeks = 'B';
        }
        else if (data[i].Nilai > 60)
        {
            c_indeks = 'C';
        }
        else if (data[i].Nilai <= 60)
        {
            c_indeks = 'D';
        }
        data[i].indeks = c_indeks;
    }

    // MAX & MIN
    max = data[0].Nilai;
    min = 0;
    p_max = 0;
    p_min = 0;
    for (i = 0; i<5; i = i+1)
    {
        min = data[i].Nilai;
        if (max >= min)
           {
               max = max;
               p_min = i;
           }
        else
        {
            max = min;
            p_max = i;
        }
        
        
    }

     for (i = 0; i<5; i = i+1)
    {
        if (data[i].Nilai == max)
        {
            printf("Nilai Tertinggi = %s ",data[i].Nama);
            printf("%d \n", data[i].Nilai);
        }
        else if (data[i].Nilai == min)
        {
            printf("Nilai Terendah = %s ",data[i].Nama);
            printf("%d \n", data[i].Nilai);
        }
    }


    // Rata-Rata
    avg = average(data);
    printf("Rata-Rata = %.2f \n",avg);

    // Modus
    maxcount = 1;
   for (i = 0; i<5; i = i+1)
    {
        for (g = 0; g<5; g = g+1)
        {
            if (data[i].indeks == data[g].indeks)
            {
                count += 1;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            loc = i;
            
        }
        count = 0;
    }
    printf("Modus = %c \n", data[loc].indeks);

    return(0);

}