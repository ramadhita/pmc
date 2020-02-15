#include <stdio.h>
#include <math.h>
#include <string.h>

/*	Hari dan Tanggal	: 11 Februari 2020
	Nama (NIM)			: Christy Grace Siagian (18317501)
	Deskripsi			: Rangkaian RC
*/

void transfer_Excel (FILE *fp){
	char time[100];
	char V[100];
	FILE *gp;
	fp = fopen("rangkaian_RC.txt","r");
	gp = fopen("rangkaian_RC.csv","w");
	fscanf(fp,"%s",time);
	while(strcmp(time,".")!=0){ // if not EOF
		fscanf(fp,"%s",V);
		fprintf(gp,"%s;%s\n",time,V);
		fscanf(fp,"%s",time);
	}
	
	fclose(fp);
	fclose(gp);
}

int main(){
	
	double V,R,C,t,dt;
	double time_constant,Vprev,Vnow,tick;
	double pembilang,penyebut;
	FILE *fp;
	
	//Inisialisasi variabel
	V = 5;
	R = 10000;
	C = 0.000001;
	dt = 0.001;
	tick = 0;
	
	//Masukkan user
	printf("Masukkan batas waktu yang diinginkan : \n");
	scanf("%lf",&t);
	
	fp = fopen("rangkaian_RC.txt","w+");
	time_constant = R*C;
	
	
	while(tick<=t){
		if(tick==0){
			Vnow = 0;
		}
		else{
			Vprev = Vnow;
			pembilang = Vprev+((V*dt)/time_constant);
			penyebut = 1+(dt/time_constant);
			Vnow = pembilang/penyebut;
		}
		fprintf(fp,"%.4f %.4f\n",tick,Vnow);
		tick+=dt;
	}
	fprintf(fp,".");// for marking the end of file
	
	fclose(fp);
	transfer_Excel(fp);
	
	return 0;
}