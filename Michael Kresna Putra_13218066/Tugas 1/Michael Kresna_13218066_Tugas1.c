  
//Nama      :Michael Kresna Putra
//NIM       :13218044
//Tanggal   :28 Januari 2020

#include <stdio.h>
#include <string.h>
#include "operator.h"

char inputindeks(int idx);
void max_min(struct student list[15]);
void ratarata(struct student list[15]);

int main(void)
{
    int x;                              
    struct student list[15];
        strcpy(list[0].nama, "Mawar");
        strcpy(list[1].nama, "Melati");
        strcpy(list[2].nama, "Wisteria");
        strcpy(list[3].nama, "Carnation");
        strcpy(list[4].nama, "Lili");

        list[0].nilai = 67;
        list[1].nilai = 85;
        list[2].nilai = 85;
        list[3].nilai = 70;
        list[4].nilai = 60;

        for(x=0; x<=4; x=x+1){
            if (list[x].nilai >80){
                list[x].indeks='A';
            }
            else if ((list[x].nilai<80) && (list[x].nilai>=70)){
                list[x].indeks = 'B';
            }
            else if (list[x].nilai>60 && list[x].nilai < 70){
                list[x].indeks = 'C';
            }
            else{
                list[x].indeks = 'D';
            }
        }

        max_min(list);
        ratarata(list);

    return(0);
}