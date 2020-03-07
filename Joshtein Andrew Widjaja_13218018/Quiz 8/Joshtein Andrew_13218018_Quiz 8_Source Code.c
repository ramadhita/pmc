#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int a [10][10];
int i,j,temp;
int main(void){
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			a[i][j] = (rand() % (20 + 1)) - 10;
			printf("%d	",a[i][j]);
		};
		printf("\n");
	};
	printf("\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if((i!=j)&&((i+j)<9)){
				if(j>i){
					temp = a[i][j];
					a[i][j] = a[9-i][j];
					a[9-i][j] = temp;
				}
				else{
					temp = a[i][j];
					a[i][j] = a[i][9-j];
					a[i][9-j] = temp;
				};
			};
			printf("%d	",a[i][j]);
		};
		printf("\n");
	};
return(0);
}
