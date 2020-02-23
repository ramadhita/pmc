#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("konvolusi.csv", "w");
    float x[15],h[15],y[15];
    int i,j,panjang_x,panjang_h;
    panjang_x=3;
    panjang_h=8;

    x[0]=1;
    x[1]=2;
    x[2]=3;
    h[0]=-1;
    h[1]=0;
    h[2]=1;
    h[3]=2;
    h[4]=3;
    h[5]=4;
    h[6]=5;
    h[7]=6;
    /*printf("Masukkan nilai x(k): \n");
    for(i=0;i<panjang_x;i++){
        scanf("%f",&x[i]);
    }
    printf("Masukkan nilai h(n): \n");
    for(i=0;i<panjang_h;i++){
        scanf("%f",&h[i]);
    }*/

    for(i=panjang_x;i<=panjang_x+panjang_h-1;i++){
        x[i]=0;
    }
    for(i=panjang_h;i<=panjang_x+panjang_h-1;i++){
        h[i]=0;
    }
    for(i=0;i<=panjang_x+panjang_h-1;i++){
        y[i]=0;
        for(j=0;j<=i;j++){
            y[i]=y[i]+(x[j]*h[i-j]);
        }
    }
    for(i=0;i<panjang_x+panjang_h-1;i++){
        fprintf(fp,"y[%d];%.1f\n",i,y[i]);
    }
    fclose(fp);
    return 0;
}
