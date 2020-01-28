#include<stdio.h>
#include<stdio.h>

int main(){
    float f[2][2];
    f[0][0] = 2;
    f[0][1] = -1;
    f[1][0] = 4;
    f[1][1] = -1;
    int g[2][1];
    g[0][0] = -2;
    g[1][0] = 4;
    float x, y, D;
    D = f[0][0]*f[1][1]-f[0][1]*f[1][0];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++ ){
            f[i][j] /= D;
        }
    }
    float temp = f[0][0];
    f[0][0] = f[1][1];
    f[1][1] = temp;
    f[0][1] = (-1)*f[0][1];
    f[1][0] = (-1)*f[1][0];
    x = f[0][0]*g[0][0]+f[0][1]*g[1][0];
    y = f[1][0]*g[0][0]+f[1][1]*g[1][0];
    printf("x = %f dan y = %f", x, y);
}
