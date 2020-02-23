#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct data
{
    int nim;
    char nama[20];
    int nilai;
};

main()
{
    FILE *fp;
    fp = fopen("kotor2.txt","w+");

    int i,j;
    struct data d[10];
    struct data temp;

    for (i = 0;i <10; i++)
    {
        d[i].nilai = rand() % 50 + 50; //isi nilai range 50-100
    }

    for (i = 0; i < 10; i++)
    {
        d[i].nim = 13218000 + i;
    }

strcpy(d[0].nama, "Carnation1");
strcpy(d[1].nama, "Carnation2");
strcpy(d[2].nama, "Carnation3");
strcpy(d[3].nama, "Carnation4");
strcpy(d[4].nama, "Carnation5");
strcpy(d[5].nama, "Carnation6");
strcpy(d[6].nama, "Carnation7");
strcpy(d[7].nama, "Carnation8");
strcpy(d[8].nama, "Carnation9");
strcpy(d[9].nama, "Carnation10");

fprintf(fp,"No\t NIM\t\t Nama\t\t Nilai\n");

for(i = 0; i < 10; i++)
{
    fprintf(fp,"%d\t %d\t %s\t %d\n", i + 1, d[i].nim, d[i].nama, d[i].nilai);

}


    int jumlah = 0;
    float rerata;
    for(i = 0; i < 10; i++)
    {
        jumlah += d[i].nilai;
    }
    rerata = jumlah / 10;

    fprintf(fp, "Rata Rata :%f",rerata);



for(i = 0; i < 10; i++)
{
    for(j = 0; j < 10-i-1; j++)
        if(d[j].nilai < d[j+1].nilai)
    {
        temp.nilai = d[j].nilai;
        temp.nim = d[j].nim;
        strcpy(temp.nama, d[j].nama);

        d[j].nilai = d[j+1].nilai;
        d[j].nim = d[j+1].nim;
        strcpy(d[j].nama, d[j+1].nama);

        d[j+1].nilai = temp.nilai;
        d[j+1].nim = temp.nim;
        strcpy(d[j+1].nama, temp.nama);
    }
}

fprintf(fp,"\n\nData yang telah diurut:");
fprintf(fp,"\nNo\t NIM\t\t Nama\t\t Nilai\n");

for(i = 0; i < 10; i++)
{
    fprintf(fp,"%d\t %d\t %s\t %d\n", i + 1, d[i].nim, d[i].nama, d[i].nilai);

}



fclose(fp);
}

