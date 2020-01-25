
#include <stdio.h>
#include <math.h>
#define Speed 50
#define Grav 10
#define Sudut 60

int main(void)
{
    double speedx, speedy, x, y, t, countert;
    x=0;
    y=0;
    countert=0;
    t = 0.01;
    
   
    
    speedx = Speed * (cos((Sudut/180)*3.1415));
    speedy = Speed * (sin((Sudut/180)*3.1415));
    
    printf("%.2fm/s %.2fm/s \n", &speedx, &speedy);
    printf("detect loc : %.2fm , %.2fm \n", &x, &y);
    
    
    countert = countert + t;
    x = speedx*countert;
    y = speedy*t - Grav/2*countert*countert;
    
    while (y!=0)
    {
        printf("detect loc : %.2fm , %.2fm \n", &x, &y);
        countert = countert + t;
        x = speedx*countert;
        y = speedy*t - Grav/2*countert*countert;
    }
    printf("detect loc : %.2fm , %.2fm", &x, &y);
    
    
    
    return 0;
}

    
    

    return 0;
}
