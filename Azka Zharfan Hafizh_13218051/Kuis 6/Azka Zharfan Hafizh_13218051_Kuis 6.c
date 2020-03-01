// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		: Kamis 20 Februari 2020


//KUIS 6 Mencari konvolusi 2 fungsii

#include <stdio.h>

float i,j;

float f1(float a){          //fungsi f1 grafik segitiga siku-siku
    float f1;
    if ((a>=1)&&(a<=3))
        {
            f1= (a-1)/2;
        }
    else
        {
            f1=0;
        }
    return f1;
}


float f2(float a){          //fungsi f2 grafik segitiga sama kaki
    float f2;
    if ((a>=-1)&&(a<0))
        {
            f2= a+1;
        }
    else if ((a>=0)&&(a<=1))
        {
            f2=1-a;
        }
    return f2;
}


int main() {
FILE *fp;                           //memasukan hasil fungsi kedalam file
fp = fopen("konvolusi.csv","w+");
float f3;
float t;

for(i = 0; j < 10; i+=1){
    f3 = 0;
    for(j = -10; j < 10; j+=0.01){
        t=i-j;
        f3 +=(float) f1(j)*(f2(t))*0.01;  //mengkonvolusi 2 fungsi
        fprintf(fp,"%.2f;%.3f\n",j,f3);
        }
}
fclose(fp);
return 0;
}


