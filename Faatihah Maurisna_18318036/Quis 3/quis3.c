/* - Nama: Faatihah Maurisna A.
    - NIM : 18318036
    - Kuis 3
    - Deskripsi: membandigkan luas lingkaran dengan rumus perhitungan biasa dan perhitugan menggunakan integral
*/

#include<stdio.h>
#include<math.h>

int main()
{
	double phi, r, x, y, i, p, luas, jumlah, kurang;        //Deklarasi tipe data

	phi = 3.14;                                             //Konstanta yang dipakai
	r = 7;                                                  //Jari-jari lingkaran
	x = 0.0000001;                                          //Inisialisasi interval partisi

	luas = phi *7*7;                                        //Luas lingkaran dengan perhitungan biasa
    printf("luas = %f\n", luas);

	i = 0-7 ;                                               //Inisisalisasi, i= x pada bidang kartesius
	p = 0;                                                  //Inisialisasi  luas 0

	while (i <= r)                                          //Array untuk i< jari-jari
	{
        y = sqrt(r*r - i*i);                                //Pemanfaatn rumus phytagoras
        p = p+(x*y);                                        //Penjumlahan partisi
        i = i+x;                                            //Penjumlahan untuk indeks
	}

	jumlah = 2 *p;                                          //Luas rieman
	printf("%lf\n", jumlah);
	kurang = (jumlah-luas);                                 //Galat luas lingkaran
	printf("%.1lf \n", kurang);
	return(0);
}
