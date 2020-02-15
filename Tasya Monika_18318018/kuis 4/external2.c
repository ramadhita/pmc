#include <stdio.h>
#include <math.h>

int main()
{
	double vt, t, tc, dt, vi;

	tc = 0.01; //time constant = RC (R = 10k, C = 1u)
	dt = 0.0001;
	
	FILE *fp;
	
	fp = fopen("/tmp/rrc.txt", "w+");
	fprintf(fp, "V(t),t\n"); /*File txt yang dibuat dipisahkan dengan comma agar dapat
	dapat dibuka di excel dengan pengaturan comma delimited*/
	
	t = 0;
	vt = 0;
	vi = 5;
	
	while ((vt < vi) && (t < 0.5))
	{
		fprintf(fp,"%lf,", vt);
		fprintf(fp,"%lf\n", t);
		vt = (((vi*dt)+(vt*tc))/(tc+dt));
		t = t+dt;
	}
	
	fclose(fp);
	
	return(0);
}