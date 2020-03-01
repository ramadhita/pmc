#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("C:/Users/Raka/Desktop/Quiz_6/sb_x.txt", "w");
    fp2 = fopen("C:/Users/Raka/Desktop/Quiz_6/sb_y.txt", "w");

    float y = 0, del_t = 0.01;
    

    for (float i = -1; i <= 3; i += 0.01)
    {
        y = 0;
        for (float j = -10; j <= 10; j+= 0.01)
        {
            if ((i >= -1) && (i < 0))
            {
                y += (0.5*((j - i) + 1))*(i + 1)*del_t;
            }
            
            else if ((i >= 0) && (i <= 3))
            {
                y += (0.5*((j - i) + 1))*(1 - i)*del_t;
            }
        }
        printf("%.2f %.2f\n", y, i);
        fprintf(fp1, "%.2f\n", i);
        fprintf(fp2, "%.2f\n", y);
    }
    return 0;
}