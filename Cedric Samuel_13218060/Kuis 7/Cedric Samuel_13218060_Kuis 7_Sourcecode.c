//Cedric Samuel / 13218060
//Kuis 7
#include<stdio.h>
#include<math.h>

int main(void)
{
//Deklarasi dan inisialisasi
double qtotal, q1, volume, h[100], area_1, area_2;
int t[100], i;
FILE *fp;

q1= 0.001; //Diketahui q1 (debit air masuk) adalah 0.001 m^3/detik
area_1 = 1; //Luas persegi 1m^2
t[0]=0;
volume=0;
h[0]=0;
i=0;

area_2= 3.14 * (2.5 * 0.01) * (2.5 * 0.01); //Luas lubang di dasar bak air

fp=fopen("hasil.txt", "w+");
while(h[i]<=1){ //Program akan mengulang sampai tinggi mencapai 1 meter (bak penuh)
i+=1;
t[i]=t[i-1]+1;
qtotal = q1 - ((area_2)*sqrt(2*10*(volume/area_1))); //Digunakan g=10 m/s^2
volume += qtotal;
h[i] = volume / area_1;
printf("%f  %d \n", h[i], t[i]);
fprintf(fp,"%f, ", h[i]);
};
fclose(fp);

return(0);
}
