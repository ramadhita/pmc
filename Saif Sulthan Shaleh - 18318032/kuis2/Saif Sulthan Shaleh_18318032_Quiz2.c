#include <stdio.h>

int main(void)
{
	double persa[] = { 2, -1, -2};
	double persb[] = { 4, -1, 4};
	double d, x, y ;
	d = (persa[0]*persb[1])-(persb[0]*persa[1]);
	x = (persa[2]*persb[1])-(persb[2]*persa[1]);
	y = (persa[0]*persb[2])-(persb[0]*persa[2]);
	x /= d;
	y /= d;
	printf("titik potong dari persamaan y=2x+2 dan y=4x-4 adalah (%.1f , %.1f)\n", x,y);
	return(0);
}