// Fazha Ivanda/13218008
// Tugas 1

#include <stdio.h>
#include <string.h>

struct daftarnilai
{
    char* nama;
    int nilai;
    char* indeks;
};

void max(struct daftarnilai dn[5]);
void min(struct daftarnilai dn[5]);
void avg(struct daftarnilai dn[5]);
void modus(struct daftarnilai dn[5]);



int main (void)
{
    struct daftarnilai dn[5];

    dn[0].nama = "Mawar";
    dn[0].nilai = 67;
    dn[0].indeks = "C";
    dn[1].nama = "Melati";
    dn[1].nilai = 85;
    dn[1].indeks = "A";
    dn[2].nama = "Wisteria";
    dn[2].nilai = 85;
    dn[2].indeks = "A";
    dn[3].nama = "Carnation";
    dn[3].nilai = 70;
    dn[3].indeks = "B";
    dn[4].nama = "Lili";
    dn[4].nilai = 60;
    dn[4].indeks = "D";
    
    max(dn);
    min(dn);
    avg(dn);
    modus(dn);
    
    return 0;
    
}

void max(struct daftarnilai dn[5]){
             int i,idxmax,nmax;
             nmax = 0;
             idxmax = 0;
             for (i=0;i<5;i++){
                 if (nmax < dn[i].nilai){
                    nmax = dn[i].nilai;
                    idxmax = i;
                 }
             }
             printf(" Pemilik Nilai tertinggi adalah : %s \n",dn[idxmax].nama);
             
             printf(" Nilai tertinggi adalah %d \n",nmax);
}
             
         
void min(struct daftarnilai dn[5]){
             int i,idxmin,nmin;
             nmin = 100;
             idxmin = 0;
             for (i=0;i<5;i++){
                 if (nmin > dn[i].nilai){
                    nmin = dn[i].nilai;
                    idxmin = i;
                 }
             }
             printf(" Pemilik Nilai terendah adalah : %s \n",dn[idxmin].nama);
             
             printf(" Nilai terendah adalah %d \n",nmin);
}
void avg(struct daftarnilai dn[5]){
    int i,sum,jumlah;
    double rata2;
    sum = 0;
    jumlah = 0;
    for (i=0;i<5;i++){
        sum = sum + dn[i].nilai;
        jumlah = jumlah + 1;
    }
    rata2 = sum/jumlah;
    printf(" Rata-rata nilai adalah %f \n",rata2);

}
void modus(struct daftarnilai dn[5]){
    int i;
    char* moduss;
    int mods;
    int idxmodus;
    int counta,countb,countc,countd;
    counta = 0;
    countb = 0;
    countc = 0;
    countd = 0;
    for (i=0;i<5;i++){
        if (dn[i].indeks = "A")
            counta = counta + 1;
        else if (dn[i].indeks = "B")
            countb = countb + 1;
        else if (dn[i].indeks = "C")
            countc = countc + 1;
        else if (dn[i].indeks = "D")
            countd = countd + 1;
    } 
    if (counta > countb)
        if (counta > countc)
            if(counta > countd)
                moduss = "A";
            else if(counta < countd)
                moduss = "D";
        else if (countc > counta)
            if (countc > countd)
                moduss = "C";
            else if (countc < countd)
                moduss = "D";
    else if (countb > counta)
        if (countb > countc)
            if(countb > countd)
                moduss = "B";
            else if(countb < countd)
                moduss = "D";
        else if (countc > countb)
            if (countc > countd)
                moduss = "C";
            else if(countc < countd)
                moduss = "D";
    printf(" Modus nilai adalah %s \n",moduss);
    
}
