#include <stdio.h>
#include <math.h>

int main(void)
{
	int C[2][2],DET,DETx[2][2],DETy[2][2],hasilx,hasily; /* deklarasi variabel yang digunakan*/
	/* matriks C= | -2 1 |  matriks DETx= | 2 1  | matriks DETy= | -2 2 |
	 *            | -4 1 |                | -4 1 |               | -4 -4| */
	/*-2x+y=2
	-4x+y=-4*/
	 
	/*deklarasi matriks c*/
	C[0][0]=-2; 
	C[0][1]= 1;
	C[1][0]= -4;
	C[1][1]= 1;
	/*deklarasi matriks DETx*/
	DETx[0][0]=2;
	DETx[0][1]=1;
	DETx[1][0]=-4;
	DETx[1][1]=1;
	/*deklarasi matriks DETy*/
	DETy[0][0]=-2;
	DETy[0][1]=2;
	DETy[1][0]=-4;
	DETy[1][1]=-4;
	/*proses menghitung determinan dan hasil*/
	DET= (C[0][0]*C[1][1])-(C[0][1]*C[1][0]); /*menghitung nilai determinan matriks c*/
	hasilx=((DETx[0][0]*DETx[1][1])-(DETx[0][1]*DETx[1][0]))/DET; /*menghitung nilai x dengan cara crammer*/
	hasily=((DETy[0][0]*DETy[1][1])-(DETy[0][1]*DETy[1][0]))/DET; /*menghitung nilai y dengan cara crammer*/
	/*output*/
	printf ("nilai perpotongan x adalah %d ", hasilx);
	printf ("\nnilai perpotongan y adalah %d", hasily);
	return(0);
}
