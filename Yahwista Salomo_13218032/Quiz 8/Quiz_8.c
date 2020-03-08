#include<stdio.h>
#include <stdlib.h>

void main(){
int x[10][10];
int i=0, j=0, left=0, right=9, temp;
for (i=0;i<10;i++){
    for (j=0;j<10;j++){
        x[i][j]= i*10+j;
        if (x[i][j] < 10){
        printf ("0");
        }
        printf ("%d ", x[i][j]);
    }
    printf("\n");
}
for (i=0;i<6;i++){
    for (j=0;j<10;j++){
        if ((j>left)&&(j<right)){
            temp = x[i][j];
            x[i][j]=x[9-i][j];
            x[9-i][j]=temp;
        }
    }
    left+=1;
    right-=1;
}
left=0;
for (i=0;i<10;i++){
    for (j=0;j<6;j++){
        if ((j<left)){
            temp = x[i][j];
            x[i][j]=x[i][9-j];
            x[i][9-j]=temp;
        }
    }
    left+=1;
}
printf("\n");
for (i=0;i<10;i++){
    for (j=0;j<10;j++){
        if (x[i][j] < 10){
        printf ("0");
        }
        printf ("%d ", x[i][j]);
    }
    printf("\n");
}
}
