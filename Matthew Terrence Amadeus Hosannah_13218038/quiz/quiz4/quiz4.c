#include <stdio.h>
#include <math.h>


float Vo(float (time)){ 
    float x,y, r = 10000,c = 0.000001,vi = 5, Vc, dt = 0.1, double temp;
    if (time <= 0) {
        Vc = 0; 
    }
    else {
        Vc = ((c * r * delta)/(delta + (r * c))) * ((Vi/(r*c)) + (temp/delta));
    }
    return (Vc);
}

int main(){
    FILE *fp;
    fp = fopen("quiz_step_response.csv", "w"); 
    float r =  10000.0, c = 0.000001, tmax = 0.1, delta = 0.001, vo;
    //inisialisasi
    for (double t = 0; t <= tmax; t += delta){
        
        vo = Vo(t);
        
        fprintf(fp, "%f,", t);
        fprintf(fp, "%f\n", vo);
                                                                                                                                                                   // menyimpan data t

    }
    fclose(fp); /
    return 0; 
}