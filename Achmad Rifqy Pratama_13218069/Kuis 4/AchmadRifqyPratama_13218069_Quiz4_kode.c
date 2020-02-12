/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#include <math.h>

int main() {
    FILE *fp;
    fp = fopen("C:/Users/Achmad Rifqy Pratama/Documents/ElectricalEngineering_2/Pemecahan Masalah dengan C/Achmad Rifqy Pratama_13218069/Kuis 4/dataKuis4.txt", "w+");
    float C = 0.000001, R = 10000, Vi = 5, Vo, v_awal;
    float delt = 0.0000001;

    while (Vo < Vi-0.031838){
        Vo = (Vi*delt + R*C*v_awal)/(delt+(R*C));
        v_awal = Vo;
        fprintf(fp, "%f\n", Vo);
    }
    fclose(fp);

    return 0;
}