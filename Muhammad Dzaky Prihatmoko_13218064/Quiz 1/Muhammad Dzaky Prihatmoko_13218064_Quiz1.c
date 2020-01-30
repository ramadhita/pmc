#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vox ;
    double voy ;
    double x;
    double y;
    double waktu;
    vox = 25; /*Hasil dari 50 x cos 60 derajat */
    voy = (43.3012701892); /*Hasil dari 50 x sin 60 derajat */
    x = 0;
    y = 0;
    waktu = 0;
    while (y>=0)
    {
        printf("Posisi x : %lf\n",x);
        printf("Posisi y : %lf\n",y);
        printf("\n");
        waktu = waktu +0.01;
        y = (voy*waktu)-(5*waktu*waktu);
        if (y>=0){
            x = vox*waktu;
        }
    }
    printf("Jarak terjauh: %lf meter \n",x);
    return 0;
}
