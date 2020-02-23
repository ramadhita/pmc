#include <stdio.h>
#include <stdlib.h>

//fungsi random nilai dari array
int random_yo(int lower,int upper)
{
    int num;
    num = (rand() % (upper - lower + 1)) + lower;
    return num;
}
int main()
{
    //Deklarasi struck dan variabel lain
    struct siswa
    {
    int no;
    char nama[50];
    int nim;
    int nilai;
    };
    int pin;
    int i,j,k;
    int max = 0;
    int min = 101;
    int tmax;
    int tmin;
    struct siswa arr[10];
    struct siswa arr1[10];
    struct siswa tinggi_ke_rendah[10];
    struct siswa rendah_ke_tinggi[10];
    int jumlah = 0;
    int rata ;

    //Pengisian nilai awal
    strcpy(arr[0].nama, "irfan");
    strcpy(arr[1].nama,"raka");
    strcpy(arr[2].nama,"ariel");
    strcpy(arr[3].nama,"augee");
    strcpy(arr[4].nama,"jul");
    strcpy(arr[5].nama,"jek");
    strcpy(arr[6].nama,"azka");
    strcpy(arr[7].nama,"bambang");
    strcpy(arr[8].nama,"putri");
    strcpy(arr[9].nama,"bieber");
    arr[0].nim = 12345678;
    arr[1].nim = 12345679;
    arr[2].nim = 12345677;
    arr[3].nim = 12345670;
    arr[4].nim = 12356709;
    arr[5].nim = 12345678;
    arr[6].nim = 12374222;
    arr[7].nim = 11234556;
    arr[8].nim = 12343453;
    arr[9].nim = 21222334;

    // Mengisi nilai pada array dan memasukkan bagian yang sama ke array yang berbeda
    for (i=0;i<10;i++)
    {
        arr[i].no = i;
        arr[i].nilai = random_yo(50,100);
        jumlah = jumlah = arr[i].nilai;
        arr1[i] = arr[i];
    }
    //File dan buka file
    FILE*fp;
    FILE*fp2;
    FILE*fp3;
    fp = fopen("tinggi_ke_rendah.txt","w");
    fp2 = fopen("rendah_ke_tinggi.txt","w");
    fp3 = fopen("rata-rata.txt","w");
    //Mencari nilai maksimum dan minimum lalu dipindahkan ke array yang berbeda
    for (j=0;j<10;j++)
    {
        for (k=0;k<10;k++)
        {
            if (max<arr[k].nilai)
            {
                max = arr[k].nilai;
                tmax = k;
            }
            if (min>arr1[k].nilai)
            {
                min = arr1[k].nilai;
                tmin = k;
            }
        }
        //Dimasukkan ke array yang berbeda
        tinggi_ke_rendah[j]=arr[tmax];
        rendah_ke_tinggi[j]=arr1[tmin];
        //Menulis isi array ke file
        fprintf(fp,"%d  %s  %d  %d \n",j,tinggi_ke_rendah[j].nama,tinggi_ke_rendah[j].nim,tinggi_ke_rendah[j].nilai);
        fprintf(fp2,"%d %s  %d  %d \n",j,rendah_ke_tinggi[j].nama,rendah_ke_tinggi[j].nim,rendah_ke_tinggi[j].nilai);
        arr[tmax].nilai = 0;
        arr1[tmin].nilai = 101;
        max = 0;
        min = 101;
    }
    //menghitung rata rata dan memasukkan ke file
    rata = jumlah/10;
    fprintf(fp3, "rata - rata : %d\n",rata);
    //menghitung nilai maksimum
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
