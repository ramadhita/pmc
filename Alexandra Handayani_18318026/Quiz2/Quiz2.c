//mencari perpotongan garis dengan matriks 
//garis diketahui y = 2x + 2 dan y = 4x - 4 
//program ini menggunakan aturan Cramer 

//Alexandra Handayani 18318026
#include<stdio.h> 
#define hasil1 2 //hasil adalah konstanta pada persamaan masing-masing garis
#define hasil2 -4 

int main () 
{ 
float x,y,det,detx,dety;
float matriks[2][2]; 

//inisialisasi isi dari matriks
matriks[0][0]=-2; 
matriks[0][1]=1; 
matriks[1][0]=-4; 
matriks[1][1]=1;

//mencari determinan, karena menggunakan Cramer
//maka dicari setiap determinan ketika koefisien x diganti
//dan juga ketika koefisien y diganti
det = (matriks[0][0]*matriks[1][1]) - (matriks[1][0]*matriks[0][1]); 
detx = (hasil1*matriks[1][1]) - (hasil2*matriks[0][1]); 
dety = (matriks[0][0]*hasil2) - (matriks[1][0]*hasil1); 

//mencari variabel x dan y dengan menggunakan Cramer 
x = detx/det; 
y = dety/det;

//output
printf("Perpotongan garis ada pada\n");
printf("x : %f\n",x);
printf("y : %f\n",y); 

return(0); 
}


