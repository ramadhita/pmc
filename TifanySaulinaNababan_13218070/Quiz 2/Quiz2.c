#include <stdio.h>
#include<stdlib.h> 

    int main() {
        int det;
        int matrixa[2][2], kofaktor[2][2], matrixb[2][1], mul[2][1], hasil[2][1], i, j, k;
        matrixa[0][0] = 2;
        matrixa[0][1] = -1;
        matrixa[1][0] = 4;
        matrixa[1][1] = -1;

        matrixb[0][0] = -2;
        matrixb[1][0] = 4;
        
        //determinan bener
        det = matrixa[0][0]*matrixa[1][1] - matrixa[0][1]*matrixa[1][0];

        
        //kofaktor bener karna matrixa udah diganti
        kofaktor[0][0] = matrixa[1][1];
        kofaktor[0][1] = -matrixa[0][1];
        kofaktor[1][0] = -matrixa[1][0];
        kofaktor[1][1] = matrixa[0][0];

        //multiplying  
        for(i=0; i<2; i++){
            for(j=0; j<1; j++){    
                mul[i][j] = 0;    
                for(k=0; k<2; k++){    
                mul[i][j] += kofaktor[i][k]*matrixb[k][j];
                }    
            }    
        
        }
        //hasil
        hasil[0][0] = mul[0][0]/det;
        hasil[1][0] = mul[1][0]/det; 
        //for printing result    
        for(i=0; i<2; i++){    
            for(j=0; j<1; j++){    
                printf("%d\t",hasil[i][j]);    
            }    
            printf("\n");    
        } 
    return 0;
}

