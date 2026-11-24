#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("Sum = %lld\n", sum);
    return 0;
}