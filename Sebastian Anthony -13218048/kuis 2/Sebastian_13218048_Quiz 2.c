#include <stdio.h>
#include <math.h>

int main()
{
	int a[2][2];
	int b[2][2];
	int i,j;
	int x,y;
	a[0][0] = 2;
	a[0][1] = (-1);
	a[1][0] = (4);
	a[1][1] = (-1);
	for (i = 0; i<2; i++){
		for (j=0; j<2; j++){
			if ((j +i) % 2 == 1){
				b[i][j] = (-(a[i][j]));
			}
			else {
				b[i][j] = a[(i+1)%2][(j+1)%2];
			}
		}

	}
	x = (b[0][0]* (-2) + b[0][1] * 4)/2;
	y = (b[1][0]* (-2) + b[1][1] * 4)/2;
	printf("x : %d \n", x);
	printf("y : %d \n", y);

	return(0);
}