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

    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (isNegative) {
        rev = -rev;
    }

    printf("Reversed = %lld\n", rev);
    return 0;
}