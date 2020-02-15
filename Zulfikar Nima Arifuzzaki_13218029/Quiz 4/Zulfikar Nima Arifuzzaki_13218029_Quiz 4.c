/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * Hari dan Tanggal	: Rabu, 12 Februari 2020
 * Nama (NIM)		: Zulfikar Nima Arifuzzaki (13218029)
 * Nama File		: rangkaian.c
 * Deskripsi		: menentukan titik-titik yang merupakan respon transien dari rangkaian RC seri
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double dv, decay_rate;
	double V, C, R, dt, t, t_border;
	double vc;
	double x[10000]; // menampung komponen waktu
	double y[10000]; // menampung komponen tegangan kapasitor
	int i;
	FILE *fptr;
	char fname[1000] = "Zulfikar Nima Arifuzzaki_13218029_Quiz 4.txt";
	
	//MEMBUKA FILE YANG AKAN DITULIS
	fptr = fopen(fname, "w");
	
	//MULAI PEMROGRAMAN
	t = 0;
	i = 0;
	vc = 0;
	//meminta input (V, C, R, dt) dari pengguna
	printf("Masukkan nilai V : ");
	scanf("%lf", &V);
	printf("Masukkan nilai C : ");
	scanf("%lf", &C);
	printf("Masukkan nilai R : ");
	scanf("%lf", &R);
	printf("Masukkan nilai dt : ");
	scanf("%lf", &dt);
	
	decay_rate = R*C;
	t_border = 5*decay_rate; //sebagai waktu berhentinya perhitungan

	while (t <= t_border)
	{
		x[i] = t;
		y[i] = vc;
		dv = (V - vc) * dt /(R * C);
		vc += dv;
		t += dt;
		fprintf(fptr, "%lf,%lf\n", x[i], y[i]); //mencetak ke dalam file
		i += 1;
		}
	fclose(fptr);
	}
