#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 0) return 1;

    long long actualSum = 0;
    for (long long i = 0; i < n; i++) {
        long long val;
        if (scanf("%lld", &val) != 1) return 1;
        actualSum += val;
    }

    long long expectedSum = n * (n + 1) / 2;
    printf("%lld\n", expectedSum - actualSum);
    return 0;
}