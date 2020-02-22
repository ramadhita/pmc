#include <stdio.h>
#include <math.h>

double f1x(double t);
double f2x(double t);
double convolute(double t);
void writeToTxt(FILE *fp,double x,double t);
const double N=10;
const double delta=0.01;
int main()
{
    // Open File
    FILE *fp;
    fp=fopen("data.csv","w+");
    // Hitung convolusi untuk 0<t<10
    for(double t=0;t<10;t+=delta)
    {
        // Hitung convolusi ke- t , lalu di write ke data.csv
        writeToTxt(fp,convolute(t),t);
    }
    //close file
    fclose(fp);
    return 0;
}
// Fungsi input t dan mengeluarkan hasil konvolusi ke t
double convolute(double t)
{
    double sum=0;
    // sum dari lower bound ke upper bound (N=10 karena fungsi tidak ada yang melewati +=10) 
    // Dengan Delta 0.001
    for (double p = -N; p < N; p+=delta)
        {
            //Rumus konvolusi
            sum+=f1x(p)*f2x((-p)+t)*delta;
        }
    // print hasil untuk debug 
    printf("t:%.2lf | sum:%lf\n",t,sum);
    return sum;
        
}
// Fungsi pertama
double f1x(double t)
{
    if((t>1) && (t<3))
    {
        return ((t/2)+0.5);
    }
    else
    {
        return 0;
    }
    
}
//Fungsi kedua
double f2x(double t)
{
    if ((t<0)&&(t>-1) )
    {
        return (t+1);
    }
    else if ((t>0)&&(t<1))
    {
        return (-t+1);
    }
    else
    {
        return 0;
    }
}
// Input hasil konvolusi dan waktu(t) dan di write ke dalam data.csv
void writeToTxt(FILE *fp,double x,double t)
{
    fprintf(fp,"%lf,%lf\n",t,x);
}

