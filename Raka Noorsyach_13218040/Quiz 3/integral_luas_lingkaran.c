#include <stdio.h>

int main()
{
    float del_x = 0.0001;

    float lingkaran_1 = 0, lingkaran_2_r = 0, r = 0, comparator_r, lingkaran_2 = 0, error;

    r = 7;

    lingkaran_1 = 3.14*r*r;

        

    while (lingkaran_2_r < r)
    {
        lingkaran_2_r = lingkaran_2_r + (r*0.00001);
        r += 0.00001;
    }
    
    while (lingkaran_2 < lingkaran_1)
    {
        lingkaran_2 = lingkaran_2 + (lingkaran_2_r*0.00001);
        lingkaran_2_r += 0.00001;
    }
    

    //printf("lingkaran 1 : %f\n", comparator_r);
    //printf("lingkaran 2 : %f\n", lingkaran_2_r);

    printf("lingkaran 1 : %f\n", lingkaran_1);
    printf("lingkaran 2 : %f\n", lingkaran_2);

    error = lingkaran_2 - lingkaran_1;

    printf("error : %f", error);

    return 0;
}