//Nama 	: Joshtein Andrew Widjaja
//NIM 	: 13218018
#include <stdio.h>
double D;
int i,j;
int main(void){
int M [2][2]={
	{1,-2},
	{1,-4}
};
int C [2][1]={
	{2},
	{-4}
};
double posisi [2][1];
for (i=0;i<=1;i++){
		posisi[i][0]=0;
}
D = (M[0][0]*M[1][1]) - (M[0][1]*M[1][0]);
double inversM [2][2] = {
	{(M[1][1]/D),(-1*M[0][1]/D)},
	{(-1*M[1][0]/D),(M[0][0]/D)}
};
for (i=0;i<=1;i++){
	for (j=0;j<=1;j++){
		posisi[i][0]= posisi[i][0] + (inversM[i][j]*C[j][0]);
	}
}
for (i=0;i<=1;i++){
	printf("%.2f\n",posisi[0][i]);
}
return 0;
}
