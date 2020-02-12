//Nama      :Michael Kresna Putra
//NIM       :13218066
//Tanggal   :3 Februari 2020

//Program untuk menerima input berupa jari-jari kemudian menghasilkan perhitungan melalui dua pendekatan dan menghitung errornya


#include <stdio.h>
#include <math.h>

double fungsi(double x, double r){ //Mendefinisikan fungsi untuk menghasilkan function untuk diintegralkan
    double fx;
    fx = sqrt((r*r)-(x*x)); //Persamaan lingkaran y= sqrt(r^2 - x^2)
    return(fx);
}

double integral(double r) //Mendefinisikan fungsi untuk menghitung integral
{
    double hasil, i;
    hasil=0;
    
    for (i=-r;i<=r; i= i+0.0001){ //Loop pengulangan untuk menghitung secara riemann (kiri dan kanan) dengan border bawah yaitu -r dan border atas yaitu r
        hasil = hasil + (fungsi(i,r)*0.0001);
    }
    return (2*hasil); //Dikali dua agar mendapatkan sisi lingkaran yang bawah
}


int main() {
    double manual,r,error;
    
    printf("Masukkan radius:\n");
    scanf("%lf", &r);
    manual=3.14159265*r*r;
    printf("hasil manual        : %f\n",manual);
    printf("hasil integral      : %f\n",integral(r));

    error=(fabs(integral(r)-manual)/manual)*100; //menghitung nilai error
    printf("hasil error nya     : %f Persen", error);
    return 0;
}
