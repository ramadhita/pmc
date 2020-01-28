//Memanggil library yang akan digunakan 
#include <stdio.h>
#include <string.h>

/*
Mendeklarasikan tipe data yang digunakan untuk nama, nilai, dan indeks
*/
struct tabel
{
    char nama[100];
    int nilai;
    char indeks;
};

/*
Fungsi average berfungsi untuk mencari 
rata - rata dari seluruh nilai mahasiswa
*/
float average(struct tabel *data)
{
    float avg, total;
    avg = 0;
    total = 0;


    for (int j = 0; j < 5; j++)
    {
       total = total + data[j].nilai;
    }
    avg = (total/5);

    return avg;
}

/*
Fungsi maksimum berfungsi untuk 
memberikan output nilai 
maksimal mahasiswa
*/
int maksimum(struct tabel *data)
{
    int max;
    max = 0;

    for (int k = 0; k < 5; k++)
    {
        if (max <= data[k].nilai)
        {
            max = data[k].nilai;
        }
    }

    return max;
}

/*
Fungsi minimum berfungsi untuk 
mencari nilai minimum mahasiswa
*/
int minimum(struct tabel *data)
{
    int min;
    min = 10000;

    for (int l = 0; l < 5; l++)
    {
        if (min > data[l].nilai)
        {
            min = data[l].nilai;
        }
    }
    return min;
}

/*
Fungsi modes berfungsi untuk mencari 
modus dari seluruh nilai mahasiswa
*/
int modes(struct tabel *data)
{
    int count, max_nilai = 0, max_count = 0;
    for (int i = 0; i < 5; i++)
    {
        count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (data[i].nilai == data[j].nilai)
            {
                count += 1;
            }
            
        }
        if (count > max_count)
        {
            max_count = count;
            max_nilai = data[i].nilai;
        } 
    }
    return max_nilai;
}

/*Fungsi grade berfungsi untuk mengubah
nilai dari modus yang didapatkan pada 
fungsi modes menjadi indeks */
char grade(int nilai)
{
    char indeks;
        if ((nilai > 65) && (nilai < 69))
        {
            indeks = 'C';
        }
        
        else if (nilai > 80)
        {
            indeks = 'A';
        }

        else if ((nilai > 69) && (nilai < 79))
        {
            indeks = 'B';
        }

        else if (nilai < 65)
        {
            indeks = 'D';
        }
    return indeks;
}

int main() 
{
    /*Dibawah ini merupakan deklarasi tipe data dan 
    nilai awal dari variabel yang akan digunakan 
    pada program */
    float avg, total;

    char nama_max[100];
    char nama_min[100];
    char nama_min2[100];

    int max, min, modus = 0;

    char indeks;

    max = 0; //Mendek
    min = 10000;


    /*
    Dibawah ini merupakan pemasukkan 
    nilai yang di assign pada program 
    pada indeks struct masing - masing
    */
    struct tabel data[5];

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
    

    /*
    Nested loop berikut merupakan 
    batas interval nilai yang 
    mewakilkan indeks yang akan ditampilkan
    */
    for (int i = 0; i < 5; i++)
    {
        if ((data[i].nilai > 65) && (data[i].nilai < 69))
        {
            data[i].indeks = 'C';
        }
        
        else if (data[i].nilai > 80)
        {
            data[i].indeks = 'A';
        }

        else if ((data[i].nilai > 69) && (data[i].nilai < 79))
        {
            data[i].indeks = 'B';
        }

        else if (data[i].nilai < 65)
        {
            data[i].indeks = 'D';
        }
    }

    avg = average(data); //Memanggil nilai fungsi rata-rata

    max = maksimum(data); //Memanggil fungsi nilai maksimum
    min = minimum(data); // Memanggil fungsi nilai minimum

    modus = modes(data); //Memanggil fungsi modus
    
    indeks = grade(modus); //Memanggil fungsi indeks sesuai dengan nilai modus yang didapatkan

    /*
    Dibawah ini program menampilkan nilai rata - rata,
    nilai modus, nilai maksimum, dan nilai minimum
    */
    printf("Rata - rata : %.2f \n", avg);
    printf("Nilai Modus : %d %c", modus, indeks);

    for (int m = 0; m < 5; m++)
    {
        if (max == data[m].nilai)
        {
            printf("\nNilai Maksimum : %d %s", max, data[m].nama);
        }

        else if (min == data[m].nilai)
        {
            printf("\nNilai Minimum : %d %s", min, data[m].nama);
        }
    }    

    return 0;
}