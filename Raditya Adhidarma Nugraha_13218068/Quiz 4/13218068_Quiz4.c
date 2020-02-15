#include <stdio.h>

const int R = 10000;
const double C = 0.000001;
const int Vi = 5;

/*Rangkaian RC
 * I = C dVc/dt = Vr/R
 * dVc/dt = Vr / RC
 * Vc + Vr = Vi
 * Vr = Vi - Vc
 * dVc/dt = (Vi - Vc) / RC
 */

double Vo = 0;
double Voo;
double Vr;
double t = 0;
double dVo;

FILE* fi;

int main (){
	fi = fopen ("E:\\13218068PMCQUIZ4.csv", "a+");
	while (Vi - Vo >= 0.001) {
		fprintf (fi, "%lf,%lf\n", t, Vo);
		Voo = Vo;
		Vr = Vi - Voo;
		dVo = (Vr * 0.0001) / (R * C);
		Vo = Voo + dVo;
		t = t + 0.0001;
	}
	fclose (fi);
	return 0;
}

