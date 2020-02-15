#include<stdio.h>
#include<math.h>


float rumus(float t)
{
    float R, C, x,y,f;
    int a;
    float dt=0.001;
    R=10000;
    C=0.000001;
    a=1;
    //b=100;
    //c=-500;
    if(t<=0)
    {
        return 0;
    }else{//if t>0
        x=((a*(rumus(t-dt))) + ((5/(R*C))*dt));
        y= (a+((1/(R*C))*dt));
        f= x/y;
        return f;
    }
}
int main()
{
    float hasil, tm, dt,t;
    tm=0.05;
    dt=0.001;
    t=0;
    FILE*grafik;
    grafik= fopen("rangkaianrc.csv", "w");
    for(t=0; t<tm; t+=dt)
    {
        hasil = rumus(t);
        fprintf(grafik, "%f; %f\n", t, hasil);
    }
    printf("Sukses!data terisi");
  fclose(grafik);
}

