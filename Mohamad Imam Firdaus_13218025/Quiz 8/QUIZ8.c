// matrix a 10 x 10
// a int -10 s/d 10

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int a[10][10];
int b[10][10];

int main(void)
{
    srand(time(0));
    int i, j;

    // input
    for(i = 0; i < 10; i++){
        for(j = 0; j<10; j++){
            a[i][j] = (rand() % 10 - 10);
            if(i==j){
                b[i][j] = a[i][j];
            }
            if(j==9-i){
                b[i][j] = a[i][j];
            }
        }
    }

    //proses
    // a -> c
    for(i = 1; i < 5; i++){
        for(j = 0; j<i; j++){
            b[i][j] = a[i][9-j];
        }
    }
    for(i = 5; i < 9; i++){
        for(j = 0; j<9-i; j++){
            b[i][j] = a[i][9-j];
        }
    }
    // c -> a
    for(i = 1; i < 5; i++){
        for(j = 0; j<i; j++){
            b[i][9-j] = a[i][j];
        }
    }
    for(i = 5; i < 9; i++){
        for(j = 0; j<9-i; j++){
            b[i][9-j] = a[i][j];
        }
    }

    // b -> d
    for(j = 1; j < 5; j++){
        for(i = 0; i<j; i++){
            b[9-i][j] = a[i][j];
        }
    }
    for(j = 5; j < 9; j++){
        for(i = 0; i<9-j; i++){
            b[9-i][j] = a[i][j];
        }
    }
    // d -> b
    for(j = 1; j < 5; j++){
        for(i = 0; i<j; i++){
            b[i][j] = a[9-i][j];
        }
    }
    for(j = 5; j < 9; j++){
        for(i = 0; i<9-j; i++){
            b[i][j] = a[9-i][j];
        }
    }

    // output
    // a
    printf("Before\n\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j<10; j++){
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter\n\n");
    // b
    for(i = 0; i < 10; i++){
        for(j = 0; j<10; j++){
            printf("%3d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}