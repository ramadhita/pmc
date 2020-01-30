/*  Nama    : Rizki Habibi Alamsyah
    NIM     : 13218080  */
	
#include<stdio.h>

main()
{
    double A[2][2]={2,-1,4,-1}; /*Matriks [x,y]*/
    double B[2]={-2,4}; /*Matriks [c1,c2]*/
    double xy[2];
    double A_inv[2][2];
    double det_A;
    det_A=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]); /*detA=ad-bc*/
    A_inv[0][0]=A[1][1]/det_A; /*Hitung invers matriks A*/
    A_inv[1][1]=A[0][0]/det_A;
    A_inv[0][1]=-A[0][1]/det_A;
    A_inv[1][0]=-A[1][0]/det_A;
    int i;
    for (i=0;i<2;i=i+1){
        xy[i]=A_inv[i][0]*B[0]+A_inv[i][1]*B[1]; /*Kalikan matriks A_inv dengan matriks B untuk memperoleh matriks [x,y]*/
    }
    printf("x=%1f\n",xy[0]); 
    printf("y=%1f",xy[1]);
}
