#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 1) return 1;

    long long prod = n * (n + 1);
    if (prod % 2 != 0) {
        printf("-1\n");
        return 0;
    }

    long long targetSq = prod / 2;
    long long x = (long long)llround(sqrt((double)targetSq));

    if (x * x == targetSq) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}