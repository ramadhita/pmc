/* EL2008 Pemecahan Masalah dengan C 2019/2020
 * Hari dan Tanggal	: Sabtt, 29 Februari 2020
 * Nama (NIM)		: Zulfikar Nima Arifuzzaki (13218029)
 * Nama File		: 13218029_4_3.c
 * Deskripsi		: Mencari waktu di saat air akan kosong
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define phi 3.14
#define g 10

int main()
{
	float d = 20*0.01;
	float A;
	float Q_in, Q_out;
	float t, dt;
	float h, dh1, dh2;
	
	A = phi*d*d/4; // menghitung luas lubang
	
	Q_in = 0.001; //debit air masuk tangki dalam m3/detik
	Q_out = 0;
	
	printf("Masukkan lebar interval waktu pengamatan: ");
	scanf("%f", &dt);
	
	h = 0;
	t = 0;
	while (h <= 1){
		t += dt;
		dh1 = Q_in * dt;
		dh2 = Q_out * dt;
		h = h + dh1 - dh2;
		
		Q_out = A*sqrt(2*g*h); // menghitung debit air keluar
		printf("%f %f\n", h, t);
		}
	
	
	return(0);
	}
