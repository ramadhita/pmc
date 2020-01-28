/*Fungsi untuk mencari nilai maksimum*/

void nilai_max(int nilai[5],int*max,int*idxmax)
{
    int i;
    *max=nilai[0];
    for(i=1;i<5;i=i+1){
        if (nilai[i]>*max)
            *idxmax=i,
            *max=nilai[i];
    }
}
