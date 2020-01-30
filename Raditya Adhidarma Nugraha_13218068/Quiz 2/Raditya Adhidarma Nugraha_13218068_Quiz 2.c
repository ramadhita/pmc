#include <stdio.h>
#include <math.h>

// Raditya Adhidarma Nugraha 13218068

/* y = 2x + 2 ==> 2x - y = -2
 * y = 4x - 4 ==> 4x - y = 4
 */

int A [2] [2];
int C [2] = {-2, 4};
float AdjA [2] [2];
float InvA [2] [2];
int detA, i, j;
float XY [2] = {0, 0};

int main (){
	A [0] [0] = 2;
	A [0] [1] = -1;
	A [1] [0] = 4;
	A [1] [1] = -1;
	
	detA = (A [0] [0] * A [1] [1]) - (A [0] [1] * A [1] [0]);
	
	AdjA [0] [0] = A [1] [1];
	AdjA [0] [1] = - A [0] [1];
	AdjA [1] [0] = - A [1] [0];
	AdjA [1] [1] = A [0] [0];
	
	for (i = 0; i <=1; i = i + 1) {
		for (j = 0; j <= 1; j = j + 1) {
			InvA [i] [j] = AdjA [i] [j] / detA;
			/* Perkalian matriks: XY = InvA * C
			 * XY [0] = InvA [0] [0] * C [0] + InvA [0] [1] * C [1]
			 * XY [0] = InvA [1] [0] * C [0] + InvA [1] [1] * C [1]
			 * */
			XY [i] = XY [i] + InvA [i] [j] * C [j];
		}
	}
	
	printf ("x = %g\n", XY [0]);
	printf ("y = %g\n", XY [1]);
	
}
