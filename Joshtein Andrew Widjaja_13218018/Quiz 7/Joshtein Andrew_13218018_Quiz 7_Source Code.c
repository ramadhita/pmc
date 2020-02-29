#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
double h[1000]; 
int i,count;
const double g = 10;
double dh;
const double dt = 1;   
double t;                                                                                                                                                                                                                                                                             
int main(void){
	h[0] = 0;
	i = 1;
	t = 0;
	dh = (0.001*dt)-(sqrt(2*g*h[i-1])*dt*(3.14*0.025*0.025));
	h[i] = h[i-1] + dh;
	count = 2;
	while(h[i]>h[i-1]){
		i = i + 1;
		dh = (0.001*dt)-(sqrt(2*g*h[i-1])*dt*(3.14*0.025*0.025));
		h[i] = h[i-1] + dh;
		count = count + 1;
	};
	FILE *List;
	List = fopen("List.csv","w+");
	for(i=0;i<count;i++){
		fprintf(List,"%.5f,",h[i]);
	};
	fprintf(List,"\n");
	for(i=0;i<count;i++){
		fprintf(List,"%.5f,",t);
		t = t + dt;
	};
	printf("t = %f\n",t);
	fclose(List);
return(0);
}
