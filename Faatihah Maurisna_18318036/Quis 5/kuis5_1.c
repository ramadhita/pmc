#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct mhs {                                        // mendeklrasikan fungsi struct dengan tipe datanya
    char nama [50];
    int NIM;
    int nilai;
};

int rand_nilai(){                                   //fungsi untuk nilai random
    return (rand()%(100-50+1) + 50);
}

int main(void)
{
    char nama, y;                                   //deklarasi tipe data
    int NIM,i,x,j;
    struct mhs ssw[10];                             //memanggil struct ke dalam main program

    strcpy(ssw[0].nama, "Raka");                    //inisialisasi nama, nim, nilai random daro fungsi rand
    ssw[0].NIM = 18318001;
	ssw[0].nilai = rand_nilai();

    strcpy(ssw[1].nama, "Rani");
    ssw[1].NIM = 18318002;
	ssw[1].nilai = rand_nilai();

    strcpy(ssw[2].nama, "Aro");
    ssw[2].NIM = 18318003;
	ssw[2].nilai = rand_nilai();

    strcpy(ssw[3].nama, "Aziz");
    ssw[3].NIM = 18318004;
	ssw[3].nilai = rand_nilai();

    strcpy(ssw[4].nama, "Eva");
    ssw[4].NIM = 18318005;
	ssw[4].nilai = rand_nilai();

    strcpy(ssw[5].nama, "Fista");
    ssw[5].NIM = 18318006;
	ssw[5].nilai = rand_nilai();

    strcpy(ssw[6].nama, "Ijem");
    ssw[6].NIM = 18318007;
	ssw[6].nilai = rand_nilai();

    strcpy(ssw[7].nama, "Lina");
    ssw[7].NIM = 18318008;
	ssw[7].nilai = rand_nilai();

    strcpy(ssw[8].nama, "Yogi");
    ssw[8].NIM = 18318009;
	ssw[8].nilai = rand_nilai();

    strcpy(ssw[9].nama, "Alif");
    ssw[9].NIM = 18318010;
	ssw[9].nilai = rand_nilai();


    FILE*data;                                      //deklarasi untuk file
    int t;                                          //deklarasi tipe ddata untuk t
    i=0;
    t=10;
    data= fopen("tabel.csv", "w");                  //membuka data yang akan dituju
    for (i=0; i<t;i++)                              //for loop dari data ke-1 hingga ke 10
        {
            x=i+1;                                  // nomor tabel
            fprintf(data, "%d;%s;%d;%d\n", x,ssw[i].nama,ssw[i].NIM,ssw[i].nilai);          //print data ke file "tabel.csv"
        }
    printf("data sukses!");                         //debugging apakah data benar2 sudah masuk ke fileatau tidak
    fclose(data);                                   //menutup file
}
