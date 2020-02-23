#include <stdio.h>
#include <math.h>

float f1 (float x){ //bentuk sinyal f1 dengan batas x 1<x<3 yang tidak bernilai 0
    if ((x>=1) && (x<=3)){
        return(x-1); //harga sinyal saat tidak nol
    }
    else {
        return (0);
    }
}

float f2 (float x){ //bentuk sinyal f2, yang tidak nol di -1<t<1
    if ((x>=(-1)) && (x<=1)){
        if ((x>=(-1))&&(x<=0)) //harga simyal yang berbeda dengan beberapa segmen x
        {
            return(1+x);
        }
        else if (x>=0 && x<=1){
            return(1-x);
        }
    }
    else{
        return(0);
    }
    
}

int main(){
    float delta = 0.0001;
    int batas_bawah = 0; //untuk pergeseran x dari fungsi f2 yang akan dikonvolusi dengan f1
    int batas_atas = 10;
    float x,t;

    FILE *file1;
    file1 = fopen("Hasil Konvolusi.txt","w+"); //file untuk menyimpan hasil konvolusi
    for(x = batas_bawah; x<batas_atas;x+=delta){
        float f3=0;
        for (t=1;t<=3;t+=delta){ //batas untuk t, untuk komputasi konvolusi CT
            f3=f3+(f1(t)*f2(x-t)*delta); 
        }
        fprintf(file1,"%f,%f\n",x,f3); //menyimpan hasil konvolusi ke file untuk dibuat grafik
    }
    fclose(file1);
    return(0);
}