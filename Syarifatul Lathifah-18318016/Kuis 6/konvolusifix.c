#include <stdio.h>
#include <stdlib.h>

float f1(float x){
	if((x>=1)&&(x<=3))
		return ((x-1)/2);
	else
		return 0;
}

float f2(float x){
	if((x<=0)&&(x>=-1))
		return x+1;
	else if((x>0)&&(x<=1))
		return 1-x;
	else
		return 0;
}
int main(){
	float hasil;
	float i,t,dt;
	FILE *data;

	dt = 0.01;
	t = 2;

	data = fopen("konvo.csv","w");
	fprintf(data,"t;f\n");

	for(t=2;t<=4;t=t+dt)
    {
		hasil = 0;
		for(i=1;i<=3;i=i+dt)
        {
			hasil = hasil + (f1(i)*f2(t-i)*dt);
		}
		fprintf(data,"%.2f;%.2f\n",t,hasil);
	}
	fclose(data);

	return 0;
}
