//Struct Student merupakan struct berisi object Nama, Nilai, dan Indeks
struct Student{
    char Nama[10];
    int Nilai;
    char Indeks;
};

//Fungsi untuk menentukan indeks dari suatu input berupa nilai
char input_indeks(int x)
{
    char indeks;
    if (x >= 80)
    {
        indeks = 'A';
    }
    else if (x>=70 && x < 80)
    {
        indeks = 'B';
    }
    else if (x>60 && x < 70)
    {
        indeks = 'C';
    }
    else
    {
        indeks = 'D';
    }
    return indeks;
}

//Procedure untuk menghitung dan memunculkan nilai rata-rata dengan input berupa array berukuran 5 yang berisi data dengan struct Student
void cari_rata(struct Student x[5])
{
    int i;
    double average;
    double sum;

    sum = 0.0;

    for (i=0; i<=4; i++)
    {
        sum = sum + x[i].Nilai;
    }

    average = sum / 5;
    printf("Nilai rata-rata dari kelas tersebut adalah %f\n", average);
}

//Procedure untuk menghitung dan memunculkan nilai maksimum dan minimum dengan input berupa array berukuran 5 yang berisi data dengan struct Student
void maksimum_minimum(struct Student x[5])
{
    int i;
    int max, min, count_max, count_min;

    count_max = 0;
    count_min = 0;
    max = x[0].Nilai;
    min = x[0].Nilai;

    for(i=1;i<=4;i++)
    {
        if(max < x[i].Nilai)
        {
            max = x[i].Nilai;
        }

        if(min > x[i].Nilai)
        {
            min = x[i].Nilai;
        }
    }

    for(i=0;i<=4;i++)
    {
        if(x[i].Nilai == max)
        {
            printf("%s memperoleh nilai maksimum di kelas dengan nilai sebesar %d\n", x[i].Nama, x[i].Nilai);
        }
    }

    for(i=0;i<=4;i++)
    {
        if(x[i].Nilai == min)
        {
            printf("%s memperoleh nilai minimum di kelas dengan nilai sebesar %d\n", x[i].Nama, x[i].Nilai);
        }
    }
}

//Procedure untuk menentukan dan memunculkan modus dari data dengan input berupa array berukuran 5 yang berisi data dengan struct Student
void cari_modus(struct Student x[5])
{
    int i, count_a, count_b, count_c, count_d;

    for(i=0;i<=4;i++)
    {
        if (x[i].Nilai == 'A')
        {
            count_a = count_a + 1;
        }
        else if (x[i].Nilai == 'B')
        {
            count_b = count_b + 1;
        }
        else if (x[i].Nilai == 'C')
        {
            count_c = count_c + 1;
        }
        else if (x[i].Nilai == 'D')
        {
            count_d = count_d + 1;
        }
    };

    if (count_a > count_b && count_a > count_c && count_a > count_d)
    {
        printf("Modus dari indeks pada kelas tersebut adalah indeks A\n");
    }
    else if (count_b > count_a && count_b > count_c && count_b > count_d)
    {
        printf("Modus dari indeks pada kelas tersebut adalah indeks B\n");
    }
    else if (count_c > count_a && count_c > count_b && count_c > count_d)
    {
        printf("Modus dari indeks pada kelas tersebut adalah indeks C\n");
    }
    else if (count_d > count_a && count_d > count_b && count_d > count_c)
    {
        printf("Modus dari indeks pada kelas tersebut adalah indeks D\n");
    }
}
