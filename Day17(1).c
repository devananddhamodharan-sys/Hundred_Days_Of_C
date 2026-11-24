#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 0) {
        printf("Not an Armstrong Number\n");
        return 0;
    }

    long long temp = n;
    int digits = 0;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    long long sum = 0;
    while (temp > 0) {
        int d = (int)(temp % 10);
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= d;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == n) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}