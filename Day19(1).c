#include <stdio.h>

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) {
        return 1;
    }

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 || b == 0) {
        printf("LCM = 0\n");
        return 0;
    }

    long long x = a, y = b;
    while (y != 0) {
        long long rem = x % y;
        x = y;
        y = rem;
    }

    long long lcm = (a / x) * b;
    printf("LCM = %lld\n", lcm);
    return 0;
}