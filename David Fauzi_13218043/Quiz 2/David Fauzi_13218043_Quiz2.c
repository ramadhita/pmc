#include <stdio.h>
#include <math.h>

double matrix[2][2];
double cmatrix[2];
double xmatrix[2][2];
double ymatrix[2][2];
double det,detx,dety;
int main(void)
{
    // input dalam format ax + by = c
    scanf("%lf %lf %lf",&matrix[0][0],&matrix[0][1],&cmatrix[0]);
    scanf("%lf %lf %lf",&matrix[1][0],&matrix[1][1],&cmatrix[1]);
    // duplicate array
       for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        xmatrix[i][j]=matrix[i][j];
        ymatrix[i][j]=matrix[i][j];
        }
    }
    // swap for Dx dan Dy
    for (int i = 0; i < 2; i++)
    {
        xmatrix[i][0]=cmatrix[i];
        ymatrix[i][1]=cmatrix[i];
    }
    // Determinan
    det= matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    detx= xmatrix[0][0]*xmatrix[1][1]-xmatrix[0][1]*xmatrix[1][0];
    dety= ymatrix[0][0]*ymatrix[1][1]-ymatrix[0][1]*ymatrix[1][0];
    printf("x : %.2lf\ny: %.2lf\n",detx/det,dety/det);
    printf("Program Ended \n");
    return 0; 
}