#include <stdio.h>
#include <string.h>
/*Nadhira Anindita K - 18318033*/

struct nilai
{
    /* data */
    char nama[10];
    int nilai;
    char idx;
};

char ind (int x){

    char hasil;
        if (x<=60){
            hasil = 'D';
        }
        else if ((x>60)&&(x<70)){
            hasil = 'C';
        }
        else if ((x>=70)&&(x<80)){
            hasil = 'B';
        }
        else if (x>=80){
            hasil = 'A';
        }
    return hasil;
}

int main(){
    struct nilai daftar[5];
    int i;
    char* ma;
    char* mi;
    int p1, p2, mods, temp, k, j;
    float avg, avgr;

    strcpy(daftar[0].nama, "Mawar");
    daftar[0].nilai = 67;
    
    strcpy(daftar[1].nama, "Melati");
    daftar[1].nilai = 85;

    strcpy(daftar[2].nama, "Wisteria");
    daftar[2].nilai = 85;

    strcpy(daftar[3].nama, "Carnation");
    daftar[3].nilai = 70;

    strcpy(daftar[4].nama, "Lili");
    daftar[4].nilai = 60;

    for (i=0;i<=4;i++){
        daftar[i].idx = ind(daftar[i].nilai);
        }

    ma = daftar[0].nama;
    p1 = daftar[0].nilai;
    mi = daftar[0].nama;
    p2 = daftar[0].nilai;

    for (i=1;i<=4;i++){
        if (daftar[i].nilai > p1){
            p1 = daftar[i].nilai;
            ma = daftar[i].nama;
        }
    }
    for (i=1;i<=4;i++){
        if (daftar[i].nilai < p2){
            p2 = daftar[i].nilai;
            mi = daftar[i].nama;
        }
    }
    avg=0;
    for (i=0;i<5;i++){
        avg=(avg+daftar[i].nilai);
    }
    avgr=avg/5;

    mods = 0;
    temp = 0;
    k = -1;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (daftar[j].idx==daftar[i].idx){
                temp = temp+1;
            }
        }
        if (temp>mods){
            mods=temp;
            temp = 0;
            k = k+1;
        }
        else {
            temp = 0 ;
        }
    }

    for (i=0;i<5;i++){
        printf(" %s  %d  %c \n\n",daftar[i].nama, daftar[i].nilai, daftar[i].idx);
    }

    printf("Nilai tertinggi : ");
    for (i=0;i<5;i++){
        if (daftar[i].nilai==p1){
            printf(" %s  %d  %c\n",daftar[i].nama, daftar[i].nilai, daftar[i].idx);
        }
    }
    printf("\n\n");

    printf("Nilai terendah : ");
    for (i=0;i<5;i++){
        if (daftar[i].nilai==p2){
            printf(" %s  %d  %c",daftar[i].nama, daftar[i].nilai, daftar[i].idx);
        }
    }
    printf("\n\n");
    printf("Index terbanyak adalah %c sebanyak %d\n", daftar[k].idx, mods);
    printf("\n");
    printf("rata - rata nilai adalah %.4f", avgr);
    return(0);
}

