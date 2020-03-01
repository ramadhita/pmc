#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Buat 10 data nilai mahasiswa/mahasiswi dan tentukan rata-rata dari nilai tersebut, sort nilai tersebut dari tinggi ke rendah*/ 

struct siswa 
{
	char* nama;
	int nim;
	int nilai;
};

int main()
{
	FILE*fp;
	fp=fopen("quis.txt","w");
	int i;
	struct siswa data[10];
	data[0].nama = "Mawar";
	data[0].nim = 18318001;
	data[0].nilai = rand()%51 + 50;
	data[1].nama = "Melati";
	data[1].nim = 18318002;
	data[1].nilai = rand()%51 + 50;
	data[2].nama = "Sri";
	data[2].nim = 18318003;
	data[2].nilai = rand()%51 + 50;
	data[3].nama = "Rama";
	data[3].nim = 18318004;
	data[3].nilai = rand()%51 + 50;
	data[4].nama = "Lili";
	data[4].nim = 18318005;
	data[4].nilai = rand()%51 + 50;
	data[5].nama = "Andi";
	data[5].nim = 18318006;
	data[5].nilai = rand()%51 + 50;
	data[6].nama = "Randi";
	data[6].nim = 18318007;
	data[6].nilai = rand()%51 + 50;
	data[7].nama = "Ria";
	data[7].nim = 18318008;
	data[7].nilai = rand()%51 + 50;
	data[8].nama = "Dini";
	data[8].nim = 18318009;
	data[8].nilai = rand()%51 + 50;
	data[9].nama = "Riri";
	data[9].nim = 18318010;
	data[9].nilai = rand()%51 + 50;
	fprintf(fp,"Nama,NIM,Nilai\n");
	
	for(i=0 ; i<=10; i=i+1)
	{
		fprintf(fp,"%s,%d,%d\n",data[i].nama,data[i].nim,data[i].nilai);
		fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}
int proses()
{
	FILE*ft;
	ft=fopen("urut.txt","w");
	int i,j,k;
	char*s;
	int t;
	int u;
	int jumlah;
	float rata2;
	struct siswa data[10];
	data[0].nama = "Mawar";
	data[0].nim = 18318001;
	data[0].nilai = rand()%51 + 50;
	data[1].nama = "Melati";
	data[1].nim = 18318002;
	data[1].nilai = rand()%51 + 50;
	data[2].nama = "Sri";
	data[2].nim = 18318003;
	data[2].nilai = rand()%51 + 50;
	data[3].nama = "Rama";
	data[3].nim = 18318004;
	data[3].nilai = rand()%51 + 50;
	data[4].nama = "Lili";
	data[4].nim = 18318005;
	data[4].nilai = rand()%51 + 50;
	data[5].nama = "Andi";
	data[5].nim = 18318006;
	data[5].nilai = rand()%51 + 50;
	data[6].nama = "Randi";
	data[6].nim = 18318007;
	data[6].nilai = rand()%51 + 50;
	data[7].nama = "Ria";
	data[7].nim = 18318008;
	data[7].nilai = rand()%51 + 50;
	data[8].nama = "Dini";
	data[8].nim = 18318009;
	data[8].nilai = rand()%51 + 50;
	data[9].nama = "Riri";
	data[9].nim = 18318010;
	data[9].nilai = rand()%51 + 50;
	for(i=0 ; i<10; i=i+1)
	{
		for (j=j+1; j<0; j=j+1)
		 {
			 if (data[i].nilai >= data[j].nilai)	//jika nilai pada kolom i >= dari kolom i+1
			 {
				 s = data[i].nama ;
				 t = data[i].nim ;
				 u = data[i].nilai ;
				 data[i].nama = data[j].nama;
				 data[i].nim = data[j].nim;
				 data[i].nilai= data[j].nilai;
				 data[j].nama = s;
				 data[j].nim = t;
				 data[j].nilai = u;
			 }	 
		 }
		 jumlah = jumlah + data[i].nilai;
	}
	rata2 = jumlah/10;
	fprintf(ft,"Hasil Pengurutan\n");
	fprintf(ft,"Rata-rata nilai = %f\n",rata2);
	
	for(k=0; k<=10; k=k+1)
	{
		fprintf(ft,"%s,%d,%d", data[k].nama,data[k].nim,data[k].nilai);
		fprintf(ft,"\n");
	}
	fclose(ft);
	return 0;
 }
 
