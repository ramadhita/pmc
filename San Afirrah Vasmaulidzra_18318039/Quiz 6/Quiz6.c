#include <stdio.h>
#include <math.h> 

double fungsiA(double t){ //fungsi pertama
    if ((t<=1)||(t>=3)){
        return 0;
    }
    else {
        return (t-1)*0.5;
    }
};

double fungsiB(double t){ //fungsi kedua
       if(t<=-1||t>=1){
        return 0;
    }
    else if(t<0){
        return (t+1);
    }
    else
    {
       return (1-t);
    }
}

void main(){
    //inisialisasi
    double hasil;
    double time, X;
    double dX =0.01;
    double dt = 0.01;

    FILE *dKonvo;//open file
    dKonvo = fopen("Data Konvolusi.csv", "w");
    fprintf(dKonvo, "Waktu;Fungsi1; Fungsi2; HasilKonvolusi\n");

    for (time=-1;time<=5;time+=dt){ //konvolusi terjadi dari t=1, t=5, namun agar fungsi kedua dapat terlihat dibuat dari t=-1
        hasil = 0;
        for (X=0; X<time; X+=dX){
            hasil += fungsiA(X) * fungsiB(time-X) * dX;
        }
        fprintf(dKonvo,"%.2lf;%.3lf;%.3lf;%.3lf \n", time, fungsiA(time), fungsiB(time), hasil);
    }
    fclose(dKonvo); //menutup file
}