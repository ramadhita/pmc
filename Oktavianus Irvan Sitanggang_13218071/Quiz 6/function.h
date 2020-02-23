#ifndef function_h
#define function_h
#define SAMP_X 0.001

double func1(double x){
    if (x < 1 || x > 3){
        return 0;
    }
    return ((x-1)/2);
}

double func2(double x){
    if  (x < -1 || x > 1){
        return 0;
    }
    if (x < 0){
        return (x + 1);
    }
    return (-x + 1);
}

void printFuncToFile(double f(double x) , FILE *fileName, double ts){
    double i = -5;
    for (; i < 5; i+=ts){
        fprintf(fileName,"%f,%f \n", i, f(i));
    }
}
#endif