#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        n = -n;
    }

    int sum = 0;
    while (n > 0) {
        sum += (int)(n % 10);
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}