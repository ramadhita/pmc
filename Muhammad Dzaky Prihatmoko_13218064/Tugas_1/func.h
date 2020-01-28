

struct Siswa
{
    char nama[30];
    float nilai;
    char indeks;
};

char indeks_modus(struct Siswa * arr_nilai)
{
    /*Diproses*/
    int jumlah_A;
    jumlah_A = 0;
    int jumlah_B;
    jumlah_B = 0;
    int jumlah_C;
    jumlah_C = 0;
    int jumlah_D;
    jumlah_D = 0;
    int jumlah_E;
    jumlah_E = 0;

    for (int i=0;i<=4;i++)
    {
         if (arr_nilai[i].indeks=='A')
        {
            jumlah_A = jumlah_A +1;

        }
         else if (arr_nilai[i].indeks=='B')
        {
            jumlah_B = jumlah_B +1;

        }
         else if (arr_nilai[i].indeks=='C')
        {
            jumlah_C = jumlah_C +1;

        }
         else if (arr_nilai[i].indeks=='D')
        {
            jumlah_D = jumlah_D +1;

        }
         else
        {
            jumlah_E = jumlah_E +1;

        }
    }
     if (jumlah_A>jumlah_B && jumlah_A>jumlah_C && jumlah_A>jumlah_D && jumlah_A>jumlah_E)
    {
        return('A');
    }
    else if (jumlah_B>jumlah_A && jumlah_B>jumlah_C && jumlah_B>jumlah_D && jumlah_B>jumlah_E)
    {
        return('B');
    }
     else if (jumlah_C>jumlah_A && jumlah_C>jumlah_B && jumlah_C>jumlah_D && jumlah_C>jumlah_E)
    {
        return('C');
    }
     else if (jumlah_D>jumlah_A  && jumlah_D>jumlah_B  && jumlah_D>jumlah_C && jumlah_D>jumlah_E)
    {
        return('D');
    }
     else
    {
        return('E');
    }
}

