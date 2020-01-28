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

	printf("Modus = %c  , %d \n", findModusIndeks(kelas, 5), findNumModusIndeks(kelas, 5));
	printf("Maksimal = %s, %.1f \n", (kelas[(findMax(kelas,5))].Nama), (kelas[(findMax(kelas,5))].Nilai));
	printf("Minimal = %s, %.1f \n", (kelas[(findMin(kelas,5))].Nama),(kelas[(findMin(kelas,5))].Nilai));
	printf("rerata = %.1f \n", findAvg(kelas,5));
	return 0;
}
