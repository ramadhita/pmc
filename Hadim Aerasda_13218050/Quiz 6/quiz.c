#include <stdio.h>
#include <math.h>
//Fungsi f(x)=(x-1)/2 , 1<=x<=3
float f(float x){
    if (x<=3 && x>=1)
        return ((x-1)/2);
    else
        return 0; 
}

//Fungsi g(x)= x+1, -1<=x<=0; 1-x, 0<=x<=-1
float g(float x){
    if (x>=-1 && x<=0)
        return (x+1);
    else if (x>=0 && x<=1)
        return (1-x);
    else
        return 0; 
}

int main (){
    FILE *fp;
    char *filename = "Result.csv";
    double i, j, a, b, h, Result;
    float dx = 0.05; // mengatur ketelitian nilai
    int len = 5; // panjang hasil konvolusi
    fp = fopen(filename, "w");
    //Read File
        if( fp == NULL ) {
            printf("%s: failed to open. \n", filename);
            return -1;
        } 
        else {
            printf("%s: opened in write mode.\n", filename);
        }
        fprintf(fp,"x,h(x)\n");
    //Convolution
        for (i=0;i<len;i=i+dx){
            Result=0;
            for (j=-1;j<=3;j=j+dx){
                a = f(j);
                b = g(i-j);
                h = Result + (a*b); // menghitung konvolusi f(x) dan g(x)
                Result = h;
            }
            printf("Result = %f\n",Result);
            fprintf(fp,"%.2f,%.2f \n",i, Result);
        }
    //close data
        if( !fclose(fp) ){
            printf("%s: closed successfully.\n", filename);
        }
    return 0;
}



