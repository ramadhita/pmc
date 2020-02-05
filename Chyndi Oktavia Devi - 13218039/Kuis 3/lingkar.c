#include<stdio.h>
#include<math.h>

int main()
{
    float phi=3.14;
    float rms_luas, itg_luas, dx, dr, dL, r, i, j, eror;
    r=7;
    dL=0;
    dr=0.01;
    dx=0.01;
    itg_luas=0;
    rms_luas=phi*r*r; //menghitung luas dengan rumus

    for(i=0;i<=phi;i=i+dx) //menghitung luas dengan integral
    {
        itg_luas=itg_luas + (dL*dx);
        dL=0;
        for (j=0;j<=r;j=j+dr)
        {
            dL=dL+(dr*r);
        }
    }

    printf("Luas lingkaran dengan rumus = %f\n", rms_luas);
    printf("Luas lingkaran dengan integral = %f\n", itg_luas);
    eror=itg_luas-rms_luas;
    printf("Error dari penghitungan metode diatas adalah : %f\n", eror);
    return(0);
}
