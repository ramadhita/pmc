#include<stdio.h>
#include<math.h>
#include<string.h>

struct daftar
{
    char Nama[100];
    int Nim;
    int Nilai;
};


float average(struct daftar * data)
{
    float rata;
    int i;
    for (i = 0; i<10; i = i+1)
        {
            rata = rata + data[i].Nilai;
        }
    rata = rata/10;
    return(rata);
}

// Fungsi Random
int random(int lower, int upper)
                             
{ 
    int num = (rand() %  (upper - lower + 1)) + lower; 
    
    return(num); 
} 


int main()
{
    struct daftar data[10];
    struct daftar tukar;
    char c_indeks;
    int i,j,g,n;
    float avg;
    int max,min,p_max, p_min;
    int maxcount,count,loc;

    strcpy(data[0].Nama,"Asep");
    strcpy(data[1].Nama,"Zenul");
    strcpy(data[2].Nama,"Dobleh");
    strcpy(data[3].Nama,"Taufiq");
    strcpy(data[4].Nama,"Kabur");
    strcpy(data[5].Nama,"Ajat");
    strcpy(data[6].Nama,"Eneng");
    strcpy(data[7].Nama,"Memet");
    strcpy(data[8].Nama,"Koble");
    strcpy(data[9].Nama,"Lili");

    data[0].Nim = 13218001;
    data[1].Nim = 13218002;
    data[2].Nim = 13218003;
    data[3].Nim = 13218004;
    data[4].Nim = 13218005;
    data[5].Nim = 13218006;
    data[6].Nim = 13218007;
    data[7].Nim = 13218008;
    data[8].Nim = 13218009;
    data[9].Nim = 13218010;


    data[0].Nilai = random(50,100);
    data[1].Nilai = random(50,100);
    data[2].Nilai = random(50,100);
    data[3].Nilai = random(50,100);
    data[4].Nilai = random(50,100);
    data[5].Nilai = random(50,100);
    data[6].Nilai = random(50,100);
    data[7].Nilai = random(50,100);
    data[8].Nilai = random(50,100);
    data[9].Nilai = random(50,100);

    // Rata-Rata
    avg = average(data);
    printf("Rata-Rata = %.2f \n",avg);

    // Print
    FILE *fp;

    fp = fopen("Data nilai.txt", "w+");

    fprintf(fp,"Rata-Rata = %.2f \n",avg);
    for(i = 0; i < 10;i++)
    {
        fprintf(fp, "%d,",i+1);
        fprintf(fp, "%d,",data[i].Nim);
        fprintf(fp, "%s,",data[i].Nama);
        fprintf(fp, "%d \n",data[i].Nilai);
    }

    // Sorting
    for (i = 0; i < 10; i = i+1)
    {
        for (j = i; j < 10; j = j+1)
        {
            if (data[j].Nilai > data[i].Nilai)
            {
                tukar = data[j];
                data[j]=data[i];
                data[i] = tukar;
            }
            
        }
    }

    fprintf(fp, "\n");

    // Print urut
    for (i = 0; i < 10; i = i+1)
    {
        fprintf(fp, "%d,",i+1);
        fprintf(fp, "%d,",data[i].Nim);
        fprintf(fp, "%s,",data[i].Nama);
        fprintf(fp, "%d \n",data[i].Nilai);
    }

    fclose(fp);

    return(0);


}