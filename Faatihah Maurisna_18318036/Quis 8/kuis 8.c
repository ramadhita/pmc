#include<stdio.h>
#include<math.h>

//spesifikasi menukar nilai yang ada pada diagonal matriks a[10][10] di kanan-kiri diagonal dan atas-bawah diagona;
int a[10][10], i,j,temp;
//fungsi rand nilai matriks
int rand_nilai()
{
    return(rand()%(21)-10); //jadi kita kalau mau mulai dari 0, nah diambil 20 dikurangi 10
}
int main()
{
    for (i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            a[i][j]=rand_nilai();   //memanggil fungsi rand_nilai untuk mengisi matriks
            printf("%d\t", a[i][j]);
            if (j==9)               //saat j = 9, membuat baris baru lagi
            {
                printf("\n");
            }
        }
    }
    printf("\n");
//prosedur untuk menukar baris
    for (i=0; i<5;i++)
    {
        for(j=i+1; j<(9-i); j++)
        {
            temp=a[i][j];
            a[i][j]=a[9-i][j];
            a[9-i][j]=temp;

           // printf("%d\t", a[i][j]);
        }
    }
//prosedure menukar kolom
    for (j=0; j<5;j++)
    {
        for(i=j+1; i<(9-j); i++)
        {
            temp=a[i][j];
            a[i][j]=a[i][9-j];
            a[i][9-j]=temp;

            //printf("%d\t", a[i][j]);

        }
    }
    printf("\n");       //untuk memberi space antara matriks asli dan matriks yg sudah ditukar
    //procedure print nilai matriks baru
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            printf("%d\t", a[i][j]);
            if (j==9)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

