#include <stdio.h>

/* Membuat grafik untuk gejala transien rangkaian */


/* Fungsi untuk Vo(t) */


double Vo (double t)
{
    double R, C, tc, Vs, dt, Vc;

/* Vc merupakan nilai Vo pada fungsi atau nilai tegangan di kapasitor*/

    R = 10000;
    C = 0.000001;
    tc = R*C ;
    Vs = 5;
    dt = 0.005;

    if(t<=0)
    {
        Vc = 0;
    }
    
    else if (t>0)
    {
        Vc = (Vo(t-dt) + (Vs*dt/tc))/((dt/tc)+1);
    }

    return Vc;
}

/*Fungsi utama untuk memasukkan data ke .txt */
int main ()
{
    double t;
    double R, C, tc, Vs, dt;

    R = 10000;
    C = 0.000001;
    tc = R*C ;
    Vs = 5;
    dt = 0.005;


    FILE *transienVo ;
    FILE *transienVo1 ;

    transienVo = fopen("18318006_nilaiVo.txt", "w+");
    transienVo1 = fopen("18318006_nilait.txt", "w+");

    for (t=0; t <= 0.05; t+=dt)
    {
        fprintf(transienVo, "%lf \n", Vo (t));

    }

    for(t=0; t<= 0.05; t+=dt)
    {
        fprintf(transienVo1, "%lf \n", t);
    }


    fclose(transienVo);
    fclose(transienVo1);

    return 0;
}
