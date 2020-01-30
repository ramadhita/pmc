#include <stdio.h>
#include <string.h>

char Indeks(int nilai){
    if((nilai > 0)&& (nilai <= 50)){
        return 'E';
    }
    else if((nilai >50)&&(nilai <= 60)){
        return 'D';
    }
    else if ((nilai >60)&& (nilai <70)){
        return 'C';
    }
    else if ((nilai>=70)&& (nilai< 80)){
        return 'B';
    }
    else if ((nilai>=80)&& (nilai <= 100)){
        return 'A';
    }
}
struct DaftarNilai{
    char nama[20];
    int nilai;
    char indeks;
};

int main(){
    struct DaftarNilai Data[7];
    int i, imin, imax;
    float sum, avg;
    float max, min;

    strcpy(Data[0].nama, "Mawar");
    Data[0].nilai = 67;

    strcpy(Data[1].nama, "Melati");
    Data[1].nilai = 85;

    strcpy(Data[2].nama, "Wisteria");
    Data[2].nilai = 85;


    strcpy(Data[3].nama, "Cornation");
    Data[3].nilai = 70;


    strcpy(Data[4].nama, "Lili");
    Data[4].nilai = 60;

    min = 100;
    max, imin, imax,sum = 0;
    for (i = 0; i < 5; i++){
        Data[i].indeks = Indeks(Data[i].nilai);
        sum = sum + Data[i].nilai;
        if (Data[i].nilai <= min){
            min = Data[i].nilai;
            imin = i;
        }

        if (Data[i].nilai >= max){
            max = Data[i].nilai;
            imax =i;
        }

    }
    avg = sum/5;

    printf(" Pemegang nilai tertinggi beserta nilainya : %s, %lf\n", Data[imax].nama, max );
    printf(" Pemegang nilai terendah beserta nilainya : %s, %lf\n", Data[imin].nama, min );
    printf("Nilai Rata-rata : %lf\n", avg);

    return(0);
}

