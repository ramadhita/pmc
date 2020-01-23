#include <stdio.h>

int main(){
	/*
	Nama : Christy Grace Siagian
	NIM : 18317501
	Tanggal : 23 Januari 2020
	Tentang : Program Menghitung Titik Potong menggunakan Matriks
*/
	int x1,x2,y1,y2,c1,c2;
	int x, y;
	int dx[2][2];
	int dy[2][2];
	int d[2][2];
	int detx,dety,det;
	
	printf("Masukkan nilai x1: \n");
	scanf("%d", &x1);
	printf("Masukkan nilai y1: \n");
	scanf("%d", &y1);
	printf("Masukkan nilai c1: \n");
	scanf("%d", &c1);
	
	printf("Masukkan nilai x2: \n");
	scanf("%d", &x2);
	printf("Masukkan nilai y2: \n");
	scanf("%d", &y2);
	printf("Masukkan nilai c2: \n");
	scanf("%d", &c2);
	
	printf("Persamaan garis 1 : %d x + %d y = %d \n",x1,y1,c1);
	printf("Persamaan garis 1 : %d x + %d y = %d \n",x2,y2,c2);
	
	d[0][0] = x1;
	d[0][1] = y1;
	d[1][0] = x2;
	d[1][1] = y2;
	
	dx[0][0] = c1;
	dx[0][1] = y1;
	dx[1][0] = c2;
	dx[1][1] = y2;
	
	dy[0][0] = x1;
	dy[0][1] = c1;
	dy[1][0] = x2;
	dy[1][1] = c2;
	
	detx = (dx[0][0]*dx[1][1])-(dx[0][1]*dx[1][0]);
	dety = (dy[0][0]*dy[1][1])-(dy[0][1]*dy[1][0]);
	det = (d[0][0]*d[1][1])-(d[0][1]*d[1][0]);
		
	
	x = detx/det; y =dety/det;
	printf("Titik potong x adalah : %d \n",x);
	printf("Titik potong y adalah : %d \n",y);

	return 0;
	
	
}