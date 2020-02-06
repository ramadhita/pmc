#include <stdio.h>
#include <math.h>

#define r 7
#define pi 3.14

int main(){
	float luas = pi * r * r;
	double a, del, link1, link2,theta, galat;
	
	del = 0.0000001;
	
	while(theta<2*pi){
		while(a<r){
			link1 = link1 + a*del;
			a+=del;
		}
		link2 = link2 + link1*del;
		theta+=del;
	}
	
	galat = fabs(link2 - luas);
	
	printf("luas = %f\n",link1);
	
	printf("luas = %f\n",link2);
	
	printf("luas = %f\n",luas);
	
	printf("galat = %f\n",galat);
	
	return 0;
	
}
