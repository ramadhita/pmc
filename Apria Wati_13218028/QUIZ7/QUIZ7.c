#include<stdio.h>
#include<math.h>

//Q= A.v
// tangki bocor dengan diameter 5cm
// volume = 1 m^3
// laju debit air = 1 Liter/detik

int main(){
    //Deklarasi Variabel
    float Debit_Masuk = 0.001; // diubah ke meter kubik
    float Vol = 1;
    float R_bocor = 0.05/2;
    float g = 9.8;
    float dt = 0.1;
    float h=0 ;
    float t=0 ; 
    float v, Luas_bocor, Volume_Bocor, Volume_Masuk, Volume_tot;
    
    FILE *fp;

    // Membuka file
    fp = fopen("Grafik_tangki_bocor.csv", "w+");

    // Mencari hubungan antara ketinggian air dengan waktu
    while ((h<1) && (t<150)){
        v = sqrt(2*g*h);
        Luas_bocor = M_PI*(pow(R_bocor,2));
        Volume_Bocor = Luas_bocor*v*dt;
        Volume_Masuk = Debit_Masuk*dt;
        Volume_tot += (Volume_Masuk-Volume_Bocor);
        h = Volume_tot/1; // karena luas penampangnya 1
        t += dt;

        // Memasukkan data kedalam file 
        fprintf (fp, "%f %f\n", t, h);
    }
    
    // Menutup file
    fclose(fp);
}