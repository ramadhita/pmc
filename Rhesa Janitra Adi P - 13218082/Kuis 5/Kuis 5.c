
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int nim;
    char nama[99];
    int nilai;
};


int main()
{
    struct student anak[10], temp[10];
    char temp_nama[99]; 
    int temp_nilai;
    int temp_nim;
    int i, j, k, l, m;
    FILE *file;
    
    file = fopen("nama.txt", "w");
    strcpy(anak[1].nama, "Andi");
    strcpy(anak[2].nama, "Fandi");
    strcpy(anak[3].nama, "Awan");
    strcpy(anak[4].nama, "Ijul");
    strcpy(anak[5].nama, "Kevin");
    strcpy(anak[6].nama, "Syafi");
    strcpy(anak[7].nama, "Rhesa");
    strcpy(anak[8].nama, "Zulfikar");
    strcpy(anak[9].nama, "Genji");
    strcpy(anak[10].nama, "Aufa");
    
    anak[1].nim = 1322001;
    anak[2].nim = 1322002;
    anak[3].nim = 1322003;
    anak[4].nim = 1322004;
    anak[5].nim = 1322005;
    anak[6].nim = 1322006;
    anak[7].nim = 1322007;
    anak[8].nim = 1322008;
    anak[9].nim = 1322009;
    anak[10].nim = 1322010;
    
    
    for (i=1;i<=10;++i)
    {
        anak[i].nilai = (rand()%50)+50;
    }
    
    
    fprintf(file, "List data siswa\n");
    fprintf(file, "No,NIM,Nama,Nilai\n");
    for(j=1;j<=10;++j)
    {
        fprintf(file, "%d,%d,%s,%d\n", j, anak[j].nim, anak[j].nama, anak[j].nilai);
    }
    
    
    
    for (k=1;k<=10;++k)
    {
        for (l=1;l<=10;++l)
        {
            if (anak[k].nilai>anak[l].nilai)
            {
                temp[k] = anak[k];
                anak[k] = anak[l];
                anak[l] = temp[k];
               
            }
        }
    }
    
    fprintf(file, "\nList hasil sorting");
    fprintf(file, "\nNo,NIM,Nama,Nilai");

    for(m=1;m<=10;++m)
    {
        fprintf(file, "\n%d,%d,%s,%d", m, anak[m].nim, anak[m].nama, anak[m].nilai);
    }

    fclose(file);
    

    return 0;
}
