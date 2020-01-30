/*Fungsi untuk mencari nilai rata-rata*/

double nilai_rataan(int nilai[5])
{
    int total,count,i;
    double rataan;
    total=nilai[0];
    count=1;
    for(i=1;i<5;i=i+1){
        total=total+nilai[i];
        count=count+1;
    }
    rataan=total/count;
    return(rataan);
}
