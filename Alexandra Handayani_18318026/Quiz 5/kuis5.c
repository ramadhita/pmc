#include <stdio.h> 
#include <stdlib.h> 
#define LOW 50
#define HIGH 100 

//mendefinisikan tipe data bernama daftar 
//terdiri atas no, nama, nim, dan nilai
typedef struct daftarnama
{ 
 char *nama; 
 int nim; 
 int nilai; 
} daftar;

//fungsi untuk mengeluarkan nilai random dari 50-100
void random (int count, daftar data[]) { 
	for (int i=0; i<count; i++) { 
		data[i].nilai = (rand() % (HIGH - LOW + 1)) + LOW; 
	} 
}

//fungsi untuk menukar dua buah integer (nim dan nilai)
void swap1(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

//fungsi untuk menukar dua buah strings (nama) 
void swap2(char **first,char **second)  
{ 
	char *temp = *first; 
	*first = *second;
	*second = temp;
}  

//fungsi untuk mengurutkan data-data pada daftar berdasarkan nilainya
//menggunakan konsep bubble sort
void bubbleSort(daftar data[], int n) 
{ 
   int i, j;
   for (i = 0; i < n-1; i++)           
       for (j = 0; j < n-i-1; j++)  
           if (data[j].nilai < data[j+1].nilai) {
              swap1(&data[j].nilai, &data[j+1].nilai);
              swap1(&data[j].nim, &data[j+1].nim);
              swap2(&data[j].nama,&data[j+1].nama); 
		  }
} 
 
int main () { 
	daftar data[10]; 
	
	//deklarasi nama-nama dalam data 
	data[0].nama = "Mawar"; 
	data[1].nama = "Melati"; 
	data[2].nama = "Halo"; 
	data[3].nama = "Sandra"; 
	data[4].nama = "Winnie";
	data[5].nama = "Aku";
	data[6].nama = "Maman";
	data[7].nama = "Agatha";
	data[8].nama = "Siapa";
	data[9].nama = "Jokowi";
	data[10].nama = "Ahok";
	
	//pengisian nim 
	for (int i=0; i<10; i++) { 
		data[i].nim = 18318026 + i; 
	}
	//pengisian nilai
	random (10,data);
	
	//penghitungan rata-rata 
	int sum=0; 
	for (int i=0; i<10; i++) { 
		sum = sum + data[i].nilai; 
	}
	float avg = sum/10; 
	
	//output file eksternal
	FILE *fp;
	fp = fopen("daftarnama.csv","w"); 
	for (int i=0; i<10; i++) { 
		fprintf (fp, "%d;%s;%d;%d\n", (i+1), data[i].nama, data[i].nim, data[i].nilai);
	}
	fprintf (fp, "Rata-rata = %f\n",avg); 
	fprintf (fp, "\nHasil Pengurutan Nilai = \n");
	
	//output hasil sorting 
	bubbleSort(data,10);
	for (int i=0; i<10; i++) { 
		fprintf (fp, "%d;%s;%d;%d\n", (i+1), data[i].nama, data[i].nim, data[i].nilai);
	}  
	//menutup file 
	fclose(fp); 
	return 0; 
}
