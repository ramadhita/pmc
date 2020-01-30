/*Fungsi untuk menetukan indeks berdasarkan nilai*/

void indeks(int nilai[5],char*indeks[5])
{
    int i;
    for(i=0;i<5;i=i+1){
        if (nilai[i]>=80)
            *indeks[i]='A';
        else if (nilai[i]>=70)
            *indeks[i]='B';
        else if (nilai[i]>=60)
            *indeks[i]='C';
        else if (nilai[i]>=50)
            *indeks[i]='D';
        else
            *indeks[i]='E';
    };
}
