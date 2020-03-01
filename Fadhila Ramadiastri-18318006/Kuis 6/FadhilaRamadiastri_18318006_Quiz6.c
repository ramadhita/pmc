#include <stdio.h>

float fx1(int x)    //fungsi untuk fx1
{
    float f1;
    if(x>=1 && x<=3)
    {
        f1 = x-1;
    }
    else
    {
        f1=0;
    }

    return f1;
    
}

float fx2(int x)    //fungsi untuk fx2
{
    float f2;
    if(x>=-1 && x<=0)
    {
        f2 = x+1;
    }
    else if(x>=0 && x<=1)
    {
        f2=1-x;
    }
    else
    {
        f2=0;
    }
    return f2;
}

int main()
{

    int  x, t; 
    float fx3;

    FILE *hasil_konvolusi;

    hasil_konvolusi = fopen("Data hasil konvolusi.txt", "w+"); //membuka file untuk hasil konvolusi
    
    fprintf(hasil_konvolusi, "x fx3\n");


    for(x=1; x<= 5; x++)
    {
        fx3 = 0;
        for(t=1; t<=3 ; t++)   
        {
            fx3 =fx3+(fx1(t)*fx2(x-t)); //proses konvolusi
        }
       
        fprintf(hasil_konvolusi, "%d ", x);
        fprintf(hasil_konvolusi, "%f\n", fx3);
    }

    fclose(hasil_konvolusi);

    return 0;
    
}