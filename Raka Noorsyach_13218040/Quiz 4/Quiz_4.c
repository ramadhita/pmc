#include <stdio.h>

int main()
{
    FILE *fp;
    FILE *fp1;

    fp = fopen("C:/Users/Raka/Desktop/Quiz_4/test.txt", "w+");
    fp1 = fopen("C:/Users/Raka/Desktop/Quiz_4/test1.txt", "w+");

    float v_t1 = 0;
    float v_t;
    float del_t = 0.00001;

    v_t = ((5*del_t + 0.01*v_t1)/(0.01 + del_t));

    while ((v_t < 5) && ((v_t) - (v_t1) >= 0.00001))
    {
        fprintf(fp, "%f\n", v_t);
        printf("%f\n", v_t);
        v_t1 = v_t;
        v_t = ((5*del_t + 0.01*v_t1)/(0.01 + del_t));
    }

    printf("\n%f", v_t);
    

    return 0;
}