#include<stdio.h>
 
int main(){
	int d,e,f,x,y;
    int first[10][10];

    first [0][0]=-2;
    first [0][1]=1;
    first [0][2]=2;
    first [1][0]=-4;
    first [1][1]=1;
    first [1][2]=-4;

    d=(first[0][2])*(first[1][1])-(first[1][2])*(first[0][1]);
    e=(first[0][0])*(first[1][2])-(first[1][0])*(first[0][2]);
    f=(first[0][0])*(first[1][1])-(first[1][0])*(first[0][1]);

    x=d/f;
    y=e/f;

    printf("(%d ,",x);
    printf("%d)",y);

    return(0);
}