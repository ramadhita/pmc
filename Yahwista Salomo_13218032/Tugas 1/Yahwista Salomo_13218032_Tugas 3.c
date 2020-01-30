//Yahwista Salomo 13218032

#include <stdio.h>
#include <string.h>

struct Murid {
    char Nama[10];
    int Nilai;
    char Index;
};

void proses(struct Murid student[5]);
//deklarasi void

int main() {
    struct Murid student[5];
//deklarasi isi array structure
    strcpy( student[0].Nama, "Mawar");
    student[0].Nilai = 67;
    student[0].Index = 'C';

    strcpy( student[1].Nama, "Melati");
    student[1].Nilai = 85;
    student[1].Index = 'A';

    strcpy( student[2].Nama, "Wisteria");
    student[2].Nilai = 85;
    student[2].Index = 'A';

    strcpy( student[3].Nama, "Carnation");
    student[3].Nilai = 70;
    student[3].Index = 'B';

    strcpy( student[4].Nama, "Lili");
    student[4].Nilai = 60;
    student[4].Index = 'D';
    printf("*************************************************\n");
    proses(student);
}

void proses(struct Murid student[5]) {
//deklarasi variabel fungsi
    int i, max, min;
    float total, rata;
    max = student[0].Nilai;
    min = student[0].Nilai;
    total = student[0].Nilai;
    i = 1;

    int a=0, b=0, c=0, d=0;

//looping nilai total, maksimum, dan minimum
    while(i<5) {
        if (max < student[i].Nilai) {
            max = student[i].Nilai;
        };
        if (min > student[i].Nilai) {
            min = student[i].Nilai;
        };
        total += student[i].Nilai;
         i+=1;
    };
//pencetakan nilai rata-rata(dari pembagian nilai total dengan index) dan nilai maksimum dan nama peraihnya
    rata = total/(i);
    printf("Nilai rata-rata adalah: %f\n\n", rata);
    printf("Nilai maksimum adalah: %d\n", max);
    printf("Yaitu: ");
    for (i=0; i<=4; i++){
            if (student[i].Nilai == max){
            printf("%s ", student[i].Nama);
        };
    };
    printf("\n\n");
    printf("Nilai minimum adalah: %d\n", min);
    printf("Yaitu: ");
//looping nama peraih nilai minimum
    for (i=0; i<=4; i++){
            if (student[i].Nilai == min){
            printf("%s ", student[i].Nama);
        };
    };
    printf("\n\n");
    printf("Modus Index ");
//looping mencari index modus
    for (i=0; i<=4; i++){
            if (student[i].Index == 'A'){
            a+=1;
            };
            if(student[i].Index == 'B'){
            b+=1;
            };
            if(student[i].Index == 'C'){
            c+=1;
            };
            if(student[i].Index == 'D'){
            d+=1;
            };
    };
//Pencetakan index modus
    if (a>(b&&c&&d)){
        printf("A");
    }
    if (b>(a&&c&&d)){
        printf("B");
    }
    if (c>(a&&b&&d)){
        printf("C");
    }
    if (d>(b&&c&&a)){
        printf("D");
    }
    printf("\n*************************************************");
}
