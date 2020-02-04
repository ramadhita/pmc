#include <stdio.h>
/*Rayhan Aby Imtiyaz -- 18318027*/

/*Hitung luas lingkaran menggunakan integral 
∬rdrdθ untuk r dari 0 s.d. r dan θ dari 0 s.d 2π.
Kemudian bandingkan dengan luas lingkaran menggunakan 
rumus πr²dan tentukan error/galatnya
*/

/* Function untuk Integral Pertama*/
double integral(double a,double b,int N) {
	double dx = (b-a)/N; /*dx merupakan lebar partisi riemann*/ 
	double sum = 0;
	for(double i = a; i <= b; i+=dx) { 
		sum += i*dx; /*iterasi nilai fungsi dari a ke b dikalikan dengan dx sebagai luas partisi riemann*/
	}
	return sum;
}

/* Main Function untuk menghitung Integral Kedua*/
int main() {
    double pi = 3.14159265359; /*Konstanta π*/
	int N = 777777; /*Banyak partisi jumlah riemann*/

	/*Menggunakan fungsi integral pertama*/
	double sum_integrate_r;
	sum_integrate_r = integral(0, 7, N); 
	/*Proses integral kedua*/
	double sum_integrate_t; 
	double dt = (2*pi)/N;
	for(double i = 0; i <= 2*pi; i+=dt) {
		sum_integrate_t += sum_integrate_r*dt;
	}
	/*Output*/
    printf("Luas lingkaran dengan r = 7 menggunakan integral  : %lf\n", sum_integrate_t);
    printf("Luas lingkaran dengan r = 7 menggunakan rumus πr² : %lf\n", pi*7*7);
    printf("Error = %lf",sum_integrate_t -(pi*7*7)); /*Galat*/
    return 0;
}
