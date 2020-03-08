#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,j,k,l,m,n,o,p;
    int A[10][10];
    int hasil[10][10];
    int x;
    for(i = 0; i<10; i++){
        for(j = 0; j<10; j++){
      x = (rand()&20)-10;
      
      A[i][j] = x;
        }
   } 
   for(k = 0; k<10; k++){
        for(l = 0; l<10; l++){
            printf("%d ", A[k][l]);
        }
        printf("\n");
   }
   for(m = 0; m<10; m++){
        for(n = 0; n<10; n++){
          if((m == n) || (m+n == 9)){
            hasil[m][n] = A[m][n];
          }  else if ( m < n && m < 9-n){
            hasil[m][n] = A[9-m][n];
            hasil[9-m][n] = A[m][n];
          } else if (m < 9-n && m>n)
                {
                    hasil[m][n] = A[m][9-n];
                    hasil[m][9-n] = A[m][n];
                }
          
        }
   }

   printf("\n");
   printf("\n");
   for(o = 0; o<10; o++){
        for(p = 0; p<10; p++){
            printf("%d ", hasil[o][p]);
        }
        printf("\n");
   }
   

     
}