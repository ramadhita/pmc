/*Fungsi untuk mencari modus dari indeks*/

char modus_indeks(int indeks[5])
{
    char modus;
    int count[5];
    int nmodus,i;
    int countA,countB,countC,countD,countE;
    countA,countB,countC,countD,countE=0;
    for(i=1;i<5;i=i+1){
        if (indeks[i]='A')
            countA=countA+1;
        else if (indeks[i]='B')
            countB=countB+1;
        else if (indeks[i]='C')
            countC=countC+1;
        else if (indeks[i]='D')
            countD=countD+1;
        else
            countE=countE+1;
    }
    count[0]=countA;
    count[1]=countB;
    count[2]=countC;
    count[3]=countD;
    count[4]=countE;

    nmodus=count[0];
    for(i=1;i<5;i=i+1){
        if (count[i]>nmodus)
            nmodus=count[i];
    }

    if (nmodus=countA)
        modus='A';
    else if (nmodus=countB)
        modus='B';
    else if (nmodus=countC)
        modus='C';
    else if (nmodus=countD)
        modus='D';
    else
        modus='E';
    return(modus);
}
