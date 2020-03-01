// Nama     : Yasmin Sekar Arum
// NIM      : 13218063
// Kuis 6 - Konvolusi

#include <stdio.h>
#include <math.h>
// fungsi untuk grafik f2 (grafik segitiga sama kaki)
double f2(double i, double x ){
    if((i-x)<=0 && (i-x)>=-1)   //untuk keadaan sb x dari -1 hingga 0
        return (i-x+1);
    else if((i-x)>0 && (i-x)<=1)//untuk keadaan sb x dari 0 hingga 1
        return (1-i+x);
    else                        //keadaan lain yang tidak terpenuhi
        return 0;
}
//fugsi untuk grafik f1
double f1(double i){
    if (i>=1 && (i)<=3)     //keadaan dari 1 hingga 3
        return ((((i-1)/2)));
    else                    // keadaan lainnya
        return 0;
}

//program utama
int main (){
    //deklarasi tipe variable yang digunakan
    double i, j;
    double nilai_akhir;
    //membuka file yang digunakan
    FILE *fp;
    fp = fopen("filekonvolusi.csv", "w");

    //fungsi looping untuk perhitungan Konvolusi
    for (i=0; i<=7; i+=0.01){
        nilai_akhir =0;
        for (j=0; j<=i; j+=0.01){
            nilai_akhir += (f2(i,j)*f1(j)/10);  //perhitungan konvolusi menggunakan fungsi
            fprintf(fp,"%.5lf, %.5lf \n",nilai_akhir, i);   //mencetak hasilnya pada file fp yang sudah di buka
        }
    }
    //menutup file fp
    fclose(fp);
return 0;
}
