// Yasmin Sekar Arum / 13218063
// Kuis - 07 : Lamanya waktu pengisian bak air


#include <stdio.h>
#include <math.h>
// Fungsi untuk menghitung V dari lubang yang berlubang

float volum_kurang (float V){
    float A = (5*5*3.14/40000);         // luas lubang lingakarannya
    float g = 10;                       // nilai grafitasi
    float Vkurang = (sqrt(2*g*(V/1)));  // perumusan kecepatan keluarnya air dari lubang
    float Q_bocor = (0.01*A * Vkurang); // Debit air bocor
    return(Q_bocor);
}

//main program
int main (){
    //membuka file
    FILE *fp;
    fp = fopen("Data Pertambahan air dalam tangki.csv", "w+");
    //deklarasi variable yang digunakan
    float V_tangki_total = 1;
    float V_tangki1,  V_tangki2, V_tangki3, V_tangki4;
    float Q_keran = (0.001);// m^3/S
    float t=0;

    V_tangki1 = 0;
    V_tangki2 = 0;
    V_tangki3 = (Q_keran *0.01);
    V_tangki4 = 0;

    fprintf(fp, " V-tangki(m^3), V-bocor(m^3), waktu(s) \n");

    //looping perhitungan pertambahan volume air pada bak
    for (t = 0; ((V_tangki3 <= V_tangki_total) && ((V_tangki2-V_tangki3)!=0)); t =(t+0.01)){
        V_tangki1 =(( V_tangki3 + (Q_keran *0.01))); //penambahan air keran
        V_tangki2 = V_tangki3;
        V_tangki3 = V_tangki1 - V_tangki4;          // keadaan air saat ini
        V_tangki4 = ((volum_kurang((V_tangki3))));  // pengurangan air oleh lubang

        fprintf(fp, " %.6lf, %.6lf, %.4lf \n", V_tangki1, V_tangki3, t);                //mencetak pada file
        printf (" %.6fl, %.6fl, %fl, %.4lf \n", V_tangki1, V_tangki3, V_tangki4, t );   //mencetak pada layar
    }
    if ((V_tangki2-V_tangki3)==0){ // bila perubahan air = 0 = keadaan steady state
        fprintf(fp,"\n");
        fprintf(fp,"Keadaan penambahan air steady state dengan waktu hingga steady state = %.4lf s", t);
        printf("Keadaan penambahan air steady state dengan waktu hingga steady state = %.4lf s", t);
    }
    //menutup file yang sudah di buka
    fclose(fp);

return 0;

}
