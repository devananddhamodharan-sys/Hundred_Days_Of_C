#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        perror("Error opening numbers.txt");
        return 1;
    }

    long long sum = 0;
    long count = 0;
    int num;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in numbers.txt\n");
        return 0;
    }

    double avg = (double)sum / (double)count;
    printf("Sum = %lld, Average = %.2f\n", sum, avg);
    return 0;
}