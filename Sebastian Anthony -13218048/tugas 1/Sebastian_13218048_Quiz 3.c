#include <stdio.h>
#include <math.h>

struct data_nilai
{
    char *nama;
    char *index;
    int nilai;
};

struct hasil
{
    int max;
    int min;
    float avg;
};

char indexx(int input)
{
    char answer;
    if (input >= 85)
    {
        answer = "A";
    }
    else if ((input < 85 ) && (input >= 70))
    {
        answer = "B";
    }
    else if ((input < 70 ) && (input >= 67))
    {
        answer = "C";
    }
    else {
        answer = "D";
    }

    return (answer);
};

struct hasil mencari(struct data_nilai mahasiswan[5])
{
    float sum = 0;
    int maxi = mahasiswan[0].nilai;
    int mini = mahasiswan[0].nilai;
    int i,j;
    float avgi;
    struct hasil hasili;
    
    for (i = 0; i <5; ++i)
    {
        sum = sum + mahasiswan[i].nilai;
        if (maxi < mahasiswan[i].nilai)
        {
            maxi = mahasiswan[i].nilai;
        };
        if (mini > mahasiswan[i].nilai)
        {
            mini = mahasiswan[i].nilai;
        }
    }
    avgi = sum/5;
    
    hasili.max = maxi;
    hasili.min = mini;
    hasili.avg = avgi;
    
    return(hasili);
    
}
int main()
{
    struct data_nilai mahasiswa[5];
    struct hasil jawaban;
    int k,l,m;
    
    mahasiswa[0].nama = "Mawar";
    mahasiswa[0].nilai =  67;
    mahasiswa[0].index = indexx(mahasiswa[0].nilai); 
    
    mahasiswa[1].nama = "Melati";
    mahasiswa[1].nilai =  85;
    mahasiswa[1].index = indexx(mahasiswa[1].nilai); 
    
    mahasiswa[2].nama = "Wisteria";
    mahasiswa[2].nilai =  85;
    mahasiswa[2].index = indexx(mahasiswa[2].nilai);
    
    mahasiswa[3].nama = "Carnation";
    mahasiswa[3].nilai =  70;
    mahasiswa[3].index = indexx(mahasiswa[3].nilai);
    
    mahasiswa[4].nama = "Lili";
    mahasiswa[4].nilai =  60;
    mahasiswa[4].index = indexx(mahasiswa[4].nilai);
    
    jawaban = mencari(mahasiswa);
    
    printf("%d\n",jawaban.max);
    for(k = 0; k < 5; k++){
        if (mahasiswa[k].nilai == jawaban.max)
        {
            printf("%s\n", mahasiswa[k].nama);
        }
    }
    printf("%d\n",jawaban.min);
    for(l = 0; l < 5; l++){
        if (mahasiswa[l].nilai == jawaban.min)
        {
            printf("%s\n", mahasiswa[l].nama);
        }
    }
    printf("%f\n",jawaban.avg);
}
