#include <stdio.h>

//#define dt 0.1

double f(float a){
	if ( (a>1) && (a<3) ){
		return ((a-1)/2);
	}
	else{
		return 0;
	}
}

double g(double a){
	if ((a>0) && (a<1)){
		return (1-a);
	}		
	else if ((a<0) && (a>-1)){
		return (1+a);
	}
	else{
		return 0;
	}
}

int main(){
	const double dt = 0.1;
	FILE * fp;
	fp = fopen ("soal2.txt","w+");
	
	double x,j; // i=x ; j=delta
	double h=0;

	for(j=0 ; j<10 ; j+=dt){
		h=0;
		for(x=-1 ; x<7 ; x+=dt){
			h+= f(x) * g((-x)+j) * dt ;
	//		printf("f = %f \n", f(i) );		printf("g = %f \n", g(i,j) );
			printf("%lf \n", h );
		}
		fprintf(fp , "%lf \t%lf \n",j, h );	
	}
	
	fprintf(fp , "%lf %lf \n",j, h );
	
	fclose (fp);
	
	return 0;
}
