struct student{
    char nama[15];
    char indeks;
    int  nilai;   
};
void max_min(struct student list[15]){
    int x, max, min;

    max = list[0].nilai;
    min = list[0].nilai;

    for(x=1;x<=4;x++){
        if(min > list[x].nilai){
            min = list[x].nilai;
        }
        if(max < list[x].nilai){
            max = list[x].nilai;
        }
    }

    for(x=0; x<=4; x++){
        if(list[x].nilai == min){
            printf("%d merupakan nilai terendah di kelas yang merupakan nilai dari %s\n",list[x].nilai, list[x].nama);
        }
    }
    for(x=0; x<=4; x++){
        if(list[x].nilai == max){
            printf("%d merupakan nilai tertinggi di kelas yang merupakan nilai dari %s\n",list[x].nilai, list[x].nama);
        }
    }
}
void ratarata(struct student list[15])
{
    int x;
    double count, avg;
    count = 0.0;

    for (x=0; x<=4; x++){
        count = count + list[x].nilai;
    }
    avg = count / 5;
    printf("Rata-rata kelas tersebut : %f\n", avg);
}

