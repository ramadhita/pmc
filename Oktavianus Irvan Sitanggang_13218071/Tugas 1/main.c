#include "stdio.h"
#include "math.h"
#include "string.h"
#include "mahasiswa.h"

mahas kelas[5];


int main(){
	// mahas *kelas = (mahas*) malloc(5*sizeof(mahas));
	constructor(&kelas[0], "Mawar", 67, 'C');
	constructor(&kelas[1], "Melati", 85, 'A');
	constructor(&kelas[2], "Wisteria", 85, 'A');
	constructor(&kelas[3], "Carnation", 70, 'B');
	constructor(&kelas[4], "Lili", 60, 'D');

	printf("Modus = %c  dengan jumlah %d \n", findModusIndeks(kelas, 5), findNumModusIndeks(kelas, 5));
	printf("Orang yang memiliki nilai tertinggi adalah %s dengan nilai %.1f \n", (kelas[(findMax(kelas,5))].Nama), (kelas[(findMax(kelas,5))].Nilai));
	printf("Orang yang memiliki minimal nilai adalah %s dengan nilai %.1f \n", (kelas[(findMin(kelas,5))].Nama),(kelas[(findMin(kelas,5))].Nilai));
	printf("rerata kelas adalah %.1f \n", findAvg(kelas,5));
	return 0;
}
