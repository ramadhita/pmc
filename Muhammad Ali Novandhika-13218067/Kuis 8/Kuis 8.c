/* EL2008 Pemecahan Masalah dengan C 2019/2020
* Hari dan Tanggal : Selasa, 3 Maret 2020
* Nama (NIM) : Muhammad Ali Novandhika (13218067)
* Nama File : Kuis8.c
* Deskripsi : Membuat matriks 10x10 dengan nilai antara -10 hingga 10 dan menukar kuadran matriksnya
*/


#include <stdio.h>
#include <math.h>
int main()
{
    int a[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
        int num = (rand() % (10 - (-10) + 1)) + (-10);
        a[i][j]=num;
        }
    }
        for (int j = 0; j < 10; j++) {
        printf("%d    %3d    %3d    %3d    %3d    %3d    %3d    %3d    %3d    %3d\n",a[0][j],a[1][j],a[2][j],a[3][j],a[4][j],a[5][j],a[6][j],a[7][j],a[8][j],a[9][j]);
        }
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<(9-i);j++)
        {   int temp1 = a[i][j];
            a[i][j]=a[9-i][j];
            a[9-i][j]=temp1;
            int temp2 = a[j][i];
            a[j][i]=a[j][9-i];
            a[j][9-i]=temp2;
        }
    }
    printf("\n\n");
    for (int j = 0; j < 10; j++) {
        printf("%d    %3d    %3d    %3d    %3d    %3d    %3d    %3d    %3d    %3d\n",a[0][j],a[1][j],a[2][j],a[3][j],a[4][j],a[5][j],a[6][j],a[7][j],a[8][j],a[9][j]);
    }
    return 0;
}
