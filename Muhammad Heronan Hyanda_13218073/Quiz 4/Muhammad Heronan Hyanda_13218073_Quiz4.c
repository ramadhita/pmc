//Muhammad Heronan Hyanda (13218073)
#include <stdio.h>
#include <stdlib.h>
#define R 10000
#define C 0.000001

int main()
{
    FILE *fp;
    char *filename = "result.txt";
    float dt = 0.00001;
    double Vc = 0;
    double Vi = 5.0000;
    double I;

    /* open for writing */
    fp = fopen(filename, "w");
    
    /* Write content to file */
    I = Vi/R;
    do
    {
        Vc += I * dt / C;
        I = (Vi-Vc)/R;
        printf("%lf\n", Vc); //print pada console
        fprintf(fp, "%lf\n", Vc); //print pada file dengan menggunakan stream
    }while (Vi - Vc >= dt);

    /*Closing File Properly*/
    fclose(fp);
}
