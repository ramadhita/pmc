// Adeline Kartika (13218081)
// Quiz 1
#include <stdio.h>
#include <math.h>

int main(void){
    int vo, gravity; //vo adalah kecepatan awal
    float x, y; //untuk posisi benda
    float vox, voy, cos60, sin60; //vox adalah kecepatan awal horizontal dan voy kecepatan awal vertikal
    float t, t_max; //t adalah waktu dan t_max adalah waktu sampai di tanah

    vo = 50;
    gravity = 10;
    cos60 = 0.5;
    sin60 = 0.866;
    t = 0;
    t_max = (2*vo*sin60)/gravity;

    vox = vo*cos60;
    voy = vo*sin60;
    x = 0; //posisi x awal
    y = 0; //posisi y awal
    
    while (t<(t_max+0.01)){ //untuk looping hingga benda sampai ke tanah
        x = vox*t;
        y = (voy*t)-(0.5*gravity*t*t);
        printf("Posisi benda saat t = %.2f", t);
        printf(" s : (%.2f", x);
        printf(",%.2f", y);
        printf(")\n");
        t = t + 0.01;
    }
    printf("Jarak benda sampai ke tanah lagi sebesar %.2f", x);
    printf(" meter.");
    return(0);
}

