#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct mhs {
    char nama [50];                                 //medeklarasikan struct dan tipe data ynag dipakai untuk nama, nim, dan nilai
    int NIM;
    int nilai;
};

int rand_nilai(){
    return (rand()%(100-50+1) + 50);                //fungsi untuk nilai siswa random
}

void sorting(struct mhs ssw[]){                             //fungsi sorting nilai random dari tinggi ke rendah
	int i,j, temp;                                          //deklarasi tipe data
	char temp_nama[50];
	int temp_NIM;
	for (i=0; i<10-1; i++){                                 //for looping untuk data ke 0 hingga 9
		for (j=i+1; j<=10-1; j++){
			if (ssw[j].nilai>ssw[i].nilai){
				temp= ssw[i].nilai;
				strcpy(temp_nama,ssw[i].nama);
				temp_NIM = ssw[i].NIM;

				ssw[i].nilai=ssw[j].nilai;                      //keadaan pertukaran nilai
				strcpy(ssw[i].nama,ssw[j].nama);
				ssw[i].NIM = ssw[j].NIM;

				ssw[j].nilai= temp;
				strcpy(ssw[j].nama,temp_nama);
				ssw[j].NIM = temp_NIM;
			}
		}
	}
}

int main(void)
{
    char nama, y;                               //deklarasi tipe data pada main program
    int NIM,i,x, z,j,t;
    struct mhs ssw[10];                         //memanggil struct ke main program

    strcpy(ssw[0].nama, "Raka");                //inisialisasi nama dan nim
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


    FILE*sort;                                      //pemanggilan data dengan inisial "sort"
    i=0;                                            //inisialisasi i dan t
    t=10;
    sort=fopen("sort.csv", "w");                    //membuka file sort
    sorting(ssw);                                   //memanggil fungsi sorting
    for (i=0; i<t;i++)                              //for looping dari 0 ke t
        {
            x=i+1;                                  // nomor tabel
            fprintf(sort, "%d;%s;%d;%d\n", x,ssw[i].nama,ssw[i].NIM,ssw[i].nilai);      //print ke file dengan nomor, nama, nim ,dan nilai yng sudah disorting
        }
    printf("data sukses!");                 //debugging apakah data berhasil masuk ke file atau tidak
    fclose(sort);                           //menutup file

}

