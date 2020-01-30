#include<stdio.h>

struct dataNilai {
    char *nama;
    int nilai;
    char index;
};
struct hasil {
    int max;
    int min;
    float avg;
};

int i;

char indexing (int nilai) {
    char output;

    if (nilai >= 80) {
        output = 'A';
    }
    else if (nilai >= 70) {
        output = 'B';
    }
    else if (nilai >= 65) {
        output = 'C';
    }
    else {
        output = 'D';
    }
    
    return (output);
}

struct hasil maxminavg (struct dataNilai input[5]) {
    int max = input[0].nilai, min = input[0].nilai;
    float avg = input[0].nilai;
    struct hasil hasili;

    for (i=1; i<5; i++) {
        if (input[i].nilai > max) {
            max = input[i].nilai;
        }
        if (input[i].nilai < min) {
            min = input[i].nilai;
        }
        avg += input[i].nilai;
    }
    avg = avg/5;
    hasili.max = max;
    hasili.min = min;
    hasili.avg = avg;

    return (hasili);
}

char modus (struct dataNilai input[5]) {
    int count[4] = {[0 ... 3] = 0};

    for (i=0; i<5; i++) {
        if (input[i].index == 'A') {
            count[0] += 1;
        }
        else if (input[i].index == 'B') {
            count[1] += 1;
        }
        else if (input[i].index == 'C') {
            count[2] += 1;
        }
        else if (input[i].index == 'D') {
            count[3] += 1;
        }
    }

    if ((count[0]>=count[1])&&(count[0]>=count[2])&&(count[0]>=count[3])) {
        return ('A');
    }
    else if ((count[1]>=count[0])&&(count[1]>=count[2])&&(count[1]>=count[3])) {
        return ('B');
    }
    else if ((count[2]>=count[0])&&(count[2]>=count[1])&&(count[2]>=count[3])) {
        return ('C');
    }
    else if ((count[3]>=count[0])&&(count[3]>=count[1])&&(count[3]>=count[2])) {
        return ('D');
    }
}

int main () {
    struct dataNilai data[5];
    struct hasil output;

    data[0].nama = "Mawar";
    data[0].nilai = 67;
    data[0].index = indexing(data[0].nilai);
    
    data[1].nama = "Melati";
    data[1].nilai = 85;
    data[1].index = indexing(data[1].nilai);

    data[2].nama = "Wisteria";
    data[2].nilai = 85;
    data[2].index = indexing(data[2].nilai);

    data[3].nama = "Carnation";
    data[3].nilai = 70;
    data[3].index = indexing(data[3].nilai);

    data[4].nama = "Lili";
    data[4].nilai = 60;
    data[4].index = indexing(data[4].nilai);

    output = maxminavg (data);
    for (i=0; i<5; i++) {
        if (data[i].nilai == output.max) {
            printf ("Nilai max = %d (%s)\n", output.max, data[i].nama);
        }
        if (data[i].nilai == output.min) {
            printf ("Nilai min = %d (%s)\n", output.min, data[i].nama);
        }
    }
    printf ("Rata-rata = %f\n", output.avg);
    printf ("Modus = %c", modus(data));
}