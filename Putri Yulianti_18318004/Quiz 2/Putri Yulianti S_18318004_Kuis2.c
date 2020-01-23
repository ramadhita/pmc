#include <stdio.h>

int main(){
    int matriks[2][2] = {{-2, 1}, {-4, 1}};
    int jawab[2] = {2, -4};
    int tipot[2];

    printf("Matriks: \n");
    printf("\n%d %d", matriks[0][0], matriks[0][1]);
    printf("\n%d %d", matriks[1][0], matriks[1][1]);
    
    int det = find_determinant(matriks[0][0], matriks[0][1], matriks[1][0], matriks[1][1]);
    tipot[0] = find_determinant(jawab[0], matriks[0][1], jawab[1], matriks[1][1])/det;
    tipot[1] = find_determinant(matriks[0][0], jawab[0], matriks[1][0], jawab[1])/det;
    printf("\n\nx, y = %d, %d", tipot[0], tipot[1]);
    return 0;
}

int find_determinant(int a, int b, int c, int d){
	return a*d - b*c;
}
