#include <stdio.h>
#include <math.h>


void main(){
    int i,j,k,l;
    float v_air = 1;
    float volume = 0;
    float jari_jari_b = 0.25;
    float luas_ling;
    float t = 0;
    float h1,h2;
    FILE *fp;
    h1 = 0;
    fp = fopen("Hasil.txt", "w+");
    // waktu dari kosong ke pnuh
    // grafik dari tinggi terhadapt t
    while(volume<=1000){
        volume += v_air*t - ((jari_jari_b*jari_jari_b*3.1416*sqrt(2*98*h1))*t) ;
        h1 = volume/100;
        fprintf(fp, "%lf;%.2lf \n",h1,t);
        t++;
    }
    fclose(fp);
}