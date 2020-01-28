#include <stdio.h>
#include <math.h>

int main(void) {
    /*deklarasi konstanta dan variabel*/
    #define g 10
    #define pi 3.14159265
    double  angle,          /*sudut*/ 
            init_velocity,  /*kecepatan awal*/ 
            t,              /*waktu*/ 
            x,              /*posisi x dalam bidang kartesian*/
            y,              /*posisi y dalam bidang kartesian*/ 
            x_max,          /*jarak x terjauh (kearah sumbu x negatif)*/
            t_max;          /*waktu tempuh sampai titik x terjauh*/
    /*konstanta yang diberikan dalam permasalahan*/
    t = 0.01;               /*waktu pengambilan data pertama kali*/
    init_velocity = 50;     /*kecepatan awal (dalam m/s)*/
    angle = 60;             /*sudut dalam derajat*/
        angle = angle*(pi/180); /*sudut yang dikonversi ke radian*/
    x,y = 0;                /*titik pusat bidang kartesian*/
    x_max, t_max = 0;       
    
    /*menentukan x_max dan t_max*/
    x_max = -(((init_velocity*init_velocity) * sin(2*angle))/g); /*x negatif karena partikel bergerak kearah sumbu x negatif*/
    printf("Jarak x terjauh %f m \n", x_max);
    t_max = (2*init_velocity*sin(angle))/g;

    /*loop utama untuk menentukan posisi tiap waktu t*/
    while (t <= t_max) {
        x = -(init_velocity * t * 0.5);
        y = (init_velocity * t * sin(angle)) - (0.5*g*t*t);
        printf("x : %f m ", x);
        printf("y : %f m \n", y);
        t += 0.01; /*inkrementasi 10ms untuk penentuan posisi selanjutnya*/
    }

    return(0);
}
    
