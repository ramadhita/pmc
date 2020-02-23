#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{
    int nomor;
    int NIM;
    char Nama[10];
    int Nilai;
};

int main(){
    struct data arr[10];
    struct data temp;
    int sum=0;
    float rata;
    for (int i = 0; i < 10; i++)
    {
        arr[i].nomor=i+1;
        arr[i].NIM = 18309002+(i*2) ;
        scanf("%s", &arr[i].Nama);
        arr[i].Nilai= (rand()%(50+1))+50;
        sum=sum+arr[i].Nilai;
    }
    rata = sum/10;

    FILE *file1;
    file1 = fopen("Data Kelas.txt","w+");
    for (int i = 0; i < 10; i++){
        fprintf(file1,"%d,%d,%s,%d\n",arr[i].nomor,arr[i].NIM,arr[i].Nama,arr[i].Nilai);
    }
    fprintf(file1,"rata rata = %.2f \n", rata);
    fclose(file1);

//sort
    for (int j=0;j<=10;j++){
        for (int i=0;i<=9;i++){
            if(arr[i+1].Nilai>arr[i].Nilai){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        
    }

    FILE *file2;
    file2 = fopen("Sorted Data Kelas.txt", "w+");
    for (int i = 0; i < 10; i++){
        fprintf(file2,"%d,%d,%s,%d\n",i+1,arr[i].NIM,arr[i].Nama,arr[i].Nilai);
    }
    fclose(file2);
    return(0);
}


