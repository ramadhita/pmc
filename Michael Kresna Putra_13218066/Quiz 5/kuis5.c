/*Nama         :Michael Kresna Putra
NIM           :13218066
Tanggal       :22 Februari 2020

/*Program untuk melakukan pengolahan data tabel berupa rata rata dan mengurutkan nilai. Rata-rata ditampilkan pada command prompt sedangkan pengurutan ditampilkan pada file test.csv*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
  
// membuat struct untuk data siswa 
struct Student { 
    int no; 
    int nim;
    char* name;  
    int nilai; 
}; 

void swap(int *xp, int *yp) //membuat prosedur untuk melakukan swapping
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

int main() 
{ 
    int i; 
    FILE *fptr; //deklarasi file
    fptr= fopen("test.csv", "w+");
    // deklarasi variabel untuk student
    struct Student student[10]; 
    
    // menuliskan data
    student[0].no = 1; 
    student[0].name = "Michael"; 
    student[0].nim = 13218066;  
  
    student[1].no = 2; 
    student[1].name = "Cedric"; 
    student[1].nim = 13218067; 
     
  
    student[2].no = 3; 
    student[2].name = "Martin"; 
    student[2].nim = 13218068; 
    
  
    student[3].no = 4; 
    student[3].name = "Indra"; 
    student[3].nim = 13218069; 
    
  
    student[4].no = 5; 
    student[4].name = "Ari"; 
    student[4].nim = 13218070;

    student[5].no = 6; 
    student[5].name = "CD"; 
    student[5].nim = 13218071;

    student[6].no = 7; 
    student[6].name = "Andy"; 
    student[6].nim = 13218072;

    student[7].no = 8; 
    student[7].name = "Bas"; 
    student[7].nim = 13218073;

    student[8].no = 9; 
    student[8].name = "Ode"; 
    student[8].nim = 13218074;

    student[9].no = 10; 
    student[9].name = "Pri"; 
    student[9].nim = 13218075;
    
    int sum=0;
    double rata; 
    for (i = 0; i < 10; i++) { //merandomize angka
        student[i].nilai = (rand() % 51)+50;
        sum=sum+(student[i].nilai);
    } 
    rata=sum/10;//melakukan perhitungan ratarata
    printf("Rata-ratanya adalah : %lf", rata);

    int j;
    int x[10];
    for (i=0;i<10;i++){
        x[i]=student[i].nilai;
    }
    int n = sizeof(x)/sizeof(x[0]);
    for (i = 0; i < n-1; i++){        //loop untuk melakukan sorting dengan metode bubble sorting
       for (j = 0; j < n-i-1; j++){
           if (x[j] < x[j+1]){
               swap(&x[j], &x[j+1]);
           }
       } 
    }
    

    for (i=0;i<10;i++){ //melakukan loop untuk print list ke csv
        for (j=0;j<10;j++){
            if ((student[j].nilai)==x[i]){
                student[j].no=i+1;
                fprintf(fptr, "%d,",student[j].no);
                fprintf(fptr, "%s,",student[j].name);
                fprintf(fptr, "%d,",student[j].nim);
                fprintf(fptr, "%d\n",student[j].nilai);
            }
        }
    }

    fclose(fptr); //close file
  
   
  
    return 0; 
} 