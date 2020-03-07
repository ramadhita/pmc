//Nama: Salma Majidah
//NIM: 18318010
//KUIS 8

//Mengisi matriks 10x10 dengan angka random dari -10 hingga 10
//dan menukar isi matriks dari kanan ke kiri, dan atas ke bawah
//dengan batas diagonal matriks yang tidak mengalami penukaran.
#include <stdio.h>

//PROGRAM UTAMA
int main (){
	//Inisialisasi variabel
	int A[10][10], temp, i, j;
	
	//Mengisi matriks A dengan angka random (-10 hingga 10)
	// dan mengeluarkan matriks ke layar
	for (i=0; i<10;i++){
		for (j=0; j<10; j++){
			A[i][j] = (rand()%20)-10;
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//Melakukan penukaran
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			//Jika angka bukanlah diagonal matriks
			if (j!=i && (i+j != 9)){
				//Penukaran segmen kanan ke kiri dan sebaliknya
				if (j<4 && i>j && i<10-j){
					temp = A[i][j];
					A[i][j] = A[i][9-j];
					A[i][9-j]=temp;
				}
				//Penukaran segmen atas ke bawah dan sebaliknya
				else if(i<4&& j>=i && j<10-i){
					temp = A[i][j];
					A[i][j] = A[9-i][j];
					A[9-i][j]=temp;
				}
			}
		}	
	}

	
	//Mengeluarkan matriks hasil penukaran ke layar
	for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
