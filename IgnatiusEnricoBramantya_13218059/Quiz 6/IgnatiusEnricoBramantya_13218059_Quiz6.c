//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Quiz 6 - Konvolusi 2 Fungsi Linear
//Date  : Selasa, 20 Februari 2020
#include <stdio.h>

#define del 0.01            //Increment Konvolusi / tingkat ketelitian
#define bound 10            //batas yang ditetapkan di soal

double function1(double x); //Deklarasi Fungsi - Fungsi
double function2(double x);
double convolutionfunction(double x);


void main(void) {
    FILE *fpt;

    fpt = fopen("outputfilefix.csv", "w+");//Open untuk Write File Output
    double t;

    //Pengulangan untuk setiap sumbu horizontal (didapat nilai Y tiap titik)
    for(double t=0;t<10;t+=del)
    {
        fprintf(fpt,"\n%.3f,%.3f",t,convolutionfunction(t));
    }
    //Close File Output
    fclose(fpt);
    return;
    
 }

double convolutionfunction(double x)                        //Fungsi yang akan mengembalikan nilai hasil konvolusi tiap waktu 
{
    double total,t;
    total = 0;
    for (double t = -bound; t < bound; t+=del)              //Batas sigma, diketahui dari soal
        {
            total += function1(t)*function2((-t)+x)*del;    //rumus dasar konvolusi 1 dimensi
        }
     
    printf("x = %.3lf f3(x): %lf \n",x,total);
    return total;
}
double function1(double x)                                  //Persamaan fungsi pertama F1(x) 
{ double var;
    
    if ((x>=1)&&(x<=3))
    {
        
        var = (x/2) - 0.5;
        return var;
    }
    else
    {
       
        var = 0;
        return (var);
    }
   
}

double function2(double x)                                   //Persamaan fungsi pertama F2(x) 
{ double var;
    if((x<=1) && (x>=0))
    {
       
        var = -x+1;
       
    }
    else if ((x>=-1)&&(x<=0))
    {
        var = x+1;
       
    }
    else
    {
        var = 0;
    }
    return var;
    
}
   
