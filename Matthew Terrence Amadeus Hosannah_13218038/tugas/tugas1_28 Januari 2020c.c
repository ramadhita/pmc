//PMC
//tugas1
//Matthew Terrence A. H. / 13218038
//data struct

#include <stdio.h>
#include <string.h>

struct data {
    char nama[100];
    int nilai;
    char indeks;
};

void proses(struct data no[5]);

int main() {
    struct data no[5];

    strcpy( no[0].nama, "Mawar");
    no[0].nilai = 67;
    no[0].indeks = 'C';

    strcpy( no[1].nama, "Melati");
    no[1].nilai = 85;
    no[1].indeks = 'A';

    strcpy( no[2].nama, "Wisteria");
    no[2].nilai = 85;
    no[2].indeks = 'A';

    strcpy( no[3].nama, "Carnation");
    no[3].nilai = 70;
    no[3].indeks = 'B';

    strcpy( no[4].nama, "Lili");
    no[4].nilai = 60;
    no[4].indeks = 'D';
    proses(no);
}

void proses(struct data no[5]) {

    int i, max, min;
    float sum, rata;
    max = no[0].nilai;
    min = no[0].nilai;
    sum = no[0].nilai;
    i = 1;

    


    while(i<5) {
        if (max < no[i].nilai) {
            max = no[i].nilai;
        };
        
        if (min > no[i].nilai) {
            min = no[i].nilai;
        };
        
        sum += no[i].nilai; //sum
        i+=1;
        
        rata = sum/(i); 
    };

    
    
    for (i=0; i<=4; i++){
            if (no[i].nilai == max){
            printf("%s dan ", no[i].nama);
        };
    };
    printf("dengan nilai maksimum : %d\n", max);
    
    printf("\n\n");
    
    for (i=0; i<=4; i++){
            if (no[i].nilai == min){
            printf("%s ", no[i].nama);
        };
    };
    printf("dengan nilai minimum : %d\n", min);

    
    printf("\n\n");
    printf("Nilai rata-rata adalah: %f\n\n", rata);
    
    

}
