#include <stdio.h>

struct mahasiswa{
    char *nama;
    int nilai;
    int NIM;
};

double findMean(struct mahasiswa m[10]){
    double sum;
    int j;
    for (j=0; j<10; j+=1){
        sum = sum + m[j].nilai;
    }
    return sum/10;
}
void sortNilai(struct mahasiswa m[10]){
    int i,j;
    int max;
    struct mahasiswa temp;
    for (i=0; i<9; i+= 1){
        max= i;                             //inisialisasi min yaitu indeks member array dengan nilai terbesar
        for (j=i+1; j<10; j+= 1){
            if(m[j].nilai >= m[max].nilai){               //mencari indeks dengan nilai terbesar untuk di-assign ke max
                max= j; 
            }
        }
        temp = m[max];                      //menukar nilai urut dari indeks terbesar dengan nilai berindeks min yang telah dicari
        m[max] = m[i];
        m[i]= temp;
    }
}