#include <stdio.h>

int main(void) {
    unsigned long long bin;
    if (scanf("%llu", &bin) != 1) {
        return 1;
    }

    if (bin == 0) {
        printf("1's Complement = 1\n");
        return 0;
    }

    unsigned long long comp = 0, place = 1;
    int width = 0;

    while (bin > 0) {
        unsigned long long bit = bin % 10;
        if (bit != 0 && bit != 1) {
            printf("Invalid binary input\n");
            return 1;
        }
        unsigned long long flipped = (bit == 0) ? 1 : 0;
        comp += flipped * place;
        place *= 10;
        bin /= 10;
        width++;
    }

    printf("1's Complement = %0*llu\n", width, comp);
    return 0;
}