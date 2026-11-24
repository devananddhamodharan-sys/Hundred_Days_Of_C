#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    int isNegative = (n < 0);
    if (isNegative) {
        n = -n;
    }

    if (n < 10) {
        printf("After swap = %lld\n", isNegative ? -n : n);
        return 0;
    }

    long long lastDigit = n % 10;
    long long power = 1;
    long long temp = n;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }
    long long firstDigit = temp;

    long long middle = (n % power) / 10;
    long long swapped = lastDigit * power + middle * 10 + firstDigit;

    if (isNegative) {
        swapped = -swapped;
    }

    printf("After swap = %lld\n", swapped);
    return 0;
}