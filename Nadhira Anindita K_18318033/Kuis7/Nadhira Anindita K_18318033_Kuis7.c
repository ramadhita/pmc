#include <stdio.h>
#include <math.h>
#define phi 3.14
#define gra 1000


int main(){
    float h_t,volume;
    float vout, vin, dV;
    float t, dt;
    float A_out, h_max;

    //inisiasi pada saat keran belum dibuka dan wadah masih kosong
    dt =0.01; //diambil delta t yang kecil agar akurat
    t=0;
    volume = 0;
    h_max = 100; //ketinggian maksimum wadah
    A_out = phi*2.5*2.5; //luas lubang bocor pada wadah
    dV = 1; //agar dapat masuk ke loop maka di asumsikan awal dulu untuk delta V = 1
    h_t=0;

    FILE* file1;
    file1= fopen("Debit Air.txt","w+"); //file txt yang akan menampung hasil ketinggian tiap detik

    fprintf(file1,"t,h\n");
    fprintf(file1,"%.2f,%.2f\n", t, h_t);
    //looping untuk ketika keran sudah mulai dibuka
    //batas nya h_max karena apabila melebihi artinya dia tumpah dan dV>0.001 karena jika lebih kecil sama dengan 0.001 artinya 
    //hasil volume bertambah sangat kecil dan ketinggian stabil
    while((h_t<h_max)&&(dV>0.001)){
        vin=1000*dt; //volume air yang masuk dari keran
        vout = (sqrt(2*gra*h_t))*dt*A_out; //volume air yang keluar dari lubang, dengan kecepatan air keluar sesuai hukum Toricelli
        dV = vin-vout; //hasil yang tersisa di wadah dari masukkan keran dan keluar dari bocor
        volume =volume + dV;
        h_t = h_t+volume/(100*100); //mencari ketinggian air di wadah sekarang setelah volume bertambah
        t+=dt; //waktu semenjak keran dibuka
        fprintf(file1,"%.2f,%.2f\n", t, h_t);
    }
    fclose(file1);
    return(0);
}