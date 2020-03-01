//fungsi konvolusi 
#include <stdio.h> 
#define dt 0.01 //partisi

//pengisian fungsi 1 
//dari t=1 hingga t=3 baru ada nilainya
float f1(float t) {
	float hasil;  
		if (t>=1 && t<=3) { 
			hasil = (0.5)*t - 0.5;  
		}
		else {
			hasil = 0; 
		}
		return hasil; 
}
	
//pengisian fungsi 2 
//sesuai dengan fungsi pada saat t=-1 hingga t=1 (sisanya nol) 
float f2(float t) { 
	float hasil = 0; 
	if ((t>=-1) && (t<=0)) { 
		hasil = t + 1; 
	}
	else if ((t>0) && (t<=1)) { 
		hasil = 1 - t; 
	}
	else {
		hasil = 0;
	}
	return hasil; 
}

int main () { 
//untuk membuka file eksternal
FILE *fp; 
fp=fopen("konvolusi.csv","w+"); 
	//operasi konvolusi 
	float i,j; 
	float yt; 
	//untuk fungsi pada t tertentu
	for (i=1; i<=5; i+=dt) {
		yt=0; 
		//pengulangan/looping pada t
		for (j=0; j<=i; j+=dt) { 
			yt += (f1(j)*f2(i-j)*dt);
		}
		fprintf(fp,"%f, %f\n",i,yt);
	}
	fclose(fp); 
	
}
 
	
	
