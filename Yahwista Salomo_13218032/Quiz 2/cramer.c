#include <stdio.h>

int main(){
    int arr[2][2];
    float ansX, ansY;

    scanf("%d %d %d %d", &arr[0][0], &arr[0][1], &arr[1][0], &arr[1][1]);

    ansX = (-(arr[0][1]-arr[1][1]))/(arr[0][0]-arr[1][0]) ;
    ansY = (arr[0][0])*ansX + arr[0][1] ;

    printf("%f\n", ansX);
    printf("%f", ansY);
    return 0;
}
