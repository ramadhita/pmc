#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct data{ // inisiasi struct bernama data yang berisi no, nim, nama, dan nilai
    int no;
    int nim;
    char nama[10];
    int nilai;
};

int main()
{
    struct data arr[10], a; // inisiasi struct sebuah array

    strcpy(arr[0].nama, "Mawar"); // input nama mahasiswa pada array struct nama
    strcpy(arr[1].nama, "Melati");
    strcpy(arr[2].nama, "Wisteria");
    strcpy(arr[3].nama, "Carnation");
    strcpy(arr[4].nama, "Lili");
    strcpy(arr[5].nama, "Aby");
    strcpy(arr[6].nama, "Nadhira");
    strcpy(arr[7].nama, "Fey");
    strcpy(arr[8].nama, "San");
    strcpy(arr[9].nama, "Fadia");

    arr[0].nim = 18318001; // input nim mahasiswa pada array struct nama
    arr[1].nim = 18318011;
    arr[2].nim = 18318015;
    arr[3].nim = 18318017;
    arr[4].nim = 18318024;
    arr[5].nim = 18318035;
    arr[6].nim = 18318037;
    arr[7].nim = 18318040;
    arr[8].nim = 18318042;
    arr[9].nim = 18318043;



    int i; // inisiasi i untuk melakukan looping
    i =0;
    float sum, rata; // inisiasi sum dan rata untuk menentukan nilai rata-rata
    sum =0;

    for(i=0; i<10; i++)
    {
        arr[i].no = i+1; // input kolom no pada array struct no dengan menggunakan increment looping for 
    }
    
    for(i=0; i<10; i++) // looping kolom nilai pada array struct nilai
    {
        arr[i].nilai = (rand()%(50)) + 50; //input kolom nilai dengan menggunakan random
        sum += arr[i].nilai;  // menjumlahkan seluruh nilai pada array struct nilai 
    }
    
    rata = sum/10.0; // memproses nilai rata-rata 

    FILE *filet; // pointer file
    filet = fopen("nilai.txt","w"); // membuat file "nilai.txt" dalam mode Write
    for(i=0; i<10; i++)
    {
        fprintf(filet, "%d %d %s %d\n", arr[i].no, arr[i].nim, arr[i].nama, arr[i].nilai); // output no, nim, nama, nilai
    }
    fprintf(filet, "Nilai rata-rata: %.2f\n",rata); // output nilai rata- rata
    fclose(filet); // menutup file

    int j=0;

    // proses sorting nilai
    for (i = 0; i < 10; ++i) 
        {   
            for (j = i + 1; j < 10; ++j)
            {
                if (arr[i].nilai < arr[j].nilai) 
                {
                    a =  arr[i];
                    arr[i] = arr[j]; // menukar nilai dengan nilai yang lebih besar
                    arr[j] = a;
                }
            }
 
        }
    

    FILE *file; // pointer file
    file = fopen("nilaisort.txt","w"); // membuat file "nilaisort.txt" dalam mode Write
    for(i=0; i<10; i++)
    {
        fprintf(file, "%d %d %s %d\n", arr[i].no, arr[i].nim, arr[i].nama, arr[i].nilai); // output no, nim, nama, dan nilai yang sudah di sort
    }
    fclose(file); // menutup file


}

