#include <stdio.h>
#define phi 3.14
#define n 520

float intr (float r){
    float hasil,y;
    float i;
    hasil=0;
    for(i=0;i<=r;i+=r/n){
        y=i;
        hasil+= y*(r/n);
    }
    return(hasil);
}

int main(){
    float j,sum,z,r,lingkaran;

    /*scanf("Harga jari jari adalah %f", &r);*/
    r=7;
    sum=0;
    
    
    for (j=0;j<=2*phi;j+=((2*phi)/n)){
        z=intr(r);
        sum=sum+z*((2*phi)/n);
    }

    lingkaran = phi*r*r;
    
    printf("Hasil integral adalah %f \n", sum);
    printf("Hasil lingkaran adalah %f", lingkaran);
    return(0);

}