#include <stdio.h>
/*Cedric Samuel/13218060*/
/*Diketahui vo=50m/s*/
#define voy 43.301  /*voy=vo*(sin(60))*/
#define vox 25      /*vox=vo*(cos(60))*/

int main(void)
{
	double posisi_y, posisi_x, t, t_max;

    t_max = ((2*voy)/10);
    t = 0;
    while(t<t_max)
    {
        posisi_y = ((voy*t)-(5*t*t));
        posisi_x = (vox*t);
        printf("Waktu: %f sekon.\n", t);
        printf("Posisi x %f meter.\n", posisi_x);
        printf("Posisi y %f meter.\n", posisi_y);
        t= (t+0.01);
    }
    printf("Jarak searah sumbu x maksimum adalah %f meter. \n", posisi_x);
	return (0);
}