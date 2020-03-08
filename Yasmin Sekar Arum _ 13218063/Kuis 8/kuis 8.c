//Yasmin Sekar Arum
//13218063
//Kuis 8
//Mengubah bentuk matrisk 10 x 10 sesuai ketentuan yang diberikan
//digunakan asumsi nilai diagoonal tidak berubah

#include <stdio.h>
#include <math.h>

//deklarasi tipe variable yang digunakan
int main (){
int MatriksA[10][10];
int MatriksB[10][10];
int i, j;

printf ("Matriks awal: \n");
//looping untuk mengisi matriks dengan nilai random (-10 sd 10)
for (i=0; i<10; i++){
    for(j=0; j<10; j++){
        MatriksA[i][j] = (rand() % -20)- 10;
        printf ("%d\t ", (MatriksA[i][j]));
    }
    printf ("\n");
}
printf("\n");

//Looping untuk mengubah bentukkan matriks sesuai dengan ketentuan
for (i= 0; i< 10; i++){ //baris
    for (j=0; j<10; j++){ //kolom
        if ((i+j)!=9 && i !=j){ // syarat untuk nilai diagonal agar tidak masuk dalam perhitugan
            if (j>=i && i <4 && j<10-i){ //memasukkan nilai atas ke bawah dan sebaliknya pada matriks baru
                MatriksB[i][j] = MatriksA[9-i][j];
                MatriksB[9-i][j] = MatriksA[i][j];
            }
            else if (i>j && j <4 && i<10-j){//memasukkan nilai kanan ke kiri dan sebaliknya pada matriks baru
                MatriksB[i][j]= MatriksA[i][9-j];
                MatriksB[i][9-j]= MatriksA[i][j];
            }
        }
        else {//memasukkan nilai diagonal pada matriks baru
            MatriksB[i][j] = MatriksA[i][j];
        }
    }
}
printf("Matriks akhir : \n");
//memunculkan nilai kembali pada matriksB yang sudah diisi dengan ketentuan pada matriks A
for (i=0; i<10; i++){
    for(j=0; j<10; j++){
        printf ("%d\t ", (MatriksB[i][j]));
    }
    printf ("\n");
}
printf("\n");



return 0;
}
