/*Nama: Faatihah maurisna A.*/
/*NIM : 18318036*/

#include <stdio.h>
#include<math.h>
float t, tm;        //tipe data untuk t(waktu)dan tm(waktu maksimum)
float x, y, xm;     //tipe data untuk x(jarak), y(tinggi), xm(jarak maksimum sentuh tanah)

int main()
{   float tm = 5.0;                             //tm(waktu maksimum) temuh bola, dihitung terlebih dahulu dengan tm=(2VoSin(sudut))/g
    float t=0;                                  //set t awal = 0
    while (t <= tm){                            //program pengulangan jika t <= tm
        x = 50 * 0.5 * t;                       //Rumus Vx pada parabola
        y = ((50* t *0.866)-(10*t));            //Rumus Vy pada parabola

        printf("Tracking posisi saat t= %f s\n",t);   //Cetak pada saat t , kemudian cetak pada saat tracking (x,y)
        printf("x= %f m\n",x);
        printf("y= %f m\n", y);
        t += 0.01;                                  //t akan bertambah sebanyak 0.01 lalu kembali ke pengulangan hingga
                                                    //syarat tidak terpenuhi
    }
    xm = (50*50* 0.866)/10;                             //Rumus jarak maksimum sentuh tanah
    printf("jarak maksimum sentuh tanah= %f m\n", xm);    //Cetak jarak maksimum hingga bola sentuh tanah
}


