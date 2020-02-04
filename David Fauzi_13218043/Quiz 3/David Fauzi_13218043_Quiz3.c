#include <stdio.h>
#include <math.h>
#include <string.h>

double r,delta,xi,func,sum,i,ro,j,k,sum2,teta0,teta1,finalvalue,luas,error; 
const double n=1000000; // Semakin besar n, semakin akurasi (menuju tak hingga)
int main()
{
    // integral r
    // batas-batas integral
    r=7;
    ro=0;
    sum=0;
    i=0;
    delta=(r-ro);
    //integral terhadap r (sigma)
    while (i<=n)
    {   
        xi=ro + delta* i/n;
        func=xi;
        sum+=delta/n*func;
        i++;
    }
    printf("hasil integral pertama (terhadap r) :%.2lf \n",sum);
    
    //integral teta
    //batas-batas integral
    j=0;
    k=n;
    sum2=0;
    teta1=2*3.1415;
    delta=teta1-teta0;
    //integral terhadap teta (sigma)
    while (j<=k)
    {
        xi=teta0 + delta* j/k;
        func=sum;
        sum2+=func*delta/k;
        j++;
        
    }


    finalvalue=sum2;
    printf("\nnilai integral: %.7lf \n",finalvalue);
    luas=3.1415*r*r;
    printf("nilai rumus jadi: %.7lf\n",luas);
    error=abs(luas-finalvalue)/luas*100;
    printf("error : %.3lf \%\n ",error);
    return 0;
}