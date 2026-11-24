#include <stdio.h>

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    unsigned long long binary = 0, place = 1;
    while (n > 0) {
        binary += (n % 2) * place;
        n /= 2;
        place *= 10;
    }

    printf("Binary = %llu\n", binary);
    return 0;
}