/* 
Nama (NIM)			: Pradipta Wasundari (18318017)
Deskripsi			: Perpotongan garis
*/

#include <stdio.h>

int main()
{
	int x, y, m, n, Dx[10][10], Dy[10][10], D[10][10], detX, detY, detD;
	
	/*
		m = baris
		n = kolom
	*/
	
	m = 2;
	n = 2;

	Dx[0][0] = -2;
	Dx[0][1] = -1;
	Dx[1][0] = 4;
	Dx[1][1] = -1;
	Dy[0][0] = 2;
	Dy[0][1] = -2;
	Dy[1][0] = 4;
	Dy[1][1] = 4;
	D[0][0] = 2;
	D[0][1] = -1;
	D[1][0] = 4;
	D[1][1] = -1;
	
	detX = (Dx[0][0])*(Dx[1][1]) - (Dx[0][1])*(Dx[1][0]);
	detY = (Dy[0][0])*(Dy[1][1]) - (Dy[0][1])*(Dy[1][0]);
	detD = (D[0][0])*(D[1][1]) - (D[0][1])*(D[1][0]);
 
	x = detX/detD;
	y = detY/detD;
	
	printf("hasil perpotongan garis adalah %d, %d\n", x, y);


	return 0;
}
