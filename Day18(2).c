#include <stdio.h>

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) {
        return 1;
    }

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        long long rem = a % b;
        a = b;
        b = rem;
    }

    printf("HCF (GCD) = %lld\n", a);
    return 0;
}