/*Fungsi untuk mencari nilai minimum*/

void nilai_min(int nilai[5],int*min,int*idxmin)
{
    int i;
    *min=nilai[0];
    for(i=1;i<5;i=i+1){
        if (nilai[i]<*min)
            *idxmin=i,
            *min=nilai[i];
    }
}
