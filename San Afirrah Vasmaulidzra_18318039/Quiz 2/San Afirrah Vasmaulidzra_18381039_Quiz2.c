#include <stdio.h>
#include <math.h>

int main(){
    int determinana, determinanx, determinany;
    int titikx, titiky, i, j;
    int matrixa[2][3], matrixx[2][2], matrixy[2][2];
    printf("bentuk umum : ay = bx + c\n");
    for (i = 0; i < 2; i++){
        printf("Fungsi %d\n", i+1);
        printf("Koefisien x, y, hasil\n");
        for(j = 0; j < 3; j++){
            scanf("%d", &matrixa[i][j]);
        }
    }
    for (i = 0; i<2; i++){
        for (j = 0; j<2; j++){
            matrixx[i][j]=matrixa[i][j];
            matrixy[i][j]=matrixa[i][j];
        }
    }
    matrixx[0][0] = matrixa[0][2]*(-1);
    matrixx[1][0] = matrixa[1][2]*(-1);
    matrixy[0][1] = matrixa[0][2];
    matrixy[1][1] = matrixa[1][2];

    determinana =(matrixa[0][0]*matrixa[1][1]-(matrixa[0][1]*matrixa[1][0]));
    determinanx =(matrixx[0][0]*matrixx[1][1]-(matrixx[0][1]*matrixx[1][0]));
    determinany =(matrixy[0][0]*matrixy[1][1]-(matrixy[0][1]*matrixy[1][0]));
    titikx = determinanx/determinana;
    titiky = determinany/determinana;
    
    printf("titik x: %d\n", titikx);
    printf("titik y : %d", titiky);

    return (0);
}