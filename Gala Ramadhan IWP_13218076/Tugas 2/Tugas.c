#include <stdio.h>

int main(){
	
	float vot, vi, dt;
	
	vi = 5;
	float c = 0.000001;
	int r = 10000;
	dt = 0.00001;
	vot = 0;
	
	printf("vot = %f\n", vot);
	
	FILE *fp;
	
	fp = fopen("rc.txt", "w+");
	float t = 0;
	while( vot<=5-0.001 ){
		vot = ( (vi*dt) + (r*c*vot) )/ ((r*c)+dt) ;
		
		t+=dt;

		printf("vot = %f\n", vot);		
		fprintf(fp, "%f \t%f\n", vot, t);
		//fputs("%f", fp, vot);
		
	}
	fclose(fp);	
	
}
