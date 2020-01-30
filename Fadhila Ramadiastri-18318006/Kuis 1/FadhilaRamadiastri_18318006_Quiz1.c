#include <stdio.h>
#include <math.h>

//melempar bola dengan kecepatan 50m/s dengan sudut 60 derajat
// program yang bisa : tracking posisi, x dan y setiap 10 ms
// hitung jarak terjauhnya sampai ke tanah lagi

int main (void)
{
    double vox, voy, t, vy, x, y, xmaks, tmaks ;
    //vox adalah kecepatan awal pada sumbu x
    //voy adalah kecepatan awal pada sumbu y
    // vy adalah kecepatan y seiring t

    vox = 50*0.5;
    voy = 50*0.87;
    // 0.87 merupakan bentuk desimal dari 0/5 sqrt(3)

    t = 0;
    xmaks = vox*((2*voy)/10);
    tmaks = 2*voy/10;

    // t maks merupakan t bola di gudara

    while(t<=tmaks)
    {
        
        x = vox*t;
        y = (voy*t)-(5*t*t);

        printf("Bola berada pada posisi %lf, %lf\n", x, y);
        t=t+0.01;
    }
    printf("Jarak terjauh yang ditempuh bola dalam sumbu x adalah %lf", xmaks);

return (0);
}
