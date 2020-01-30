//Alexandra Handayani 18318026

#include<stdio.h> 

typedef struct daftarnama
{ 
 char *nama; 
 char idx; 
 int nilai; 
} daftar; 

int max (daftar a[])
{ 
int result, i;
result = a[0].nilai; 
for (i=1; i<5; i++) { 
  if (a[i].nilai > result) 
   result = a[i].nilai; 
 }
return result; 
} 

int min (daftar a[])
{ int result, i;
result = a[0].nilai; 
for (i=1; i<5; i++) { 
  if (a[i].nilai < result) 
   result = a[i].nilai; 
 }
return result; 
} 
void indeks(daftar a[])
{
 int i; 
 for (i=0; i<5; i++){
  if ( a[i].nilai >= 80)
   a[i].idx = 'A'; 
  else if ((a[i].nilai < 80) && (a[i].nilai >= 70)) 
   a[i].idx = 'B'; 
  else if ((a[i].nilai < 70) && (a[i].nilai > 60)) 
   a[i].idx = 'C'; 
  else 
   a[i].idx = 'D'; 
 }
} 

char modus (daftar a[]) 
{ 
 int maxcount=0, i, j;
 char maxvalue; 
 maxvalue=a[0].idx; 
 for (i = 0; i < 5;  i++) {
  int count = 0; 
  
  for (j=0; j<5; j++) { 
   if (a[j].nilai==a[i].nilai) 
    count++; ;
   }
  if (count > maxcount) {
   maxcount = count; 
   maxvalue = a[i].idx; 
  }
 }
 return maxvalue; 
} 
 
int sum (daftar a[]) 
{ 
 int i, sum =0; 
 for (i=0; i<5; i++) { 
  sum = sum + a[i].nilai; 
 } 
 return sum; 
} 

int main(){ 
  daftar array[5]; 
  float mean;
  int i;  
  
  indeks(array);
  array[0].nama = "Mawar"; 
  array[0].nilai = 67; 
  
  array[1].nama = "Melati"; 
  array[1].nilai = 85; 
  
  array[2].nama = "Wisteria"; 
  array[2].nilai = 85;  
  
  array[3].nama = "Carnation"; 
  array[3].nilai = 70;  
  
  array[4].nama = "Lili"; 
  array[4].nilai = 60;  
  
  mean = (sum(array))/5; 
  printf("Modus = %c\n", modus(array)); 
  printf("Nilai tertinggi = %d\n", max(array)); 
  printf("Data pemegang nilai tertinggi =\n"); 
  
  for (i=0; i<5; i++) { 
	if (array[i].nilai == max(array)){
		printf("%s,%c\n",array[i].nama,array[i].idx);
	}
	} 
	printf("\n");
  printf("Nilai terendah = %d\n", min(array));
  printf("Data pemegang nilai terendah =\n"); 
  for (i=0; i<5; i++) { 
	if (array[i].nilai == min(array)){
		printf("%s,%c\n",array[i].nama,array[i].idx);
	}
	} 
	printf("\n");
  printf("Rata-rata = %f\n", mean); 

 return 0;
}
