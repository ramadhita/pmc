/*Nama : Chyndi Oktavia Devi
NIM : 13218039*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int tmax;
    float Vo, Vout, t, dt;
    const int Vi=5;
    const float C=0.000001;
    const int R=10000;

    FILE *fp;
    fp=fopen("vo.csv", "w");

    printf("Masukkan batas waktu max : ");
    scanf("%d", &tmax);
    dt=0.001;
    Vo=0;
    for(t=dt;t<=tmax;t=t+dt)
    {
        Vout=(((Vi*dt)+(Vo*R*C))/((R*C)+dt));
        Vo=Vout;

        fprintf(fp, "%.3f ; %.3f\n", Vo, t);
    }
    fclose(fp);
    return 0;


}
