#include<stdio.h>

main()
{
    float vi, r, delT, voawal,voakhir,c,t,t1;

    vi = 5;
    r = 10000;
    delT = 0.00001;
    c = 0.000001;


    voawal = 0;
    t = 0;

    FILE *fp;

    fp = fopen("kapas.txt","w+");
    while (voakhir < vi-0.01)
    {
     voakhir = (5*delT + r*c*voawal)/(delT + r*c);
     voawal = voakhir;
     t1 = t + delT;
     t = t1;
     fprintf(fp, "%f",voakhir);
     fprintf(fp, "%f\n",t1 );
    }

     fclose(fp);
}
