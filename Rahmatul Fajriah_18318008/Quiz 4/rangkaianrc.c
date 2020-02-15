 # include <stdio.h>
 # include <math.h>
 # define e 2.718281828459
 int main()
 {
	 FILE*fwaktu;
	 FILE*fvot;
	 double c = 1*pow(10,-6);
	 double r = 10*pow(10,3);
	 double vi = 5;
	 double tou,t,tmaks,vot,d;
	 tou = c*r;
	 tmaks = 6*tou;
	 fwaktu = fopen("filewaktu.txt","w");
	 fvot = fopen("filevout.txt","w");
	 for (t=0; t<=tmaks; t=t+0.001)
	 {
		 d = -t/tou;
		 vot = vi-(vi*pow(e,d));
		 fprintf(fwaktu,"%lf\n",t);
		 fprintf(fvot,"%lf\n",vot);
	 }
	fclose(fwaktu);
	fclose(fvot);
}
