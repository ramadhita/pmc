/* Aljabar Linear */

/* f1 : y = 2x + 2
   f2 : y = 4x - 4 */

#include <stdio.h>

int main(void){
    
    // LIBRARY

    int mat1[2][2] = {2,(-1),4,(-1)}; // 1st matrix (2x2)
    int mat2[2][1] = {-2,4};          // 2nd matrix (2x1)
    float inv1[2][2];                 // inverse of the 1st matrix (2x2)
    float res[2][1];                  // result matrix (2x1)
    int temp;                         // temporary, for switching values
    float d;                          // determinant

    // ALGORITHM
    
    // determinant of 1st matrix
    d = mat1[0][0]*mat1[1][1] - mat1[0][1]*mat1[1][0];

    // inverse it
    temp = mat1[0][0]; // put the value in (0,0) into temporary

    for (int i = 0; i<=1; i++){
        for (int j = 0; j<=1; j++){
            // if it's (0,0), overwrite the value with (1,1) and divide with d
            if(i == 0 && j == 0){
                inv1[i][j] = mat1[1][1]/d;
            }
            // if it's (1,1), overwrite the value with (0,0) from temp and divide with d
            else if(i == 1 && j == 1){
                inv1[i][j] = temp/d;
            }
            // if it's the other, multiply by (-1) and divide with d
            else {
                inv1[i][j] = mat1[i][j]*(-1)/d;
            }
        }
    }

    /* multiply it with [-2]
                        [ 4] */
    
    for (int i = 0; i <= 1; i++){
        res[i][0] = inv1[i][0]*mat2[0][0] +  inv1[i][1]*mat2[1][0];
    }

    // print results
    printf("x = %.f\n", res[0][0]);
    printf("y = %.f\n", res[1][0]);

    return(0);
}