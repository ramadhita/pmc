/* Kuis 6
Hari, tanggal   : Kamis, 20 Februari 2020 
Nama            : Dorothea Claresta P
NIM             : 18318007
Deskripsi       : Konvolusi f3(t) = sigma f1(t)*f2(x-t)
f1(t) = (t-1)/2 , 1<t<3
f2(t) = t+1, -1<t<=0 dan
        1-t, 0<t<=-1
*/

#include <stdio.h>

// fungsi f1
float f1(float t){
    // untuk 1<t<3 bernilai f1(t) = (t-1)/2
    if (t<3 && t>1)
        return ((t-1)/2);
    // untuk t<=1 dan t>=3 bernilai 0
    else
        return 0;    
}

// fungsi f2
float f2(float t){
    // untuk -1<=t<0 bernilai f2(t) = t+1 
    if (t>=-1 && t<0)
        return (t+1);
    // untuk 0<=t<1 bernilai f2(t) = 1-t
    else if (t>=0 && t<1)
        return (1-t);
    // untuk t<-1 dan t>=1 bernilai 0
    else
        return 0;
}

int main(){
    // deklarasi variabel
    float konvolusi, x, t;
    float dt = 0.001;

    // membuka file untuk menuliskan
    FILE *fp;
    fp = fopen("kuis6.txt", "w+");

    // menghitung konvolusi
    for (x=0; x<5; x+=dt){
        konvolusi = 0;
        for(t=0; t<5; t+=dt){
            konvolusi += f1(t)*f2(x-t)*dt;
        }
        fprintf(fp, "%f\t%f\n", x, konvolusi);
    }

    // menutup file
    fclose(fp);

    return 0;
}
