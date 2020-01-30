//Muhammad Heronan Hyanda
//13218073
//Tugas 28 Januari 2020

#include <stdio.h>
#include <stdlib.h>

struct mahasiswa
{
    char* nama;
    int nilai;
    char indeks;
};

int main ()
{
    //inisiasi
    struct mahasiswa a[5];
    a[0].nama = "Mawar";
    a[0].nilai = 67;
    a[1].nama = "Melati";
    a[1].nilai = 85;
    a[2].nama = "Wisteria";
    a[2].nilai = 85;
    a[3].nama = "Carnation";
    a[3].nilai = 70;
    a[4].nama = "Lili";
    a[4].nilai = 60;
    //proses dan hasil
    max(a);
    min(a);
    average(a);
    mode(a);
}

char indexing (struct mahasiswa d)
{
    char idx;
    if (d.nilai >= 80)
    {
        idx = 'A';
    }
    else if (d.nilai >= 70 && d.nilai < 80)
    {
        idx = 'B';
    }
    else if  (d.nilai >= 65 && d.nilai < 70)
    {
        idx = 'C';
    }
    else
    {
        idx = 'D';
    }
    return idx;
}


void max (struct mahasiswa b[5])
{
    int i, temp, loc;
    char idx;
    temp = 0;
    loc = 0;
    for (i = 0; i < 5; i += 1)
    {
        if (temp < b[i].nilai)
        {
            temp = b[i].nilai;
            loc = i;
        }
        else
        {
            temp = temp;
            loc = loc;
        }
    }
    idx = indexing(b[loc]);
    printf("Nilai maks : %s dengan indeks %c \n", b[loc].nama, idx);
    return 0;
}

void min (struct mahasiswa c[5])
{
    int i, temp, loc;
    char idx;
    temp = c[1].nilai;
    loc = 0;
    for (i = 0; i < 5; i += 1)
    {
        if (temp > c[i].nilai)
        {
            temp = c[i].nilai;
            loc = i;
        }
        else
        {
            temp = temp;
            loc = loc;
        }
    }
    idx = indexing(c[loc]);
    printf("Nilai min : %s dengan indeks %c \n",c[loc].nama,idx);
    return 0;
}

void average (struct mahasiswa d[5])
{
    int i, n;
    float temp;
    temp = 0;
    n = 0;
    float avg;
    for (i = 0; i < 5; i += 1)
    {
       temp += d[i].nilai;
       n += 1;
    }
    avg = temp/n;
    printf("Nilai rata-rata adalah %.2f \n", avg);
}

void mode (struct mahasiswa e[5])
{
    int i, j, count[5], temp;
    //menentukan counting tiap elemen
    for (i = 0; i < 5; i += 1)
    {
        count[i] = 0;
        temp = indexing(e[i]);
        for (j = 1; j < 5; j += 1)
        {
            if (temp == indexing(e[j]))
            {
                count[i] += 1;
            }
            else
            {
                count[i] = count[i];
            }
        }
    }
    //menentukan modus
    int temp_max = 0;
    int loc;
    for (i = 0; i < 5; i += 1)
    {
        if (temp_max <= count[i])
        {
            temp_max = count[i];
            loc = i;
        }
        else
        {
            temp_max = temp_max;
            loc = loc;
        }
    }
    char idx = indexing(e[loc]);
    printf("Modus adalah %c", idx);
}
