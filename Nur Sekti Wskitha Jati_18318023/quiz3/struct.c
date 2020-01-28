#include<stdio.h>
#include<string.h>

typedef struct univ{
    char nama[100];
    int nilai;
    char indeks;
} mhs[5];

char huruf(int x){
        if (x > 80){
            return 'A';
        } else if ((x >= 80) && (x > 70)){
            return 'B';
        } else if ((x >= 70) && (x > 60)){
            return 'C';
        } else if ((x >= 60) && (x > 50)){
            return 'D';
        } else{
            return 'E';
        }
}

int maksimum(mhs data){
    int max = data[0].nilai;
    for (int i=1; i<5; i++){
        if (max<data[i].nilai){
            max = data[i].nilai;
        }
    }
    return max;
}

int minimum(mhs data){
    int min = data[0].nilai;
    for (int i=1; i<5; i++){
        if (min>data[i].nilai){
            min = data[i].nilai;
        }
    }
    return min;
}

float rata2(mhs data){
    int sum = 0;
    for (int i=0; i<5; i++){
        sum += data[i].nilai;
    }
    float rata = sum/5.0;
    return rata;
}

int callname(int x, int y){ /*x = nilai di struct, y = nilai maksimum/minimum pada struct*/
    if (x == y){
        return 1;
    } else {
        return 0;
    }
}

int modus(mhs data){
    int count[5];
    for (int i=0; i<5; i++){
        count[i] = 0;
    }
    for (int i=0; i<5; i++){
        for (int j=i+1; j<5; j++){
            if (data[i].indeks == data[j].indeks){
                count[i] +=1;
            }
        }
    }
    int max = count[0];
    for (int i=1; i<5; i++){
        if (max<count[i]){
            max = count[i];
        }
    }
    return data[max].indeks;
}

int main(){
    struct univ mhs[5];
    strcpy(mhs[0].nama,"Mawar");
    mhs[0].nilai = 67;
    strcpy(mhs[1].nama,"Melati");
    mhs[1].nilai = 85;
    strcpy(mhs[2].nama,"Wisteria");
    mhs[2].nilai = 85;
    strcpy(mhs[3].nama,"Carnation");
    mhs[3].nilai = 70;
    strcpy(mhs[4].nama,"Lili");
    mhs[4].nilai = 60;
    for (int i=0; i<5; i++){
        mhs[i].indeks = huruf(mhs[i].nilai);
    }
    char name1[5];
    for (int i=0; i<5; i++){
        name1[i] = callname(mhs[i].nilai, maksimum(mhs));
    }
    for (int i=0; i<5; i++){
        if (name1[i] == 1){
            printf("Nilai maksimumnya %d atas nama %s\n", maksimum(mhs), mhs[i].nama);
        }
    }
    char name2[5];
    for (int i=0; i<5; i++){
        name2[i] = callname(mhs[i].nilai, minimum(mhs));
    }
    for (int i=0; i<5; i++){
        if (name2[i] == 1){
             printf("Nilai minimumnya %d atas nama %s\n", minimum(mhs), mhs[i].nama);
        }
    }
    printf("Nilai rata-ratanya %f\n", rata2(mhs));
    printf("Modusnya adalah %c", modus(mhs));
}
