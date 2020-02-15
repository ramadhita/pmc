#include <stdio.h>
#include <math.h>

float vo(float t)										//buat fungsi untuk mencari tegangan output
{
	//kamus
	float r, c, vs, b, a, dt, vout;						//inisialisasi variabel
	
	r = 10000;											//resistansi = 10k ohm
	c = 0.000001;										//kapasitansi = 1u farad
	a = 1/(r*c);										//permisalan
	vs = 5;												//tegangan sumber = 5 volt
	b = vs/(r*c);										//permisalan
	dt = 0.001;											//asumsi delta t = 0.001
	
	//pemrosesan
	if (t<=0)											//jika t kurang dari sama dengan 0
	{
		vout = 0;										//maka vout = 0
	}
	else												//jika t lebih dari 0 
	{
		vout = (vo(t-dt) + b*dt)/(1+(a*dt));			//maka vout = (vo(t-dt) + b*dt)/(1+(a*dt)) -> rumus step response rangkaian RC
	}
	return (vout);										//mengembalikan nilai vout
}


int main()
{
	FILE *filestep;										//membuat file
	filestep = fopen("stepresponse.csv","w");			//mmebuka file
	
	//kamus
	float dt, r, c, tmax, t, z;							//inisialisasi variabel
	
	dt = 0.001;											//asumsi delta t = 0.001
	r = 10000;											//resistansi = 10k ohm
	c = 0.000001;										//kapasitansi = 1u farad
	tmax = 12*r*c;										//asumsi tmax = 0.12 -> lihat dari hasil csv, tegangan output mencapai maksimal (5) ketika t >= 0.097 sekon
	t = 0;												//mulai dari t=0
	
	//iterasi
	while (t<=tmax)										//ketika t kurang dari sama dengan tmax
	{
		z = vo(t);
		fprintf(filestep, "%.3f;%.3f\n", t, z);			//menulis data ke dalam file csv dengan 3 angka di belakang koma
		t = t + dt;										//menambahkan waktu awal dengan delta t
	}

	fclose(filestep);									//menutup file
}