/*cari x dan y yang memenuhi*/
//y=2x+2 -- 2x-y=-2
//y=4x-4 -- 4x-y=4

#include<stdio.h>
#include<math.h>

int main()
{
	int A[3][3]={{2, -1, -2},{4, -1, 4}};
	int D, Dx, Dy, x, y;
	{
		D=((A[0][0])*(A[1][1]))-((A[0][1])*(A[1][0]));
		Dx=(((A[0][2])*(A[1][1]))-((A[1][2])*(A[0][1])));
		Dy=(((A[0][0])*(A[1][2]))-((A[1][0])*(A[0][2])));
		x=Dx/D;
		y=Dy/D;
	}
	printf("Nilai dari x = %d dan y = %d adalah\n", x, y);
}	
	
	