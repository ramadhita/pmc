#include<string.h>

typedef struct Data {
    char name[20];
    char indeks;
    int nilai;
} data;

void swap(data* a, data* b);

char ind(int nilai){
    if (nilai > 90)
    {
        /* code */
        return 'A';
    }
    else if (nilai > 80)
    {
        /* code */
        return'B';
    }
    else if (nilai > 70)
    {
        /* code */
        return 'C';
    }
    else if (nilai > 60)
    {
        /* code */
        return 'D';
    }
    else
    {
        /* code */
        return 'E';
    }
}

data input(int n)
{
    /* data */
    data a;
    printf("    Nama mahasiswa %d :  ", n);
    scanf(" %[^\n]%*c", &a.name);
    
    do
    {
        /* code */
        printf("    Nilai           :   ");
        scanf(" %d", &a.nilai);

    } while (a.nilai < 0 || a.nilai >100);

    a.indeks = ind(a.nilai);
    printf("\n");
    return(a);
};


// swap
void swap(data* a, data* b)
{
    data  t = *a;
    *a = *b;
    *b = t;
}



// void data(struct data mahasiswa[5]){
    
//     /* data */
//     mahasiswa[0].name = "Mawar";
//     mahasiswa[0].nilai = 67;
//     mahasiswa[0].indeks = 'C';

//     mahasiswa[1].name = "Melati";
//     mahasiswa[1].nilai = 85;
//     mahasiswa[1].indeks = 'A';
    
//     mahasiswa[2].name = "Wisteria";
//     mahasiswa[2].nilai = 85;
//     mahasiswa[2].indeks = 'A';

//     mahasiswa[3].name = "Carnation";
//     mahasiswa[3].nilai = 70;
//     mahasiswa[3].indeks = 'B';
    
//     mahasiswa[4].name = "Lili";
//     mahasiswa[4].nilai = 60;
//     mahasiswa[4].indeks = 'D';
// };
//     };