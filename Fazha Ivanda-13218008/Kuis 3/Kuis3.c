 #include <stdio.h>

double luas1(int r);
double luas2(int r);

int main(void){
	int r;
	double hasil1,hasil2,error;
	
	r=7;
	hasil1 = luas1(r);
	hasil2 = luas2(r);
	error = hasil2-hasil1;
	printf(" Luas Cara 1 = %f .\n",hasil1);
	printf(" Luas Cara 2 = %f .\n",hasil2);
	printf(" Error = %f .\n",error);
 
}
double luas1(int r){
	double luas;
	luas = 22*r*r/7;
	return (luas);
}
double luas2(int r){
	double dr,recsum,max1,max2,area1,area2,a,b,c,d,sum;
	int i,j;
	
	recsum = 0;
	area1 = 0;
	area2 = 0;
	dr = 0.00001;
	max1 = r/dr;
	max2 = 2*3.14/dr;
	a = 0;
	b = dr;
	c = 0;
	d = dr;
	sum = 0;
	
	for (i=0;i < max1;i++){
		area1 = (b-a)*(b+a)/2;
		a = a + dr;
		b = b + dr;
		recsum = recsum + area1;
	}
	for (j=0;j < max2;j++){
		area2 = (d - c)*recsum;
		sum = sum + area2;
		c = c + dr;
		d = d + dr;
	}
	
	return (sum);
}
		
		