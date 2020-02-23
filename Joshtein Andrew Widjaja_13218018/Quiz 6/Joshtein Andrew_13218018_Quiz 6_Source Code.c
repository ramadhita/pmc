#include <stdio.h>
#include <math.h>
double f1 (double t){ //fungsi 1
	if((t>=1)&&(t<=3)){
		return((t*0.5) - 0.5);
	}
	else{
		return(0);
	};
};
double f2 (double t){ //fungsi 2
	if((t<=0)&&(t>=-1)){
		return(t + 1);
	}
	else{
		if((t>=0)&&(t<=1)){
			return(1 - t);
		}
		else{
			return(0);
		};
	};
};
double f3[501]; //array untuk nilai dari fungsi f3
const double dt = 0.01; //delta t
double t,n; //t untuk pergeseran sumbu x, n untuk indeks loop ketika melakukan opersai konvolusi
int i; //indeks untuk array fungsi f3
int main() {
	// Melakukan konvolusi antara f1 dengan f2 dan menyimpannya pada f3
	i = 0;
	for(t=0;t<=5;t+=dt){
		for(n=-1;n<=3;n+=dt){ 
			f3[i]= f3[i] + ((f1(n)*f2(t-n)*dt));
		};
		i = i + 1;
	};
	FILE *List;
	List = fopen("data.csv","w+");
	for(i=0;i<501;i++){ //looping memasukkan anggota dari array dari awal hingga akhir ke dalam file .csv
		fprintf(List,"%.10f,",f3[i]);
	};
	fprintf(List,"\n");
	t = 0;
	for(i=0;i<501;i++){ //looping memasukkan waktu ke dalam file .csv
		fprintf(List,"%f,",t);
		t = t + dt;
	};
	fclose(List);
  return 0;
}
