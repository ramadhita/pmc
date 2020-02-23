//13218068 Raditya Adhidarma Nugraha

#include <stdio.h>

/* f1 = r(x - 1) / 3
 * f2 = (x - 1) (u(x + 1) - u(x)) + (1 - x)(u(x) - u(x - 1))
 * f3 = f1 * f2
 * Note : x from -4 to 5
 * Note : t from -4 to 5
 */

//f1(x)
double f1 (double x){
	double f;
	if ((x <= 1) || (x >= 3)){
		f = 0;
	}
	else {
		f = (x - 1) / 2;
	}
	return f;
}

//f2(x)
double f2 (double x){
	double f;
	if ((x >= -1) && (x <= 0)){
		f = x + 1;
	}
	else if ((x > 0) && (x < 1)){
		f = 1 - x;
	}
	else{
		f = 0;
	}
	return f;
}

double t;
double x;
double f3;

FILE* fi;

int main (){
	//Open File
	fi = fopen ("5-2.csv", "a+");
	
	//Start x = 0
	x = -4;
	while (x <= 5){
		f3 = 0;
		
		//Start t = 0
		t = -4;
		
		//Integration Over t
		while (t <= 5){
			f3 = f3 + (f1(t) * f2(x - t) * 0.001);
			t = t + 0.001;
		}
		
		//Output f3
		fprintf (fi, "%lf,%lf\n", x, f3);
		x = x + 0.001;
	}
	
	//Close File
	fclose (fi);
	return 0;
}
