#include <stdio.h>
#include <math.h>
int main(void){
/* 
y = 2x + 2 => 2x - y = -2
y = 4x - 4 => 4x - y = 4
*/
int A[2][2] = {
    {2, -1},
    {4, -1}
};

int B[2][1] = {
    -2,
    4
};
int x,y;
int i,j;
float inversA[2][2];
float determinan = 2;
determinan = 1/determinan;

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        if (i==j){
            inversA[i][j] = (determinan)*A[(i+1) % 2][(j+1) %2];
        }
        else{
            inversA[i][j] = -(determinan)*A[i][j];
        }
    }
}
x = (inversA[0][0]*B[0][0])+(inversA[0][1]*B[1][0]);
y = (inversA[1][0]*B[0][0])+(inversA[1][1]*B[1][0]);
printf("Titik potongnya adalah (%d,%d)", x, y);
}