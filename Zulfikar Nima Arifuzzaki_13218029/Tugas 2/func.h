//NIM/NAMA	: 13218029/ZULFIKAR NIMA ARIFUZZAKI
//FUNCTION DAN STRUCT

#include <stdio.h>
#include <math.h>

struct alamat
	{
		char nama[10];
		int nilai;
		char indeks;
		};

// modus
char modus(struct alamat *siswa, int n)
{
	int nMax, i;
	char nIndeks[5] = {0,0,0,0,0}; //array yang berisikan jumlah masing-masing indeks
	
	for (i=0; i<= 4; i = i+1)
	{
		if (siswa[i].indeks == 'A')
		{
			nIndeks[0]  = nIndeks[0] + 1;
			}
		else if (siswa[i].indeks == 'B')
		{
			nIndeks[1] = nIndeks[1] + 1;
			}
		else if (siswa[i].indeks == 'C')
		{
			nIndeks[2] = nIndeks[2] + 1;
			}
		else if (siswa[i].indeks == 'D')
		{
			nIndeks[3] = nIndeks[3] + 1;
			}
		else
		{
			nIndeks[4] = nIndeks[4] + 1;
			};
		}
	
	nMax = 0; //digunakan untuk mencari indeks paling banyak muncul
	for (i = 1; i <=4; i = i+1)
	{
		if (nIndeks[i] >= nIndeks[nMax])
		{
			nMax = i;
			}
		};
	
	//return fungsi, yaitu modus indeks
	if (nMax == 0)
	{
		return('A');
		}
	else if (nMax == 1)
	{
		return('B');
		}
	else if (nMax == 2)
	{
		return('C');
		}
	else if (nMax == 3)
	{
		return('D');
		}
	else
	{
		return('E');
	}
}
	
	
