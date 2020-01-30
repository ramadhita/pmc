//latihan atau Tugas 1
// disediakan nama, nilai, dan indeks cari modus indeks, nmax, nmin, rata2 dan menampilkan namanya untuk nmax dan nmin

//Nama : Faatihah Maurisna Ashfahani
//NIM : 18318036
//Latihan 1
#include<stdio.h>
#include<string.h>

struct siswa{           //Deklarasi structur untuk nama, nilai, dan indeks
    char nama[50];
    int  nilai;
    char indeks;
};

char index(int nilai){          //Function untuk menentukan indeks nilai
    if (nilai >= 85){
		return 'A';
	} else if (nilai > 70){
    	return 'B';
	} else if(nilai >60){
    	return 'C';
	} else if (nilai>50){
    	return 'D';
	} else if (nilai <=50){
    	return 'E';
	}
}

int main(void){
	int nilai, nmax, nmin, nr, i;       //Deklarasi data type
    char nama, a, b;
    struct siswa ssw[5];                //Function main utama dan deklarasi data nama dan nilai

    strcpy(ssw[0].nama, "Mawar");
    ssw[0].nilai = 67;

    strcpy(ssw[1].nama, "Melati");
    ssw[1].nilai = 85;

    strcpy(ssw[2].nama, "Wisteria");
    ssw[2].nilai = 85;

    strcpy(ssw[3].nama, "Carnation");
    ssw[3].nilai = 70;

    strcpy(ssw[4].nama, "Lili");
    ssw[4].nilai = 60;

    nmax=ssw[0].nilai;                      //Inisiasi nmax
    for (i=0;i<5;i++) {                     //Fnction untuk mencari nilai maximum
       if  (ssw[i].nilai>nmax) {
            nmax= ssw[i].nilai;
       }
    }

    nmin=ssw[0].nilai;                      //Inisiasi nmin
    for (i=0; i<5; i++) {                   //Function untuk mencari nilai minimun
        if (ssw[i].nilai<nmin)
            nmin= ssw[i].nilai;
    }

    for (i=0;i<5;i++) {                             //Function untuk memanggil nama yang memiliki nilai max
        if (nmax==ssw[i].nilai)
            printf("Siswa yang memiliki nilai maks yaitu %s\n", ssw[i].nama);
    }

    for (i=0;i<5;i++) {                             ////Function untuk memanggil nama yang memiliki nilai max
        if (nmin==ssw[i].nilai)
            printf("Siswa yang memiliki nilai min yaitu %s\n", ssw[i].nama);
    }

    printf("Siswa yang memiliki nilai maks= %d\n", nmax);   //Display nilai masimum tertinggi
    printf("Siswa yang memiliki nilai min= %d\n", nmin);    //Display nilai masimum tertinggi

    nr = (67+85+85+70+60)/5;                            //Mencari nilai rata-rata
    printf("Nilai rata-rata siswa = %d\n", nr);         //Display nilai rata-rata nilai
}
