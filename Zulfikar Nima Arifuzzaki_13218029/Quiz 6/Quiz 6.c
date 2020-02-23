/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * Hari dan Tanggal	: Kamis, 20 Februari 2020
 * Nama (NIM)		: Zulfikar Nima Arifuzzaki (13218029)
 * Nama File		: Quiz 6.c
 * Deskripsi		: Mengonvolusikan dua buah grafik secara diskrit
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// MENENTUKAN NILAI Y DARI X UNTUK FUNGSI PERTAMA (f1x)
float f1x (float x)
{
	float nilai;
	if ((x >= 1) && (x <= 3))
	{
		nilai = 0.5*(x-1);
		}
	else
	{
		nilai = 0;
		}
	return(nilai);
	}

// MENENTUKAN NILAI Y DARI X UNTUK FUNGSI KEDUA (f2x)
float f2x (float x)
{
	float nilai;
	if ((x >= -1) && (x < 0))
	{
		nilai = x + 1;
		}
	else if ((x >= 0) && (x <= 1))
	{
		nilai = -1*x + 1;
		}
	else
	{
		nilai = 0;
		}
	return(nilai);
	}

int main()
{
	float k, n;
	float dx;
	float f3x;
	FILE *fptr;
	
	// MEMINTA INTERVAL SAMPLING YANG DIPERLUKAN
	printf("Masukkan nilai rentang sampling: ");
	scanf("%f", &dx);
	fptr = fopen("data_konvolusi.txt", "w");
	
	// MENENTUKAN TITIK X DAN Y GRAFIK HASIL KONVOLUSI
	for (n = 0; n <=5; n += dx)
	{
		printf("%f, ", n); //nilai x
		f3x = 0;
		for (k = 0; k <= n; k += dx)
		{
			f3x += (f1x(k))*(f2x(n-k))*dx; // nilai y akan selalu di tambah (f1x(k))*(f2x(n-k))*dx
			}
		//{sampai disini telah didapatkan nilai x dan y grafik hasil konvolusi dengan t = n}
		printf("%f \n", f3x);
		fprintf(fptr, "%f,%f\n", n, f3x);
		}
	fclose(fptr);
}

