#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int random(int i){
   return (rand() %(50+1) +50);
}

struct Data{
    int no;
    int nim;
    char nama[20];
    int nilai;
};

int main(){
    struct Data DaftarNilai[10];
    struct Data Temp;
    int i,j,total=0;
    float rata2;

    strcpy(DaftarNilai[0].nama, "Jamie");
    DaftarNilai[0].nim = 12345679;

    strcpy(DaftarNilai[1].nama, "Abed");
    DaftarNilai[1].nim = 12345678;
    
    strcpy(DaftarNilai[2].nama, "Bed");
    DaftarNilai[2].nim = 22345678;  

    strcpy(DaftarNilai[3].nama, "Cin");
    DaftarNilai[3].nim = 32345678;

    strcpy(DaftarNilai[4].nama, "Dayo");
    DaftarNilai[4].nim = 42345678;

    strcpy(DaftarNilai[5].nama, "Emelie");
    DaftarNilai[5].nim = 52345678;

    strcpy(DaftarNilai[6].nama, "Fey");
    DaftarNilai[6].nim = 62345678;

    strcpy(DaftarNilai[7].nama, "Ghina");
    DaftarNilai[7].nim = 72345678;

    strcpy(DaftarNilai[8].nama, "Hachiko");
    DaftarNilai[8].nim = 82345678;

    strcpy(DaftarNilai[9].nama, "Inuyasha");
    DaftarNilai[9].nim = 92345678;

    for (i=0; i<10; i++){
        DaftarNilai[i].no = i+1;
    }


    for (int i =0; i<=10; i++){
        DaftarNilai[i].nilai=random(50,100);
        total = total+DaftarNilai[i].nilai;
    }

    rata2 = total/10.0;

    FILE *before;
    before = fopen("Bsort.txt","w");
    for(i=0; i<10; i++){
        fprintf(before, "%d %d %s %d\n", DaftarNilai[i].no, DaftarNilai[i].nim, DaftarNilai[i].nama, DaftarNilai[i].nilai);
    }
    fprintf(before, "Nilai rata-rata: %.2f\n",rata2);
    fclose(before);

    for (int i = 0; i <10; i++){
		for (int j = i; j < 10; j++){
			if (DaftarNilai[j].nilai > DaftarNilai[i].nilai){
				Temp = DaftarNilai[i];
                DaftarNilai[i] = DaftarNilai[j];
                DaftarNilai[j] = Temp;
			}  
		}
	}

    FILE *after;
    after = fopen("Sort.txt","w");
    for(i=0; i<10; i++){
        fprintf(after, "%d %d %s %d\n", DaftarNilai[i].no, DaftarNilai[i].nim, DaftarNilai[i].nama, DaftarNilai[i].nilai);
    }
    fclose(after);

}
