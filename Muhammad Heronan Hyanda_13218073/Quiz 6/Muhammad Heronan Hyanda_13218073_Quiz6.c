#include <stdio.h>
#include <stdlib.h>

struct koordinat
{
    double x;
    double y;
};

double f1 (double x)
{
    //fungsi yang tidak bergeser
    if (x >= 1 && x <= 3)
    {
        return (0.5*x - 0.5);
    }
    else
    {
        return 0;
    }
}

double f2 (double x)
{
    //fungsi yang akan digeser-geser
    if (x >= -1 && x <= 0)
    {
        return 1+x;
    }
    else if (x > 0 && x <= 1)
    {
        return 1-x;
    }
    else
    {
        return 0;
    }
}

int main()
{
    //inisialisasi
    FILE *fp;
    char *filename  = "Result.txt";
    double dt = 0.001;
    double thou, t, sum;
    struct koordinat conv;

    //open file
    fp = fopen(filename, "w");

    //konvolusi
    for (thou = 0; thou <= 5; thou += dt)
    {
        sum = 0;
        for (t = 0; t <= thou; t+= dt)
        {
            sum += f1(t)*f2(thou-t)*dt;

        }
        conv.y = sum;
        conv.x = thou;
        printf("%lf, %lf\n", conv.x, conv.y);
        fprintf(fp, "%.4lf,%.4lf\n", conv.x, conv.y);
    }
    fclose(fp);
}
