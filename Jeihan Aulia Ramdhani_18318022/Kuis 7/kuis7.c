#include <stdio.h>
#include <math.h>
int main(){
	float Abocor= 3.141*2.5*2.5; //luas lubang yang bocor
	float Qsumber=1000; //debit air dari keran
	float Hmax=100;		//tinggi wadah
	float volume;	//volume tiap saat
	float dt=0.01;	//penambahan waktu
	float dV; //penambahan volume
	float t;	//waktu tiap saat
	float H,vin,vout; 	//tinggi, volume masuk dan volume keluar tiap saat
	
	t=0;//inisiasi
    H=0;
    volume=0;
    dV=1;
    
	FILE* file;
    file= fopen("Kuis 7.csv","w+"); //menulis data pada file
	fprintf(file,"t;h\n");
    fprintf(file,"%.2f;%.2f\n", t,H);
    
	while ((H<Hmax) && (dV>0.001)){	// menghitung tinggi air hanya
									//ketika saat tinggi belum mencapai maksimum
									//dan terjadi perubahan volume karena jika 
									//volume lebih kecil dari 0.001 maka tinggi setimbang
		vin=Qsumber*dt; //volume yang diberi keran 
		vout=(sqrt(2*1000*H))*Abocor*dt; //volume yang keluar dari lubang
		dV=vin-vout; 
		volume+=dV; //volume pada bak
		H+= volume/ (100*100); //tinggi bak adalah volume dibagi luas alas
		t+=dt; //waktu saat pertambahan tingi
		fprintf(file,"%.2f;%.2f\n",t,H); //memasukkan data
	}
	fclose(file);
	return 0;
}
	
