#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

 typedef struct {
    char* nama;
    int nilai;
    int nim;
} mahasiswa;

void swapInt(int *xp, int *yp)  
{  
    int *temp = xp;  
    xp = yp;  
    yp = temp;  
}

void swapString(char *str1, char *str2) 
{ 
  char *temp = str1; 
  str1 = str2; 
  str2 = temp; 
}   

int main (){
    mahasiswa data[10];
    srand((signed) time(0));

    data[0].nama = "A";
    data[0].nim = 13218037;
    data[0].nilai = rand() % (100 + 1 - 50) + 50;

    data[1].nama = "B";
    data[1].nim = 13218063;
    data[1].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[2].nama = "C";
    data[2].nim = 13218067;
    data[2].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[3].nama = "D";
    data[3].nim = 13218089;
    data[3].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[4].nama = "E";
    data[4].nim = 13218087;
    data[4].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[5].nama = "F";
    data[5].nim = 13218052;
    data[5].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[6].nama = "G";
    data[6].nim = 13218042;
    data[6].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[7].nama = "H";
    data[7].nim = 13218036;
    data[7].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[8].nama = "I";
    data[8].nim = 13218011;
    data[8].nilai = rand() % (100 + 1 - 50) + 50;;    

    data[9].nama = "J";
    data[9].nim = 13218057;    
    data[9].nilai = rand() % (100 + 1 - 50) + 50;;

    FILE *fp;
    fp = fopen("quiz5.txt", "w");
    float count = 0;
    for (int i = 0; i < 10; i++){
        count += data[i].nilai;
    }
    fprintf(fp, "mean : %f\n", count / 10);
    fprintf(fp, "nama, nim, nilai\n");
    for (int i = 0; i < 10; i++){
        if (i == 9){
            fprintf(fp, "%s, %d, %d", data[i].nama, data[i].nim, data[i].nilai);
        } else {
            fprintf(fp, "%s, %d, %d\n", data[i].nama, data[i].nim, data[i].nilai);
        }
    }
    fclose(fp);

    mahasiswa temp;
    for (int i = 0; i < 10 - 1; i++){
        for (int j = 0; j < 10 - i - 1; j++){
            if (data[j].nilai < data[j + 1].nilai){
                temp.nama = data[j].nama;
                data[j].nama = data[j + 1].nama;
                data[j + 1].nama = temp.nama;
                temp.nilai = data[j].nilai;
                data[j].nilai = data[j + 1].nilai;
                data[j + 1].nilai = temp.nilai;
                temp.nim = data[j].nim;
                data[j].nim = data[j + 1].nim;
                data[j + 1].nim = temp.nim;
            }
        }
    }

    fp = fopen("quiz5Sorted.txt", "w");
    count = 0;
    for (int i = 0; i < 10; i++){
        count += data[i].nilai;
    }
    fprintf(fp, "mean : %f\n", count / 10);
    fprintf(fp, "nama, nim, nilai\n");
    for (int i = 0; i < 10; i++){
        if (i == 9){
            fprintf(fp, "%s, %d, %d", data[i].nama, data[i].nim, data[i].nilai);
        } else {
            fprintf(fp, "%s, %d, %d\n", data[i].nama, data[i].nim, data[i].nilai);
        }
    }
    fclose(fp);

    return 0;
}