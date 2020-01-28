#include <stdio.h>
#include <string.h>

// definisi variable
typedef struct {
    char nama[20];
    char indeks;
    int nilai;
} data;

typedef struct {
    data datapoint[20];
    int number_data;
} database;

// Fungsi
//   max
int max(database database){

    int max, i;
    max = database.datapoint[0].nilai;
    for(i = 1; i < database.number_data; i++){
        if(database.datapoint[i].nilai > max){
            max = database.datapoint[i].nilai;
        }
    }
    return max;

};

int max_n(database database){

    int max, i;
    int m = 0;
    max = database.datapoint[0].nilai;
    for(i = 1; i < database.number_data; i++){
        if(database.datapoint[i].nilai > max){
            max = database.datapoint[i].nilai;
            m = i;
        }
    }
    return m;

};


//   min
int min(database database){
    
    int min, i;
    min = database.datapoint[0].nilai;
    for(i = 1; i < database.number_data; i++){
        if(database.datapoint[i].nilai < min){
            min = database.datapoint[i].nilai;
        }
    }
    return min;

};

int min_n(database database){

    int min, i;
    int m = 0;
    char min_n[20];
    min = database.datapoint[0].nilai;
    for(i = 1; i < database.number_data; i++){
        if(database.datapoint[i].nilai < min){
            min = database.datapoint[i].nilai;
            m = i;
        }
    }
    return m;
};

//   avg
float avg(database database) {

    float avg = 0;
    int i;
    for(i = 0; i < database.number_data; i++){
        avg += database.datapoint[i].nilai;
    }
    avg /= database.number_data;
    return avg;
    
};


int main(void){

    int max_nilai,min_nilai,max_nama,min_nama;
    float rerata;

    database database;
    // input
    // input jumlah data
    int x;
    char y[20];
    float z;

    database.number_data = 5;

    strncpy(database.datapoint[0].nama, "Mawar" , 20);
    strncpy(database.datapoint[1].nama, "Melati", 20);
    strncpy(database.datapoint[2].nama, "Wisteria", 20);
    strncpy(database.datapoint[3].nama, "Carnation", 20);
    strncpy(database.datapoint[4].nama, "Lily", 20);

    database.datapoint[0].nilai = 67;
    database.datapoint[1].nilai = 85;
    database.datapoint[2].nilai = 85;
    database.datapoint[3].nilai = 70;
    database.datapoint[4].nilai = 60;

    for(x = 0; x < database.number_data; x++){
        if(database.datapoint[x].nilai > 80){
            database.datapoint[x].indeks = 'A';
        } else if(database.datapoint[x].nilai > 50)
        {
            database.datapoint[x].indeks = 'B';
        } else {
            database.datapoint[x].indeks = 'C'; 
        }
    }

    // proses
    max_nilai = max(database);
    max_nama = max_n(database);
    min_nilai = min(database);
    min_nama = min_n(database);
    rerata = avg(database);

    // output
    printf("Nilai maks %d oleh %s senilai %c", max_nilai, database.datapoint[max_nama].nama,database.datapoint[max_nama].indeks);
    printf("\nNilai min %d oleh %s senilai %c",min_nilai, database.datapoint[min_nama].nama,database.datapoint[min_nama].indeks);
    printf("\nNilai rerata %lf", rerata);

    return 0;
}