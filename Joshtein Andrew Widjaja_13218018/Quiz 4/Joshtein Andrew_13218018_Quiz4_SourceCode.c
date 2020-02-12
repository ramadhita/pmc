#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int i = 1;
double Vi;
double Vo[100];
double t = 0;
const double R = 10000;
const double C = 0.000001;
const double dt = 0.001;
int main(void){
	scanf("%lf",&Vi);
	Vo[0] = 0;
	while(t<=0.1){
		Vo[i] = (Vi+(Vo[i-1]*R*C/dt))/(1 + (R*C/dt));
		i = i + 1;
		t = t + dt;
	};
	FILE *LowPass;
	LowPass = fopen("sheet.txt","w");
	for(i=0;i<100;i++){
		fprintf(LowPass,"%.2lf\n",Vo[i]);
	};
	fclose(LowPass);
return(0);
}
