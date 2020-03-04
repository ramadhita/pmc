// Athaya Syaqra 18318021
#include <stdio.h>
#include <math.h>

int main()
{
    float v, luasbocor, Vbocor, Vmasuk, Vtot; // deklarasi variabel
    float volume = 1;
    float debit = 0.001;
    float r_bocor = 0.05/2;
    float g = 9.8;
    float dt = 0.1;
    float h = 0;
    float t = 0; 

    FILE *fp;
    fp = fopen("Tangki_Bocor.txt", "w"); // membuka file "Tangki_Bocor" dalam mode Write

    while ((h<1)&&(t<150))
    {
        v = sqrt(2*g*h); // kecepatan 
        luasbocor = (3.14)*(pow(r_bocor,2)); // luas bocor di dasar tangki berbentuk lingkaran
        Vbocor = luasbocor*v*dt;
        Vmasuk = debit*dt;
        Vtot += (Vmasuk-Vbocor);
        h = Vtot/1; // luas alas = 1
        t += dt; // increment dt 

        // output pada file txt
        fprintf (fp, "%f %f\n", t, h);
    }
    
    fclose(fp);
}
