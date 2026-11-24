#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 0) {
        return 1;
    }

    long long sum = n * (n + 1) / 2;
    printf("Sum = %lld\n", sum);
    return 0;
}